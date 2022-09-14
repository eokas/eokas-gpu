# eokas-gpu

EokasGPU is a modern GPU SDK based on D3D12, Vulkan and Metal. It is similar to a RHI (Rendering Hardware Interface) library.

## Platforms
* D3D12: Windows
* Vulkan: Windows, Linux, Android
* Metal: macOS, iOS

## Build
### Build System Prerequisites
* C++ Compilers must suppport C++20 standard.
* CMake 3.20.x (or later) is required.
### Environment Variables
* **VK_SDK_PATH**: the path of vulkan sdk.
* **GLFW_SDK_PATH**: the path of glfw library.
### Build Steps
* Go into the project root directory.
* On Linux and macOS, please execute the shell script below:
```shell
./build.sh
```
* On Windows, please execute the bat script in command line:
```shell
./build.bat 
```

## License
MIT License 

Copyright (c) 2021 eokas
