#include <iostream>
#include <cmath>
using namespace std;

double a, b, c, d;

// Polynomial function: f(x) = ax^3 + bx^2 + cx + d
double f(double x)
{
    return a*x*x*x + b*x*x + c*x + d;
}
int main()
{
    cout << "Enter coefficients (a b c d): ";
    cin >> a >> b >> c >> d;
    double x0, x1, x2,tol;
    //int n;
    cout << "Enter initial guesses (x0 x1): ";
    cin >> x0 >> x1;
    cout << "Enter tolerance: ";
    cin >> tol;

    /*cout << "Enter number of iterations: ";
    cin >> n;
    cout << "\nIter\tx0\tx1\tx2\tf(x2)\n";
    cout << "--------------------------------------------------\n";
    for (int i = 1; i <= n; i++)
    {
        // Secant formula
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
        cout << i << "\t" << x0 << "\t" << x1 << "\t" << x2 << "\t" << f(x2) << endl;
        // Update values
        x0 = x1;
        x1 = x2;
    }
    cout << "\nApproximate root after " << n << " iterations ≈ " << x2 << endl;*/
    while (fabs(x1-x0) >= tol)
    {
        x2 = x1 - f(x1)*(x1-x0)/(f(x1)-f(x0));
        // Update values
        x0 = x1;
        x1 = x2;
    }
    cout << "Secant Root = " << x2 << endl;
    return 0;
}

