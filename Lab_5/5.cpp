#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "Введите один символ M N S L B" << endl;
    char ch;
    cin >> ch;
    switch (ch) {
        case 'M':
            cout << "Minsk" << endl;
            break;
        case 'N':
            cout << "Novogrudok" << endl;
            break;
        case 'S':
            cout << "Slutsk" << endl;
            break;
        case 'L':
            cout << "Lida" << endl;
            break;
        case 'B':
            cout << "Brest" << endl;
            break;
        default:
            cout << "неверный ввод" << endl;
            break;
    }

    return 0;
}
