import cv2
import numpy as np

file_path = "original_event_imgs/00000466.png"
img = cv2.imread(file_path)

size = 64
x = 600
y = 430

crop_img = img[y:y+size, x:x+size]
crop_img = np.where(crop_img == 0, 255, crop_img)
cv2.imshow("cropped", crop_img)
cv2.waitKey(0)