# Mujoco Esim

Event-based cameras have shown advantages over classic cameras, including high dynamic range, low lattency and low energy consumption. Therefore, this emerging technology has the potential to redefine the state of the art in many computer vision areas, specially for edge applications as it is the case of robotics. That being said, being able to generate event-based vision datasets can be crucial in developing, improving and testing new state of the art computer vision approaches and algorithms for robotics.   

This work uses MuJoCo, a high performance physics engine, in combination with ESIM, an established event-generation method, to generate event-based vision datasets for robotics. It can also be integrated in non-static processes as visual servoing loops and reinfoccement learning training routines.

**First robotic simulator tool for generating event-based datasets specifically designed for the robotics domain**. Furthermore, to demonstrate its capabilities we generate an event-based visual dataset of industrial sockets, which is then used to train a SNN classifier.

The full pipeline using ROS2 can be found in the branch data_gen_ROS2. This branch includes:
- The data set generated for industrial socket classfictation
- The spiking classifier
- The pipeline to generate more datasets just as described in the paper [[Gintautas et al 2023]](https://dl.acm.org/doi/10.1145/3589737.3605984)
- An example of spiking visual servoing trained with reinforcement learning using our approach presented in [[Amaya et al 2023]](https://www.frontiersin.org/articles/10.3389/fnbot.2023.1239581/abstract) and [Amaya et al 2024 (Submitted to ICRA 2024 - Work under revision)]

We have also developed a light version which is not using ROS2, and thus, has no real-time functionalities, but is faster, simpler to install and to use. This will be uploaded in a branch called spiking_visual_servoing_noROS2 or a new repository will be linked here.

Furthermore, we have extended our work on neuromorphic robot control an reasoing to contorl the robot manipulator autonomourly to perform the full task of finding, classifying and approaching the right insertion hole for a given industrial plug. (This work is subject of a pending publication and will be eventually linked here).   

## Installation and Usage

The instructions for installing and using the different tools differ in every branch and are therefore independently described in the corresponding _README.md_ files.

## Authors and acknowledgment

- GINTAUTAS PALINAUSKAS, Department of Neuromorphic Computing, fortiss - Research Institute,
Germany
- CAMILO AMAYA, Department of Neuromorphic Computing, fortiss - Research Institute, Germany
- EVAN EAMES, Department of Neuromorphic Computing, fortiss - Research Institute, Germany
- MICHAEL NEUMEIER, Department of Neuromorphic Computing, fortiss - Research Institute, Germany
- AXEL VON ARNIM, Department of Neuromorphic Computing, fortiss - Research Institute, Germany

## License
This project is licensed on BSD 3-Clauses, Copyright 2022 fortiss, Neuromorphic Computing group
