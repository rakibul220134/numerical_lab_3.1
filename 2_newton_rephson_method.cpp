#include<bits/stdc++.h>
using namespace std;

double a, b, c, d;

// f(x)
double f(double x) {
    return a*x*x*x + b*x*x + c*x + d;
}
// f'(x) = derivative
double f_prime(double x) {
    return 3*a*x*x + 2*b*x + c;
}
int main() {
    cout << "Enter coefficients (a b c d): ";
    cin >> a >> b >> c >> d;
    double x0, tol;
    cout << "Enter initial guess: ";
    cin >> x0;
    cout << "Enter tolerance: ";
    cin >> tol;
    double x1;
    while (true) {
        x1 = x0 - f(x0) / f_prime(x0);
        if (fabs(x1 - x0) < tol) break;
        x0 = x1;
    }
    cout << "Newton-Raphson Root ≈ " << x1 << endl;
    return 0;
}
