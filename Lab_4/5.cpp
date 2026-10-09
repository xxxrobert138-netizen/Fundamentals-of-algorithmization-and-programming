#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    double sum = abs(x) + abs(y);
    if (sum < 2 || sum > 4) {
        cout << "NO";
        return 0;
    }
    cout << (x >= 0 && y < 0 ? "NO" : "YES");
}