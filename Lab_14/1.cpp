#include <bits/stdc++.h>
using namespace std;

double f(int m, int n, double k, char name) {
    double sum = 0;
    cout << name << ":\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            double val = -k + ((double)rand() / RAND_MAX) * (3.0 * k);
            cout << setw(7) << fixed << setprecision(2) << val << " ";
            if (i % 2 == 0 && val > 0) sum += val;
        }
        cout << "\n";
    }
    return sum;
}

int main() {
    int m, n;
    double k;
    cin >> m >> n >> k;

    double sA = f(m, n, k, 'A');
    double sB = f(m, n, k, 'B');
    double sC = f(m, n, k, 'C');

    double mx = max({sA, sB, sC});

    if (mx > 0) {
        if (sA == mx) cout << "A ";
        if (sB == mx) cout << "B ";
        if (sC == mx) cout << "C ";
        cout << "\n";
    }
    return 0;
}
