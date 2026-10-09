#include <iostream>
#include <map>
#include <cmath>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double x_begin, x_end, x_step;
	cout << "Enter x_begin" << endl;
	cin >> x_begin;
	cout << "Enter x_end" << endl;
	cin >> x_end;
	cout << "Enter x_step" << endl;
	cin >> x_step;
	for (; x_begin <= x_end; x_begin += x_step) {
		cout << - pow(x_begin, 4) - 0.8 / (pow(x_begin, 2) - 1) + cos(5 * x_begin) << endl;
	}
}