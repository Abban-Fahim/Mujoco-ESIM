#!/bin/bash
#SBATCH --gres=gpu:1

sudo singularity build elen2.sif image.def