#include <iostream>
#include <cmath>

using mathFunc = double(*)(double);

double solveNewtone(double x, mathFunc f) {
    double epsilone = 0.0000000001;
    double derivative1 = f(x + epsilone);
    double derivative2 = f(x - epsilone);
    double derivative3 = epsilone * 2;
    double derivative = (derivative1 - derivative2) / derivative3;
    while (abs(f(x)) > epsilone) {
        x = x - f(x) / derivative;
    }
    return x;
}

double solveNewtone(double x, mathFunc f, double (*derivative)(mathFunc, double)) {
    double epsilone = 0.0000000001;
    while (abs(f(x)) > epsilone) {
        x = x - f(x) / derivative(f, x);
    }
    return x;
}