/*
    2x - y = 7
    -x + 2y - z = 1
    -y + 2z = 1
*/
#include <iostream>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;
#define f1(x, y, z) (7 + y) / 2
#define f2(x, y, z) (x + z + 1) / 2
#define f3(x, y, z) (y + 1) / 2
int main()
{
    double e1, e2, e3, e, x, y, z, x0 = 0, y0 = 0, z0 = 0;

    double error = 0.0001;

    do
    {
        x = f1(x0, y0, z0);
        y = f2(x, y0, z0);
        z = f3(x, y, z0);

        e1 = abs(x - x0);
        e2 = abs(y - y0);
        e3 = abs(z - z0);

         e = max({e1, e2, e3});

        x0 = x;
        y0 = y;
        z0 = z;
    } while (e > error);

    cout << "X: " << x<<endl;
    cout << "y: " << y<<endl;
    cout << "z: " << z<<endl;
}