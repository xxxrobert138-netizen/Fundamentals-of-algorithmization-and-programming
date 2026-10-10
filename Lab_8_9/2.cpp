#include <bits/stdc++.h>

using namespace std;

double f(double x) {
	return 0.8 * x + 2.1 * cos(x) + 0.2;
}

double F(double x) {
	return 0.4 * x * x + 2.1 * sin(x) + 0.2 * x;
}

double getExact(double a, double b) {
	return F(b) - F(a);
}

double integrate(double a, double b, int n, string s) {
	double h = (b - a) / n;
	double sum = 0;
	for (int k = 0; k < n; k++) {
		sum += f(a + k * h);
	}
	return sum * h;
}

double integrate(double a, double b, int n, int i) {
	double h = (b - a) / n;
	double sum = 0;
	for (int k = 1; k <= n; k++) {
		sum += f(a + k * h);
	}
	return sum * h;
}

double integrate(double a, double b, int n, double q) {
	double h = (b - a) / n;
	double sum = (f(a) + f(b)) / 2;
	for (int k = 0; k < n; k++) {
		sum += f(a + k * h);
	}
	return sum * h;
}

double integrate(double a, double b, int n, bool e) {
	n += n % 2;
	double h = (b - a) / n;
	double sum = f(a) + f(b);
	for (int k = 1; k < n; k++) {
		sum += f(a + k * h) * 2 * (k % 2 == 0 ? 1 : 2);
	}
	return sum * h;
}

void print(double a, double b, int n) {
	cout << integrate(a, b, n, "") << endl;
	cout << integrate(a, b, n, 1) << endl;
	cout << integrate(a, b, n, 1.0) << endl;
	cout << integrate(a, b, n, 1 == 1) << endl;
}

int main() {
	cout << fixed << setprecision(4);
	double a, b;
	int k;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter k: ";
	cin >> k;
	print(a, b, k);
	print(a, b, k * 10);
}