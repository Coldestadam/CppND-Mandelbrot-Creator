cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

# If using vcpkg, apply its root on your machine or remove the line if you do not use vcpkg
set(CMAKE_TOOLCHAIN_FILE, "[vcpkg root]/scripts/buildsystems/vcpkg.cmake")

# Constructing Project
project(Mandelbrot)

# If using vcpkg, apply its root on your machine or change the directories to where OpenCV is installed
set(OpenCV_DIR "[vcpkg root]/installed/x64-osx/share/opencv/")
set(protobuf_DIR "[vcpkg root]/installed/x64-osx/share/protobuf/")
find_package(OpenCV REQUIRED PATHS "[vcpkg root]/vcpkg/installed/x64-osx/include/opencv2/")

# Building the Executable
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(Mandelbrot src/main.cpp src/Window.cpp)
target_link_libraries( Mandelbrot ${OpenCV_LIBS} )
