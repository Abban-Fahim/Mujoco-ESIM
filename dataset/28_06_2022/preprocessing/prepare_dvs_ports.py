import sys, os
import numpy as np
import matplotlib.pyplot as plt
import lava.lib.dl.slayer as slayer
from dv import LegacyAedatFile
from matplotlib import animation
import glob

# path to downloaded raw dvs gesture dataset
#path = '/home/neumeier/Documents/eleanor/mujoco-eleanor/dataset/28_06_2022/original_event_imgs/'
path = '/home/neumeier/Documents/eleanor/dataset/gin_dataset/'

### command line to extract all .npz files into directory with the same name
### for i in *.npz; do mkdir ${i%.npz}; unzip "$i" -d "${i%.npz}";done

# choose datatype to store
data_type = 'bs2' #'npy'

# folder to store prepared dataset
data_folder = '/home/neumeier/Documents/eleanor/dataset/dvs_port_' + data_type +'/'
gif_folder = '/home/neumeier/Documents/eleanor/dataset/'

actionName = [
    'ethernet',
    'hdmi',
    'usb',
    'vga'
]


#actionName = ['ethernet']

def timeShift(t, start = 0) :
    # shift everyvalue of the array
    # and convert them into ms
    if t != None :
        if len(t) :
            offset = t[0] - start
            t_shift = [ts-offset for ts in t]
            if (t_shift[-1]-t_shift[0]) > 20 :
                print("sample duration : ",t_shift[-1]-t_shift[0])
            return t_shift

def mergeTimeStamps(t, t_new) :
    #append a new sequence of timestamp to an existing one
    #with a typical shift in between, and an offset on the added part
    if t_new != None and len(t_new) :
        t_ms = [ts/(10**5) for ts in t_new] #convertion to miliseconds
        shift_t_new = (t_ms[-1] - t_ms[0]) / len(t_ms)
    else :
        return t

    if t!= None and len(t):
        shift_t = (t[-1] - t[0]) / len(t)
        typical_shift = (shift_t_new + shift_t) / 2
        t = t + timeShift(t_ms, start = t[-1] + typical_shift)
    else : #if the timestamp list is empty, we initialize it starting from 0.
        typical_shift = shift_t_new
        t = timeShift(t_ms, start = 0)
    #print(t_new)
    #print(t)
    return t

def appendTimeStamps(t, t_new):

    if t_new != None and len(t_new) :
        t_ms = [ts//(10**5) for ts in t_new]

    t = t + t_ms

    return t

def t_shift(x, y, p, t):
    # shift time
    t_0 = t[0]
    t_new = [i - t_0 for i in t]

    return x, y, p, t_new


def rescaleEvents(x,factor = 128) :

    min_x = np.min(x)
    max_x = np.max(x)

    range_x = max_x - min_x
    if range_x > 0 :
        x_rescale = [int((value - min_x) / range_x * (factor -1)) for value in x]
    else :
        print("all the same")
        x_rescale = [factor // 2 for value in x] #if all values are identical, they are centered
    return x_rescale

def cropEvents(x, y, p, t, size = 128) :

    mean_x = np.mean(x)
    mean_y = np.mean(y)

    # focus on centre x
    x_min = mean_x - size/2
    x_max = mean_x + size/2 - 1
    y_min = mean_y - size/2
    y_max = mean_y + size/2 - 1
    ind = np.where((np.array(x) > x_min) & (np.array(x) < x_max) & (np.array(y) > y_min) & (np.array(y) < y_max))
    ind = ind[0].tolist()
    # downsample by 2
    x_new = [(x[i] - x_min) for i in ind]
    y_new = [(y[i] - y_min) for i in ind]
    p_new = [p[i] for i in ind]
    t_new = [t[i] for i in ind]

    return x_new, y_new, p_new, t_new

def convertPolarities(p) :
    #from -1/1 to 0/1 polarity values to match Aedat representation
    return [int((pol+1)/2) for pol in p]

def extractnpySample(filepath, x, y, p, t) :
    filedir = filepath + "/"
    x = x + np.load(filedir + 'x.npy').tolist()
    y = y + np.load(filedir + 'y.npy').tolist()
    p = p + np.load(filedir + 'p.npy').tolist()
    #t = mergeTimeStamps(t,np.load(filedir + 't.npy').tolist())
    t = appendTimeStamps(t, np.load(filedir + 't.npy').tolist())
    return x, y, p, t


def saveSample(numb, action, x, y, p, t):
    """
       Split DVS Gesture Recordings into separate gesture sequences
    """
    # make folder to store data
    if not os.path.isdir(data_folder):
        os.mkdir(data_folder)
    # preprocess events
    p = convertPolarities(p)
    x, y, p, t = cropEvents(x, y, p, t)
    x, y, p, t = t_shift(x, y, p, t)
    # TD event for current action
    #TD = slayer.io.Event(rescaleEvents(x), rescaleEvents(y), convertPolarities(p), t)
    TD = slayer.io.Event(x, y, p, t)

    # option to save TD animation as GIF
    #if numb < 100:
    anim = TD.anim(frame_rate=24)
    anim.fig = plt.figure(figsize=(10, 10))
    anim.save(gif_folder + 'gifs/' + '{:g}.gif'.format(numb), animation.PillowWriter(fps=24), dpi=300)

    # save events to npy-/bs2-file
    if data_type == 'npy':
        #snn.io.encodeNpSpikes(data_folder + '{:g}.npy'.format(numb + action), TD)
        slayer.io.encode_np_spikes(data_folder + '{:g}.npy'.format(numb + action), TD)
    elif data_type == 'bs2':
        slayer.io.encode_2d_spikes(data_folder + '{:g}.bs2'.format(numb + action), TD)
    else:
        print('Wrong datatype. Choose bs2 or npy!')

    # write train/test file
    #actions = [0, 1, 2, 3]
    with open(data_folder + 'train.txt', 'a') as f:
        #if action in actions:
        f.write(str(int(numb)) + ' ' + str(int(action)) + '\n')



if __name__ == '__main__':
    count = 0
    action = 0
    #loop to convert events for different ports
    #for each port, you have directories for each sample, with a .npy for each event axis
    #(x,y,t,p)
    for port in actionName :
        events_file = path + port + "/events/"
        print(events_file)
        print(os.path.isfile(events_file))
        if True : 
            x = []
            y = []
            p = []
            t = []
            cumul = 0
            for sample in sorted(os.listdir(events_file)) :
                #print(sample)
                x, y, p, t = extractnpySample(events_file + sample, x, y, p, t)
                cumul += 1
                if (t[-1] - t[0]) > 500 :
                    print(t[-1] - t[0])
                    saveSample(count, action, x, y, p, t)
                    x = []
                    y = []
                    p = []
                    t = []
                    count += 1
                    cumul = 0
        action += 1