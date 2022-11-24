#!/bin/bash
#SBATCH --gres=gpu:1

sudo singularity build --nv elen2.sif image.def