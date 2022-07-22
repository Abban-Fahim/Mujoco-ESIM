import sys, os
import numpy as np
import matplotlib.pyplot as plt
import lava.lib.dl.slayer as slayer
from dv import LegacyAedatFile
from matplotlib import animation
import glob

# path to downloaded raw dvs gesture dataset
path = '/home/lecomte/Documents/datasets/gin_dataset/'

### command line to extract all .npz files into directory with the same name
### for i in *.npz; do mkdir ${i%.npz}; unzip "$i" -d "${i%.npz}";done

# choose datatype to store
data_type = 'bs2' #'npy'

# folder to store prepared dataset
data_folder = '/home/lecomte/Documents/ELEANOR/dvs_port_' + data_type +'/'

actionName = [
    'ethernet',
    'hdmi',
    'usb',
    'vga'
]

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
    return t

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

def convertPolarities(p) :
    #from -1/1 to 0/1 polarity values to match Aedat representation
    return [int((pol+1)/2) for pol in p]

def extractnpySample(filepath, x, y, p, t) :
    filedir = filepath + "/"
    x = x + np.load(filedir + 'x.npy').tolist()
    y = y + np.load(filedir + 'y.npy').tolist()
    p = p + np.load(filedir + 'p.npy').tolist()
    t = mergeTimeStamps(t,np.load(filedir + 't.npy').tolist())
    return x, y, p, t

def splitData(filename, path, numb_gest):
    """
       Split DVS Gesture Recordings into separate gesture sequences
    """
    # read raw event data
    x, y, p, t = extractnpySample(path + filename)
    # read labels
    labels = np.loadtxt(path + filename + '_labels.csv', delimiter=',', skiprows=1)
    labels[:,0]  -= 1

    # make folder to store data
    if not os.path.isdir(data_folder):
        os.mkdir(data_folder)

    lastAction = 100
    for action, tst, ten in labels:
        if action == lastAction:    continue # This is to ignore second arm_roll samples
        print(actionName[int(action)])
        # find events for current action
        ind = np.where((np.array(t) >= tst) & (np.array(t) < ten))
        ind = ind[0]
        ind = list(ind)
        # TD event for current action
        TD = slayer.io.Event(x[ind[0]:ind[-1]], y[ind[0]:ind[-1]], p[ind[0]:ind[-1]], (t[ind[0]:ind[-1]] - tst) / 1000)

        # option to save TD animation as GIF
        #anim = snn.io.animTD(TD)
        #anim.fig = plt.figure(figsize=(10, 10))
        #anim.save('gifs/' + filename + '{:g}.gif'.format(action), animation.PillowWriter(fps=24), dpi=300)
        lastAction = action

        # save events to npy-/bs2-file
        if data_type == 'npy':
            #snn.io.encodeNpSpikes(data_folder + '{:g}.npy'.format(numb_gest + action), TD)
            slayer.io.encode_np_spikes(data_folder + '{:g}.npy'.format(numb_gest + action), TD)
        elif data_type == 'bs2':
            slayer.io.encode_2d_spikes(data_folder + '{:g}.bs2'.format(numb_gest + action), TD)
        else:
            print('Wrong datatype. Choose bs2 or npy!')

        # write train/test file
        actions = [0, 2, 4, 6, 8, 10]
        with open('data_npy/train_6.txt', 'a') as f:
            if action in actions:
                f.write(str(int(numb_gest + action)) + ' ' + str(int(action+1)) + '\n')


def saveSample(numb, action, x, y, p, t):
    """
       Split DVS Gesture Recordings into separate gesture sequences
    """
    # make folder to store data
    if not os.path.isdir(data_folder):
        os.mkdir(data_folder)

    # TD event for current action
    TD = slayer.io.Event(rescaleEvents(x), rescaleEvents(y), convertPolarities(p), t)

    # option to save TD animation as GIF
    #anim = snn.io.animTD(TD)
    #anim.fig = plt.figure(figsize=(10, 10))
    #anim.save('gifs/' + filename + '{:g}.gif'.format(action), animation.PillowWriter(fps=24), dpi=300)

    # save events to npy-/bs2-file
    if data_type == 'npy':
        #snn.io.encodeNpSpikes(data_folder + '{:g}.npy'.format(numb + action), TD)
        slayer.io.encode_np_spikes(data_folder + '{:g}.npy'.format(numb + action), TD)
    elif data_type == 'bs2':
        slayer.io.encode_2d_spikes(data_folder + '{:g}.bs2'.format(numb + action), TD)
    else:
        print('Wrong datatype. Choose bs2 or npy!')

    # write train/test file
    actions = [0, 1, 2, 3]
    with open(data_folder + 'train.txt', 'a') as f:
        if action in actions:
            f.write(str(int(numb + action)) + ' ' + str(int(action+1)) + '\n')



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