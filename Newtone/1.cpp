#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x, int ex, int b) {
    return pow(x, ex) + b;
}

double derivativeF(double x, double h, int ex, int b) {
    double a1 = f(x + h, ex, b);
    double b1 = f(x - h, ex, b);
    double c1 = 2 * h;
    return (a1 - b1) / c1;
}


int main () {
    // нам известно что корень уровнения между x = 1, x = 2.
    double x, h;
    int ex, b;
    cin >> x >> h >> ex >> b;

    while (abs(f(x, ex, b)) > h) {
        x = x - (f(x, ex, b) / derivativeF(x, h, ex, b));
    }
    cout << fixed << setprecision(10) << "x : " << x << " y : " << f(x, ex, b) << endl;
    return 0;
}