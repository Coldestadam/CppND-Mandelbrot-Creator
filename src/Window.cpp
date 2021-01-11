#include <iostream>
#include <fstream>
#include <string>

#include "ComplexNumber.h"
#include "Window.h"


void Window::DrawImage(int pixel_size, std::string name){

    std::ofstream my_Image (name+".jpeg");
    if (my_Image.is_open()) {
        my_Image << "P3\n" << pixel_size << " " << pixel_size << " 255\n";
        for (int j=0; j<pixel_size; j++){
            for (int i=0; i<pixel_size; i++){

                // Converting pixel values to real and imaginary numbers for complex coordinate plane
                double real = ((double)(i+1)/pixel_size)*(Window::_x_max - Window::_x_min) + Window::_x_min;
                double imag = ((double)(j+1)/pixel_size)*(Window::_y_max - Window::_y_min) + Window::_y_min;

                // Creating Complex Number at current pixel point
                ComplexNumber<double> pixel_point(real, imag);
                if(pixel_point.getConvergence() == true){
                    my_Image << 0 << ' ' << 0 << ' ' << 0 << "\n";
                }
                else{
                    my_Image << (255*pixel_point.getIterations())/35 << ' ' << 0 << ' ' << 0 << "\n";
                }
            }
        }
        my_Image.close();

        std::cout << "Saved " << name + ".jpeg" << " in your current directory" << std::endl;
    }
    
    else std::cout << "Could not open the file";
}

void Window::changeBounds(double x_min, double x_max, double y_min, double y_max){
    Window::_x_min = x_min;
    Window::_x_max = x_max;
    Window::_y_min = y_min;
    Window::_y_max = y_max;
}