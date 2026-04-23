#include <iostream>
#include <cmath>

using mathFunc = double(*)(double);

double solveNewtone(double x, mathFunc f);

double solveNewtone(double x, mathFunc f, double (*derivative)(mathFunc, double));