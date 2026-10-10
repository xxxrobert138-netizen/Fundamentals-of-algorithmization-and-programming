#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; double p;
    cin >> n >> p;

    vector<double> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = 0.5 * p + (double)rand() / RAND_MAX * 3 * p;
        cout << arr[i] << " ";
    }

    double mx = *max_element(arr.begin(), arr.end());
    double mn = *min_element(arr.begin(), arr.end());
    double start = mn + (mx - mn) / 2.0;

    double sum = 0; int count = 0;
    for (double v : arr) 
        if (v >= start && v <= mx) sum += v, count++;

    cout << "\nResult: " << (count ? sum / count : 0);
}
