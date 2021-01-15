#include <iostream>
#include <string>
#include <opencv2/imgcodecs.hpp>
#include <vector>


#include "ComplexNumber.h"
#include "Window.h"

using namespace cv;

/**
 * @brief 
 * This takes the desired pixel resolution and file name of the user
 * and constructs the image of the Mandelbrot Set.
 * 
 * @param pixel_size Desired Pixel Size of the User
 * @param filename Name of the image to be saved
 */
void Window::DrawImage(const int pixel_size, const std::string filename){

    // Creating an OpenCV Mat object to construct the image
    // CV_8UC3 is the datatype with 8-bit unsigned integers with 3 color-channels
    Mat imageMat(pixel_size, pixel_size, CV_8UC3);

    //for (int i=pixel_size-1; i>=0; i--){
    for (int i=0; i<pixel_size; i++){
        for (int j=0; j<pixel_size; j++){

            //
            int pixel_i = (pixel_size - 1) - i;
            Vec3b& bgr = imageMat.at<Vec3b>(i, j);

            // Scaling row pixel index i to begin at (pixel_size-1) to 0
            int scaled_i = (pixel_size - 1) - i;
            
            // Converting pixel values to real and imaginary numbers for complex coordinate plane
            double real = ((double)(j+1)/pixel_size)*(Window::_x_max - Window::_x_min) + Window::_x_min;
            double imag = ((double)(scaled_i+1)/pixel_size)*(Window::_i_max - Window::_i_min) + Window::_i_min;

            // Creating Complex Number at current pixel point
            ComplexNumber<double> C (real, imag);

            // If f(z) = z^2 + C converges, the pixel values of Complex Number 'C' will be black
            if(C.getConvergence() == true){
                bgr[0] = 0;
                bgr[1] = 0;
                bgr[2] = 0;
            }

            // If f(z) = z^2 + C diverges, the pixel values of Complex Number 'C' will be red
            else{
                bgr[0] = 0;
                bgr[1] = 0;
                // Pixels are brighter as the number of iterations to diverge gets closer to its convergence threshold
                bgr[2] = 255*(C.getIterations())/C.getThreshold();
            }
        }
    }

    // Constructing Image Parameters that maximizes JPEG quality
    std::vector<int> image_params;
    image_params.push_back(IMWRITE_JPEG_QUALITY);
    image_params.push_back(100);

    // Writing the image using OpenCV and saves it to the image folder in the parent directory
    imwrite("../images/" + filename + ".jpeg", imageMat, image_params);
    std::cout << "Saved " << filename + ".jpeg" << " in the images folder!" << std::endl;
}

/**
 * @brief
 * Changes the Window object's coordinate boundaries after being initialized
 * 
 * @param x_min Lower x-axis boundary
 * @param x_max Higher x-axis boundary
 * @param i_min Lower imaginary axis boundary
 * @param i_max Higher imaginary axis boundary
 */
void Window::changeBounds(double x_min, double x_max, double i_min, double i_max){
    Window::_x_min = x_min;
    Window::_x_max = x_max;
    Window::_i_min = i_min;
    Window::_i_max = i_max;
}