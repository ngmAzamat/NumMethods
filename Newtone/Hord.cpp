#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) {
    return pow(x, 2) - 3;
}


int main () {
    // x = 1, last = 2, границы где корень
    double x0, x1, h;
    cin >> x0 >> x1 >> h;
    double x;
    x = x0 - (f(x0) * (x1 - x0))/(f(x1) - f(x0));
    x1 = x;
    while (abs(f(x)) > h) {
        x = x0 - (f(x0) * (x1 - x0))/(f(x1) - f(x0));
        x0 = x1;
        x1 = x;
    }
    cout << fixed << setprecision(10) << "x : " << x << " y : " << f(x) << endl;
    return 0;
}