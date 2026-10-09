#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    double length = sqrt(x * x + y * y);
    if (length < 2) {
        cout << "NO";
        return 0;
    }
    if (x >= 0 && y >= 0) {
        cout << (x <= 4 && y <= 4 ? "YES" : "NO");
    } else if ((x <= 0 && y >= 0) || (x >= 0 && y <= 0)) {
        cout << (length <= 4 ? "YES" : "NO");
    } else {
        cout << (abs(x) + abs(y) <= 4 ? "YES" : "NO");
    }
}