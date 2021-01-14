#include <iostream>
#include <string>
#include <opencv2/imgcodecs.hpp>
#include <vector>


#include "ComplexNumber.h"
#include "Window.h"

using namespace cv;

void Window::DrawImage(const int pixel_size, const std::string filename){


    Mat imageMat(pixel_size, pixel_size, CV_8UC3);

    for (int i=pixel_size-1; i>=0; i--){
    //for (int i=0; i<pixel_size; i++) {
        for (int j=0; j<pixel_size; j++){
            int pixel_i = (pixel_size - 1) - i;
            Vec3b& bgr = imageMat.at<Vec3b>(pixel_i, j);

            // Converting pixel values to real and imaginary numbers for complex coordinate plane
            double real = ((double)(j+1)/pixel_size)*(Window::_x_max - Window::_x_min) + Window::_x_min;
            double imag = ((double)(i+1)/pixel_size)*(Window::_y_max - Window::_y_min) + Window::_y_min;

            // Creating Complex Number at current pixel point
            ComplexNumber<double> pixel_point(real, imag);
            //std::cout << pixel_point << std::endl;
            if(pixel_point.getConvergence() == true){
                bgr[0] = 0;
                bgr[1] = 0;
                bgr[2] = 0;
            }
            else{
                bgr[0] = 0;
                bgr[1] = 0;
                bgr[2] = 255*(pixel_point.getIterations())/35;
            }
        }
    }
    std::vector<int> compression_params;
    compression_params.push_back(IMWRITE_JPEG_QUALITY);
    compression_params.push_back(100);

    imwrite(filename + ".jpeg", imageMat, compression_params);
    std::cout << "Saved " << filename + ".jpeg" << " in the images folder!" << std::endl;
}

void Window::changeBounds(double x_min, double x_max, double y_min, double y_max){
    Window::_x_min = x_min;
    Window::_x_max = x_max;
    Window::_y_min = y_min;
    Window::_y_max = y_max;
}