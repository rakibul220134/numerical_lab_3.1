#include<bits/stdc++.h>
using namespace std;

#define f(x, y) (y - x) / (y + x)

int main()
{
    double x0, y0, xn, h;
    int n;

    cout << "Enter initial x0: ";
    cin >> x0;
    cout << "Enter initial y0: ";
    cin >> y0;
    cout << "Enter xn (final x): ";
    cin >> xn;
    cout << "Enter number of steps (n): ";
    cin >> n;

    h = (xn - x0) / n; // step size

    double x = x0, y = y0;

    cout << "\nModified Euler's Method:\n";
    cout << "x\t\ty\n";
    
    cout << x << "\t\t" << y << endl;

    for (int i = 0; i < n; i++)
    {
        double k1 = f(x, y);
        double y_predict = f(x + h, k1);
        double k2 = f(x + h, y_predict);
        y = y + (h / 2) * (k1 + k2);
        x = x + h;

        cout << x << "\t\t" << y<<endl;
    }
    cout << "\nApproximate solution at x = " << xn << " is y = " << y << endl;

    return 0;
}
