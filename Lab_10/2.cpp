#include <bits/stdc++.h>

using namespace std;

void flip1(int* N) {
	string str = to_string(*N);
	reverse(str.begin(), str.end());
	*N = stoi(str);
}

void flip2(int& N) {
	string str = to_string(N);
	reverse(str.begin(), str.end());
	N = stoi(str);
}

int flip3(int N) {
	string str = to_string(N);
	reverse(str.begin(), str.end());
	return stoi(str);
}

int main() {
	int N;
	cin >> N;
	flip1(&N);
	cout << N << endl;
	flip2(N);
	cout << N << endl;
	cout << flip3(N) << endl;
}