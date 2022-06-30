#!/bin/bash

file_name="data_info.txt"

 > data_info.txt
echo "$file_name content erased"

counter=0
for n in $(ls cropped_event_imgs/); do 
       	echo "$n $counter" >> data_info.txt; 
       	counter=$(($counter+1));
done

echo "$file_name is initialized"

