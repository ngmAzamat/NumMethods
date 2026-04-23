#include <iostream>
#include <cmath>

using mathFunc = double(*)(double);

double solveNewton(double x, double epsilone, mathFunc f) {

    while (abs(f(x)) > epsilone) {
        double dY = f(x + epsilone) - f(x - epsilone);
        double dX = epsilone * 2;
        double derivative = dY / dX;
        x = x - f(x) / derivative;
    }

    return x;
}

double solveNewton(double x, mathFunc f, double epsilone, mathFunc derivative) {

    while (abs(f(x)) > epsilone) {
        x = x - f(x) / derivative(x);
    }

    return x;
}