#include <iostream>
#include <map>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите один символ M N S L B" << endl;
	char ch;
	cin >> ch;
	map<char, string> m;
	m['M'] = "Minsk";
	m['N'] = "Novogrudok";
	m['S'] = "Slutsk";
	m['L'] = "Lida";
	m['B'] = "Brest";
	cout << (m.count(ch) ? m[ch] : "неверный ввод") << endl;
}