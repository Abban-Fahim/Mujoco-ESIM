#!/bin/bash
#SBATCH --gres=gpu:1

singularity exec --nv singularity/img113 python3 RL/sac_cuda_norm.py --env $1