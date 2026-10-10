#include <bits/stdc++.h>

using namespace std;

double fault = 0.0005;

double f(double x) {
	return 2.2 * x * x * x - 7 * x + 2.2;
}

double f(double a, double b) {
	if (abs(a - b) <= fault) return a;
	double mid = (a + b) / 2;
	double x = f(mid);
	if (x == 0) return mid;
	if (x < 0) return f(mid, b);
	return f(a, mid);
}

int main() {
	double a, b;
	cin >> a >> b;
	cout << f(a, b);
}