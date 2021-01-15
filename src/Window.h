#ifndef WINDOW_H
#define WINDOW_H

#include <string>

/*
The Window class is responsible for constructing the image of the Mandelbrot set given the boundries of the 
Complex Coordinate Plane.

Attributes:
_x_min : Lower x-axis boundary
_x_max : Higher x-axis boundary
_i_min : Lower imaginary axis boundary
_i_max : Higher imaginary axis boundary
*/
class Window{
    public:
        // Constructor
        Window(double x_min, double x_max, double i_min, double i_max) : _x_min(x_min), _x_max(x_max), _i_min(i_min), _i_max(i_max){};

        // Methods
        void DrawImage(int pixel_size, std::string filename);
        void changeBounds(double x_min, double x_max, double i_min, double i_max);

    private:
        double _x_min;
        double _x_max;
        double _i_min;
        double _i_max;
};

#endif