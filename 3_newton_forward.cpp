#include <iostream>
using namespace std;
int main()
{
    double x[20], y[20], search, terms,p=1;
    cout << "Enter the number of items: ";
    cin >> terms;
    cout << "Enter the values: ";
    for (int i = 0; i < terms; i++)
        cin >> x[i] >> y[i];

    cout << "Enter the  searching values: ";
    cin >> search;

    double h = x[1] - x[0];
    double a = x[0];
    double result = y[0];
    double u = (search - a) / h;
    for (int i = 1; i < terms; i++)
    {
        for (int j = 0; j < (terms - i); j++)
        {
            y[j] = y[j + 1] - y[j];
        }
        p = p * (u - i + 1) / i;
        result = result + p * y[0];
    }
    cout << "For = " << search << " result is: " << result << endl;
    return 0;
}
