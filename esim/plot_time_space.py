from mpl_toolkits import mplot3d
import matplotlib.patches as mpatches

import numpy as np
import matplotlib.pyplot as plt
import os


# path = "/home/palinauskas/Documents/mujoco-eleanor/img/events/seq0"
path = "/home/palinauskas/Documents/mujoco-eleanor/img/events_mujoco/seq0"

keys = ["x", "y", "t", "p"]
total_data = {k: np.array([]) for k in keys}

files = os.listdir(path)
files.sort()

count = 0
for f in files[-6:]:
    
    if f.endswith(".npz"):
        count += 1
        print(f)
        data = np.load(os.path.join(path, f))
        for k in keys:
            print(data[k].size)
            total_data[k] = np.concatenate((total_data[k], data[k]), axis=None)
    
    if count > 5:
        break

min_time, max_time = min(total_data["t"]), max(total_data["t"])
min_x, max_x = min(total_data["x"]), max(total_data["x"])
min_y, max_y = min(total_data["y"]), max(total_data["y"])
H, W = 720, 1280
xs = (max_x - min_x) * 1e-2
ys = (max_y - min_y) * 1e-2
ts =  (max_time - min_time) * 1e-7
print(ts, xs, ys)

# Creating figure
fig = plt.figure()
ax = plt.axes(projection ="3d")
ax.set_box_aspect((ts, xs, ys))

e_pos = {key:total_data[key][np.where(total_data['p'] == 1)[0]] for key in total_data}
e_neg = {key:total_data[key][np.where(total_data['p'] == -1)[0]] for key in total_data}
 
# Creating plot
marker_size = 0.01
scatter1 = ax.scatter3D(e_pos["t"], e_pos["x"], e_pos["y"], s=marker_size, color = "red")
scatter2 = ax.scatter3D(e_neg["t"], e_neg["x"], e_neg["y"], s=marker_size, color = "green")
plt.title("Space-time event plot")
ax.set_xlabel('t', fontweight ='bold')
ax.set_ylabel('x', fontweight ='bold')
ax.set_zlabel('y', fontweight ='bold')
pos_patch = mpatches.Patch(color='red', label='neg events')
neg_patch = mpatches.Patch(color='green', label='pos events')
ax.legend(handles=[pos_patch, neg_patch])
ax.grid(True)
 
# show plot
plt.show()