#include <iostream>
#include <map>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите один символ * < ! > % ? = +" << endl;
	char ch;
	cin >> ch;
	map<char, string> m;
	m['*'] = "звездочка";
	m['<'] = "меньше";
	m['!'] = "восклицательный знак";
	m['>'] = "больше";
	m['%'] = "процент";
	m['?'] = "вопрос";
	m['='] = "равно";
	m['+'] = "плюс";
	cout << (m.count(ch) ? m[ch] : "неверный ввод") << endl;
}