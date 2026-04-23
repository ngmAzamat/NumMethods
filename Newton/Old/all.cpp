#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

double fS(double k, double x, int b) {
    return sin(k * x + b);
}

double derivativeFS(double k, double x, int b, double h) {
    double a1 = fS(k, x + h, b);
    double b1 = fS(k, x - h, b);
    double c1 = 2 * h;
    return (a1 - b1) / c1;
}

int sinus () {
    double k, x, h;
    int b;
    cin >> k >> x >> b >> h;

    while (abs(fS(k, x, b)) > h) {
        x = x - (fS(k, x, b) / derivativeFS(k, x, b, h));
    }
    cout << fixed << setprecision(10) << "x : " << x << " y : " << fS(k, x, b) << endl;
    return 0;

}


double f1(double x, int ex, int b) {
    return pow(x, ex) + b;
}

double derivativeF1(double x, double h, int ex, int b) {
    double a1 = f1(x + h, ex, b);
    double b1 = f1(x - h, ex, b);
    double c1 = 2 * h;
    return (a1 - b1) / c1;
}

int solveExp () {
    double x, h;
    int ex, b;
    cin >> x >> h >> ex >> b;
    while (abs(f1(x, ex, b)) > h) {
        x = x - (f1(x, ex, b) / derivativeF1(x, h, ex, b));
    }
    cout << fixed << setprecision(10) << "x : " << x << " y : " << f1(x, ex, b) << endl;
    return 0;
}

int main () {
    string str;
    cin >> str;
    if (str == "sin") {
        sinus();
    } else if (str == "exp") {
        solveExp();
    } else {
        return 0;
    }

    return 0;
}

