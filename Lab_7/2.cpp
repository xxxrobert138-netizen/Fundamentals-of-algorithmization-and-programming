#include <iostream>
#include <map>
#include <cmath>
#include <clocale>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> v = {9, 7, 5, 3, 1};
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			cout << (j < i ? " " : to_string(v[j]));
		}
		cout << endl;
	}
}