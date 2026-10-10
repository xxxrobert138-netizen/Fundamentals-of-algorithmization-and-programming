#include <bits/stdc++.h>

using namespace std;

void F(int N, int& First, int& Last) {
	Last = N % 10;
	while (N > 10) N /= 10;
	First = N;
}

int main() {
	int N;
	cin >> N;
	int First, Last;
	F(N, First, Last);
	cout << First << " " << Last << endl;
}