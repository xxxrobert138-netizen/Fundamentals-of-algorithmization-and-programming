#include <bits/stdc++.h>

using namespace std;

int main() {
	int K;
	cin >> K;
	vector<vector<int>> m(4, vector<int>(7));
	for (auto &v : m) for (auto &i : v) i = K + rand() % (K * 2 + 1);
	for (auto &v : m) {
		int sum = 0;
		for (auto &i : v) sum += i * (i % 7 == 0);
		cout << sum << endl;
	}
}