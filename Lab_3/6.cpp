#include <iostream>

using namespace std;

int main()
{
    int H, M, S, P, Q, R;
    cin >> H >> M >> S >> P >> Q >> R;
    int all = (H + P) * 60 * 60 + (M + Q) * 60 + S + R;
    S = all % 60;
    M = all / 60 % 60;
    H = all / 60 / 60 % 24;
    cout << H << " " << M << " " << S << endl;
}