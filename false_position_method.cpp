#include<bits/stdc++.h>
using namespace std;

double a, b, c, d;

double f(double x) {
    return a*x*x*x + b*x*x + c*x + d;
}

int main() {
    cout << "Enter coefficients (a b c d): ";
    cin >> a >> b >> c >> d;

    double left, right, tol;
    cout << "Enter interval [left right]: ";
    cin >> left >> right;
    cout << "Enter tolerance: ";
    cin >> tol;

    if (f(left) * f(right) >= 0) {
        cout << "Invalid interval!" << endl;
        return 0;
    }
    double c = left;
    while (fabs(f(c)) > tol) {
        c = (left*f(right) - right*f(left)) / (f(right) - f(left));
        if (f(c) == 0.0) break;
        else if (f(c) * f(left) < 0) right = c;
        else left = c;
    }

    cout << "False Position Root ≈ " << c << endl;
    return 0;
}
