import cv2
import numpy as np
import os

save_path = "cropped_event_imgs"

size = 64
x = 600
y = 430

path = "original_event_imgs"
dir_list = os.listdir(path)

print(dir_list)

for f in dir_list:
    file_path = os.path.join(path, f)
    img = cv2.imread(file_path)

    crop_img = img[y:y+size, x:x+size]

    # for visibility
    crop_img = np.where(crop_img == 0, 255, crop_img)

    new_img_path = os.path.join(save_path, f)
    cv2.imwrite(new_img_path, crop_img)

print("Done!\n")