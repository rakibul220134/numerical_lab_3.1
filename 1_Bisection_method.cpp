#include<bits/stdc++.h>
using namespace std;

// coefficients
double a, b, c, d;

// Function f(x) = ax^3 + bx^2 + cx + d
#define f(x) (a*x*x*x + b*x*x + c*x + d)

int main() {
    cout << "Enter coefficients (a b c d) for f(x) = ax^3 + bx^2 + cx + d: ";
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

    double mid;
    while ((right - left) >= tol) {
        mid = (left + right) / 2;
        if (f(mid) == 0.0) break;
        else if (f(mid) * f(left) < 0) right = mid;
        else left = mid;
    }

    cout << "Bisection Root ≈ " << mid << endl;
    return 0;
}
