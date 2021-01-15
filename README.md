# Udacity CPPND Capstone: Mandelbrot Set Creator

<p align="center">
 <img src= "https://github.com/Coldestadam/CppND-Mandelbrot-Creator/blob/main/images/mandelbrot_XMIN(-1.50)_XMAX(0.50)_iMIN(-1.00)_iMAX(1.00).jpeg" height=600>
 <img src= "https://github.com/Coldestadam/CppND-Mandelbrot-Creator/blob/main/images/mandelbrot_XMIN(-0.20)_XMAX(0.05)_iMIN(0.75)_iMAX(1.00).jpeg" height=600>
 </p>

This C++ Capstone Projects provides a custom built Mandelbrot Set Creator that gives the user ultimate control of finding their desired subset of the Mandelbrot Set.

## User Control

<p align="center">
<img src= "https://github.com/Coldestadam/CppND-Mandelbrot-Creator/blob/main/images/Screen%20Shot%202021-01-14%20at%204.28.31%20PM.png" height=500>
</p>

This project gives you full customization to get the subset of the Mandelbrot set you want and the desired resolution of the output image.

This is what you have control over:

1. The boundaries of Complex Coordinate Plane
2. The Resolution of the output image
3. The name of the image

These features are all accessible during the execution of the program in your terminal.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
  
* OpenCV >= 4.1
  * The OpenCV 4.1.0 source code can be found [here](https://github.com/opencv/opencv/tree/4.1.0)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./Mandelbrot`.
