#include <iostream>

using namespace std;

int main()
{
    int X1, X2, X3, X4, Y1, Y2, Y3, Y4;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    cout << 0.5f * abs(X1 * Y2 + X2 * Y3 + X3 * Y4 + X4 * Y1 - Y1 * X2 - Y2 * X3 - Y3 * X4 - Y4 * X1);
}