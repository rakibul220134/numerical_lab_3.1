#include<bits/stdc++.h>
using namespace std;

#define f(x) 1/(1+(x*x))

int main()
{
    double a, b;
    int n;
    cout << "Enter lower limit (a): ";
    cin >> a;
    cout << "Enter upper limit (b): ";
    cin >> b;
    cout << "Enter number of subintervals (n): ";
    cin >> n;
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        if (i % 2 == 0)
            sum = sum + 2 * f(x);
        else
            sum = sum + 4 * f(x);
    }
    double result = (h / 3) * sum;
    cout << "Approximate integral = " << result << endl;
    return 0;
}
