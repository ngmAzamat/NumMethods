#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double k, double x, int b) {
    return sin(k * x + b);
}

double derivativeF(double k, double x, int b, double h) {
    double a1 = f(k, x + h, b);
    double b1 = f(k, x - h, b);
    double c1 = 2 * h;
    return (a1 - b1) / c1;
}


int main () {
    double k, x, h;
    int b;
    cin >> k >> x >> b >> h;

    while (abs(f(k, x, b)) > h) {
        x = x - (f(k, x, b) / derivativeF(k, x, b, h));
    }
    cout << fixed << setprecision(10) << "x : " << x << " y : " << f(k, x, b) << endl;
    return 0;
}