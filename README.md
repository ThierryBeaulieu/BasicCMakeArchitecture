# BasicCMakeArchitecture

CMake is a tool that might seem counter intuitive at first. I found a couple of standard CMake architecture on the internet, but they are a bit limited. For this reason, I created this template as a basic entry point for anyone tasked with creating a small CMake project. The example in the template was used to create a chess game. Feel free to adjust it to your needs or delete it entirely.

Using this template, you can easily generate solutions for Visual Studio, projects for XCode, Makefiles, etc. The point is, you can generate and build your project anywhere.

# Installation Steps

The project depends on [CMake](https://cmake.org/install/). I recommend you download the CMake GUI (it makes things that much easier!). Once you're done with that bit, you should also download or fork this github repository. 

If you are using the CMake GUI, you need to select the root folder of this very repository as your CMake workspace. After that, you need to specify the location of the build folder (this can be anywhere on your computer, but I recommend you keep it somewhat close, as this is where the generated files will end up). The last thing that you need to do is to specify your project's configuration. 

Ta daaaah, you're done.
