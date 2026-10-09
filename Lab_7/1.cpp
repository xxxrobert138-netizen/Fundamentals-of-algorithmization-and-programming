#include <iostream>
#include <map>
#include <cmath>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int K;
	cout << "Enter k" << endl;
	cin >> K;
	double S = 0;
	for (int i = 1; i <= K; i++) {
		S += 2 * i + K / (7.2 + i);
	}
	cout << S << endl;
}