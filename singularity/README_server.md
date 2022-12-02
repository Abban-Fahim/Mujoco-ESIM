# Navigation commands


```
cd mujoco-eleanor

```

```
cd mujoco-eleanor/singularity

```

# Build on the cluster

```
sudo singularity build singularity/eleanor.sif image.def

```


# Run RL

Explanation:

```
sudo sbatch run_script.sh env_name

```

Example:

```
sudo sbatch run_script.sh PegInHole-rand_events_visual_servoing_guiding2

```


# Print progress out 

```
tail -n 20 slurm-xxx.out

```



