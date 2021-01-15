#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <complex>
#include <iostream>

/**
 * @brief 
 * Creating the subclass 'Complex Number' of parent class 'std::complex' that contains the same advantages
 * of 'std::complex' but with the purpose of checking if it belongs in the Mandelbrot Set.
 * 
 * @tparam T Template Datatype to construct this class
 */
template <typename T>
class ComplexNumber : public std::complex<T>{
    public:

        // Overriding '=' assignment operator to do calculations with the subclass 'ComplexNumber'
        void operator=(const std::complex<T>&& complex) {
            (*this) = ComplexNumber<T>(std::real(complex), std::imag(complex));
        }

        // Checks if the current complex number 'C' converges the function f(z) = z^2 + C
        void checkConvergence() {
            // Declaring the first input z of f(z) as z=0, which f(z) = z * z + c(current complex number)
            std::complex<T> z(0, 0);

            // Checking if |z| remains smaller than 2 and the number of iterations does not pass the threshold
            while (std::abs(z) <= 2 && this->iterNum <= convergenceThreshold) {
                // Passing one iteration through the function f(z)
                z = z * z + (*this);
                // Incrementing the iteration count of the complex number
                this->iterNum++;
            }

            // Verifying that f(z) to converge if the iteration count is greater than the threshold
            if (iterNum > convergenceThreshold){
                // Changing the boolean convergence to true, it will remain false otherwise
                this->convergence = true;
            }
        }

        // constructor
        ComplexNumber(T real, T imag) : std::complex<T>{real,imag} {
            checkConvergence();
        }



        // getters/setters
        bool getConvergence() { return convergence; }
        int getIterations() { return iterNum; }
        int getThreshold() { return convergenceThreshold; }
        void changeThreshold(int num) { convergenceThreshold = num; }

    private:
        bool convergence = false;
        int iterNum = 0;
        int convergenceThreshold = 35; // Feel free to change this if you would like
};

#endif