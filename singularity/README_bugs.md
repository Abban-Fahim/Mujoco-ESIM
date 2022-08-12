error running: \
`sudo singularity build el.sif image.def`

```
+ pip install rpg_vid2e/esim_torch/
Processing /rpg_vid2e/esim_torch
  Preparing metadata (setup.py) ... done
Building wheels for collected packages: esim-torch
  Building wheel for esim-torch (setup.py) ... error
  error: subprocess-exited-with-error
  
  × python setup.py bdist_wheel did not run successfully.
  │ exit code: 1
  ╰─> [62 lines of output]
      /usr/local/lib/python3.8/dist-packages/torch/cuda/__init__.py:83: UserWarning: CUDA initialization: Unexpected error from cudaGetDeviceCount(). Did you run some cuda functions before calling NumCudaDevices() that might have already set an error? Error 803: system has unsupported display driver / cuda driver combination (Triggered internally at  ../c10/cuda/CUDAFunctions.cpp:109.)
        return torch._C._cuda_getDeviceCount() > 0
      No CUDA runtime is found, using CUDA_HOME='/usr/local/cuda'
      running bdist_wheel
      running build
      running build_py
      creating build
      creating build/lib.linux-x86_64-3.8
      creating build/lib.linux-x86_64-3.8/esim_torch
      copying src/esim_torch/__init__.py -> build/lib.linux-x86_64-3.8/esim_torch
      copying src/esim_torch/esim_torch.py -> build/lib.linux-x86_64-3.8/esim_torch
      running build_ext
      building 'esim_cuda' extension
      creating /rpg_vid2e/esim_torch/build/temp.linux-x86_64-3.8
      creating /rpg_vid2e/esim_torch/build/temp.linux-x86_64-3.8/src
      creating /rpg_vid2e/esim_torch/build/temp.linux-x86_64-3.8/src/esim_torch
      Traceback (most recent call last):
        File "<string>", line 2, in <module>
        File "<pip-setuptools-caller>", line 34, in <module>
        File "/rpg_vid2e/esim_torch/setup.py", line 4, in <module>
          setup(
        File "/usr/lib/python3/dist-packages/setuptools/__init__.py", line 144, in setup
          return distutils.core.setup(**attrs)
        File "/usr/lib/python3.8/distutils/core.py", line 148, in setup
          dist.run_commands()
        File "/usr/lib/python3.8/distutils/dist.py", line 966, in run_commands
          self.run_command(cmd)
        File "/usr/lib/python3.8/distutils/dist.py", line 985, in run_command
          cmd_obj.run()
        File "/usr/local/lib/python3.8/dist-packages/wheel/bdist_wheel.py", line 299, in run
          self.run_command('build')
        File "/usr/lib/python3.8/distutils/cmd.py", line 313, in run_command
          self.distribution.run_command(command)
        File "/usr/lib/python3.8/distutils/dist.py", line 985, in run_command
          cmd_obj.run()
        File "/usr/lib/python3.8/distutils/command/build.py", line 135, in run
          self.run_command(cmd_name)
        File "/usr/lib/python3.8/distutils/cmd.py", line 313, in run_command
          self.distribution.run_command(command)
        File "/usr/lib/python3.8/distutils/dist.py", line 985, in run_command
          cmd_obj.run()
        File "/usr/lib/python3/dist-packages/setuptools/command/build_ext.py", line 87, in run
          _build_ext.run(self)
        File "/usr/lib/python3.8/distutils/command/build_ext.py", line 340, in run
          self.build_extensions()
        File "/usr/local/lib/python3.8/dist-packages/torch/utils/cpp_extension.py", line 765, in build_extensions
          build_ext.build_extensions(self)
        File "/usr/lib/python3.8/distutils/command/build_ext.py", line 449, in build_extensions
          self._build_extensions_serial()
        File "/usr/lib/python3.8/distutils/command/build_ext.py", line 474, in _build_extensions_serial
          self.build_extension(ext)
        File "/usr/lib/python3/dist-packages/setuptools/command/build_ext.py", line 208, in build_extension
          _build_ext.build_extension(self, ext)
        File "/usr/lib/python3.8/distutils/command/build_ext.py", line 528, in build_extension
          objects = self.compiler.compile(sources,
        File "/usr/local/lib/python3.8/dist-packages/torch/utils/cpp_extension.py", line 581, in unix_wrap_ninja_compile
          cuda_post_cflags = unix_cuda_flags(cuda_post_cflags)
        File "/usr/local/lib/python3.8/dist-packages/torch/utils/cpp_extension.py", line 480, in unix_cuda_flags
          cflags + _get_cuda_arch_flags(cflags))
        File "/usr/local/lib/python3.8/dist-packages/torch/utils/cpp_extension.py", line 1694, in _get_cuda_arch_flags
          arch_list[-1] += '+PTX'
      IndexError: list index out of range
      [end of output]
  
  note: This error originates from a subprocess, and is likely not a problem with pip.
  ERROR: Failed building wheel for esim-torch
  Running setup.py clean for esim-torch
Failed to build esim-torch
Installing collected packages: esim-torch
  Running setup.py install for esim-torch ... error
  error: subprocess-exited-with-error
  
  × Running setup.py install for esim-torch did not run successfully.
  │ exit code: 1
  ╰─> [64 lines of output]
      /usr/local/lib/python3.8/dist-packages/torch/cuda/__init__.py:83: UserWarning: CUDA initialization: Unexpected error from cudaGetDeviceCount(). Did you run some cuda functions before calling NumCudaDevices() that might have already set an error? Error 803: system has unsupported display driver / cuda driver combination (Triggered internally at  ../c10/cuda/CUDAFunctions.cpp:109.)
        return torch._C._cuda_getDeviceCount() > 0
      No CUDA runtime is found, using CUDA_HOME='/usr/local/cuda'
      running install
      running build
      running build_py
      creating build
      creating build/lib.linux-x86_64-3.8
      creating build/lib.linux-x86_64-3.8/esim_torch
      copying src/esim_torch/__init__.py -> build/lib.linux-x86_64-3.8/esim_torch
      copying src/esim_torch/esim_torch.py -> build/lib.linux-x86_64-3.8/esim_torch
      running build_ext
      building 'esim_cuda' extension
      creating /rpg_vid2e/esim_torch/build/temp.linux-x86_64-3.8
      creating /rpg_vid2e/esim_torch/build/temp.linux-x86_64-3.8/src
      creating /rpg_vid2e/esim_torch/build/temp.linux-x86_64-3.8/src/esim_torch
      Traceback (most recent call last):
        File "<string>", line 2, in <module>
        File "<pip-setuptools-caller>", line 34, in <module>
        File "/rpg_vid2e/esim_torch/setup.py", line 4, in <module>
          setup(
        File "/usr/lib/python3/dist-packages/setuptools/__init__.py", line 144, in setup
          return distutils.core.setup(**attrs)
        File "/usr/lib/python3.8/distutils/core.py", line 148, in setup
          dist.run_commands()
        File "/usr/lib/python3.8/distutils/dist.py", line 966, in run_commands
          self.run_command(cmd)
        File "/usr/lib/python3.8/distutils/dist.py", line 985, in run_command
          cmd_obj.run()
        File "/usr/lib/python3/dist-packages/setuptools/command/install.py", line 61, in run
          return orig.install.run(self)
        File "/usr/lib/python3.8/distutils/command/install.py", line 589, in run
          self.run_command('build')
        File "/usr/lib/python3.8/distutils/cmd.py", line 313, in run_command
          self.distribution.run_command(command)
        File "/usr/lib/python3.8/distutils/dist.py", line 985, in run_command
          cmd_obj.run()
        File "/usr/lib/python3.8/distutils/command/build.py", line 135, in run
          self.run_command(cmd_name)
        File "/usr/lib/python3.8/distutils/cmd.py", line 313, in run_command
          self.distribution.run_command(command)
        File "/usr/lib/python3.8/distutils/dist.py", line 985, in run_command
          cmd_obj.run()
        File "/usr/lib/python3/dist-packages/setuptools/command/build_ext.py", line 87, in run
          _build_ext.run(self)
        File "/usr/lib/python3.8/distutils/command/build_ext.py", line 340, in run
          self.build_extensions()
        File "/usr/local/lib/python3.8/dist-packages/torch/utils/cpp_extension.py", line 765, in build_extensions
          build_ext.build_extensions(self)
        File "/usr/lib/python3.8/distutils/command/build_ext.py", line 449, in build_extensions
          self._build_extensions_serial()
        File "/usr/lib/python3.8/distutils/command/build_ext.py", line 474, in _build_extensions_serial
          self.build_extension(ext)
        File "/usr/lib/python3/dist-packages/setuptools/command/build_ext.py", line 208, in build_extension
          _build_ext.build_extension(self, ext)
        File "/usr/lib/python3.8/distutils/command/build_ext.py", line 528, in build_extension
          objects = self.compiler.compile(sources,
        File "/usr/local/lib/python3.8/dist-packages/torch/utils/cpp_extension.py", line 581, in unix_wrap_ninja_compile
          cuda_post_cflags = unix_cuda_flags(cuda_post_cflags)
        File "/usr/local/lib/python3.8/dist-packages/torch/utils/cpp_extension.py", line 480, in unix_cuda_flags
          cflags + _get_cuda_arch_flags(cflags))
        File "/usr/local/lib/python3.8/dist-packages/torch/utils/cpp_extension.py", line 1694, in _get_cuda_arch_flags
          arch_list[-1] += '+PTX'
      IndexError: list index out of range
      [end of output]
  
  note: This error originates from a subprocess, and is likely not a problem with pip.
error: legacy-install-failure

× Encountered error while trying to install package.
╰─> esim-torch

note: This is an issue with the package mentioned above, not pip.
hint: See above for output from the failure.
FATAL:   While performing build: while running engine: exit status 1
```

if running: \
`sudo singularity build --nv el.sif image.def` \
 gives out unziping error, run again.
Sometimes it fails to find unzip files