#include <iostream>
#include <string>

#include "Window.h"

/**
 * @brief
 * Converts a 'double' number to a string that guarantees two integers after the decimal point 
 * for the purpose of formatting the string for the file name of the image.
 * 
 * @param num 
 * @return std::string 
 */
std::string numberFormatting(double num) {
    std::string numString = std::to_string(num);
    if (numString.substr(0, 1) == "-") { return numString.substr(0, 5); }

    return numString.substr(0, 4);
}

/**
 * @brief 
 * This is the main program that takes User's input and outputs an image of their desired subset
 * of the Mandelbrot set.
 * 
 * 
 * @return int 
 */
int main() {
    double x_min, x_max, i_min, i_max;
    int pixel_size;
    std::string filename;
    std::string changeName;


    std::cout << "Welcome to my Madelbrot Set Program." << std::endl;
    std::cout << "You have full customization to establish the boundaries of the complex plane." << std::endl;
    std::cout << "In the lines below, it will ask for the boundaries which are stored as 'double' datatypes" << std::endl;

    std::cout << "\n\nThis is my recommendation: " << std::endl;
    std::cout << "x_min = -1.5" << std::endl;
    std::cout << "x_max = 0.5" << std::endl;
    std::cout << "i_min = -1" << std::endl;
    std::cout << "i_max = 1" << std::endl;

    // Taking User's complex coordinate plane boundaries
    std::cout << "Please enter the lower bound of the x-axis (x_min): ";
    std::cin >> x_min;

    std::cout << "Please enter the higher bound of x-axis (x_max): ";
    std::cin >> x_max;

    std::cout << "Please enter the lower bound of Imaginary Axis (i_min): ";
    std::cin >> i_min;

    std::cout << "Please enter the higher bound of Imaginary Axis (i_max): ";
    std::cin >> i_max;

    // Taking the User's desired pixel resolution for the image
    std::cout << "\n\nPlease enter the pixel resolution for the squared image (ex. 720, 1080, 1480): ";
    std::cin >> pixel_size;

    // Creating the preset image file name with the current complex coordinate boundaries
    filename = "mandelbrot_XMIN(" + numberFormatting(x_min) + ")_XMAX(" + numberFormatting(x_max) + ")_iMIN(" + numberFormatting(i_min) + ")_iMAX(" + numberFormatting(i_max) + ")";

    // Asking the user if they would like to change the file name
    std::cout << "\n\nThe preset file name is " << filename << ".jpeg" << std::endl;
    std::cout << "Would you like to customize the file name? yes(y) or no(n): ";
    std::cin >> changeName;

    // If they want to change the name, they will give the file their custom name
    if (changeName == "y" || changeName == "Y"){
        std::cout << "All images are JPEG files so please give a name for _________.jpeg: ";
        std::cin >> filename;
    }


    Window window(x_min, x_max, i_min, i_max);
    window.DrawImage(pixel_size, filename);

    return 0;
}