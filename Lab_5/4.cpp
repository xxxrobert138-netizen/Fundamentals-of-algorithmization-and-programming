#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    cout << "Введите один символ * < ! > % ? = +" << endl;
    char ch;
    cin >> ch;

    switch (ch) {
        case '*':
            cout << "звездочка" << endl;
            break;
        case '<':
            cout << "меньше" << endl;
            break;
        case '!':
            cout << "восклицательный знак" << endl;
            break;
        case '>':
            cout << "больше" << endl;
            break;
        case '%':
            cout << "процент" << endl;
            break;
        case '?':
            cout << "вопрос" << endl;
            break;
        case '=':
            cout << "равно" << endl;
            break;
        case '+':
            cout << "плюс" << endl;
            break;
        default:
            cout << "неверный ввод" << endl;
            break;
    }

    return 0;
}
