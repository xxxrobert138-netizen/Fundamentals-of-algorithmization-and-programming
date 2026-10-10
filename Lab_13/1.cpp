#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    while (n-- > 0) {
        cin >> s;
        int k = 0;
        for (char c : s) k += string("JSQZjsqz").find(c) != string::npos;
        if (k <= 5) cout << s << endl;
    }
}
