#include <bits/stdc++.h>
using namespace std;

/*
    2x - y = 7
    -x + 2y - z = 1
    -y + 2z = 1
*/
#define f1(x, y, z) (7 + y) / 2
#define f2(x, y, z) (x + z + 1) / 2
#define f3(x, y, z) (y + 1) / 2

int main() {
    double x0 = 0, y0 = 0, z0 = 0; // Initial guess
    double x, y, z;
    int n;

    cout << "Enter number of iterations: ";
    cin >> n;  // User input for number of iterations

    for (int i = 1; i <= n; i++) {
        // Jacobi: use only old values (x0, y0, z0) for all updates
        x = f1(x0, y0, z0);
        y = f2(x0, y0, z0);
        z = f3(x0, y0, z0);

        cout << "Iteration " << i << ": X=" << x << ", Y=" << y << ", Z=" << z << endl;

        // Update old values after all three are computed
        x0 = x;
        y0 = y;
        z0 = z;
    }

    cout << "\nFinal solution (after " << n << " iterations):\n";
    cout << "X: " << x << ", Y: " << y << ", Z: " << z << endl;

    return 0;
}
