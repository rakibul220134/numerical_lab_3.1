#include<bits/stdc++.h>
using namespace std;

double a, b, c, d;

// f(x)
#define f(x) (a*x*x*x + b*x*x + c*x + d)

// f'(x) = derivative
#define f_prime(x) (3*a*x*x + 2*b*x + c)

int main() {
    cout << "Enter coefficients (ab c d): ";
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
