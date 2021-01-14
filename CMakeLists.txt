cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")
set(CMAKE_TOOLCHAIN_FILE, "/Users/adam/vcpkg/scripts/buildsystems/vcpkg.cmake")
project(Mandelbrot)

set(OpenCV_DIR "/Users/adam/vcpkg/installed/x64-osx/share/opencv/")
set(protobuf_DIR "/Users/adam/vcpkg/installed/x64-osx/share/protobuf/")
find_package(OpenCV REQUIRED PATHS "/Users/adam/vcpkg/installed/x64-osx/include/opencv2/")

include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(Mandelbrot src/main.cpp src/Window.cpp)
target_link_libraries( Mandelbrot ${OpenCV_LIBS} )