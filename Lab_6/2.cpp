#include <iostream>
#include <map>
#include <cmath>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	cout << "Enter x" << endl;
	cin >> x;
	double f = - pow(x, 3) + cos(1.5 * x);
	int N = 1;
	double sum = 0;
	while (sum <= f) {
		sum += 1.0 / N;
		N++;
	}
	cout << (N - 1) << endl;
}