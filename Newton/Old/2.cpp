#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double fi(double a, double x) {
    return (x + a/x) / 2;
}

double f(double x, double a) {
    return x * x - a;
}

int main () {
    double a, x, eps;
    cin >> a >> x >> eps;
    while (abs(f(x, a)) > eps) {
        x = fi(a, x);
    }
    cout << fixed << setprecision(11) << "X : " << x << "Y : " << f(x, a) << endl;
}