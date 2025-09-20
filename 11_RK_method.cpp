#include<bits/stdc++.h>
using namespace std;

#define f(x, y) ((y - x) / (y + x))

int main()
{
    double x0, y0, xn, h,x,y;
    int n;

    cout << "Enter initial x0: ";
    cin >> x0;
    cout << "Enter initial y0: ";
    cin >> y0;
    cout << "Enter xn (final x): ";
    cin >> xn;
    cout << "Enter number of steps (n): ";
    cin >> n;
    h = (xn - x0) / n;
    x = x0;
    y = y0;
    cout << "Range Kutta 4th Order Method:\n";
    cout << "x\ty\n";
    cout << x << "\t" << y << endl;
    for (int i = 0; i < n; i++)
    {
        double k1 = h * f(x, y);
        double k2 = h * f(x + h / 2.0, y + k1 / 2.0);
        double k3 = h * f(x + h / 2.0, y + k2 / 2.0);
        double k4 = h * f(x + h, y + k3);
        double k= (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
        y = y + k;
        x = x + h;
        cout << x << "\t" << y << endl;
    }
    cout << "\nApproximate solution at x = " << xn << " is y = " << y << endl;
    return 0;
}
