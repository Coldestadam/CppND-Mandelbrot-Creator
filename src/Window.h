#ifndef WINDOW_H
#define WINDOW_H

#include <string>


class Window{
    public:
        // Constructor
        Window(double x_min, double x_max, double y_min, double y_max) : _x_min(x_min), _x_max(x_max), _y_min(y_min), _y_max(y_max){};

        // Methods
        void DrawImage(int pixel_size, std::string name);
        void changeBounds(double x_min, double x_max, double y_min, double y_max);

    private:
        double _x_min;
        double _x_max;
        double _y_min;
        double _y_max;
};

#endif