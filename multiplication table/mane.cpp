#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int size;

    cout << "Введите размер таблицы умножения (до 20): ";
    cin >> size;

    if (size <= 1 || size > 20) {
        cout << "Некорректный размер. Размер должен быть от 1 до 20." << endl;
        return 1;
    }

    // Вывод заголовка таблицы
    cout << "    |";
    for (int i = 1; i <= size; ++i) {
        cout << setw(4) << i;  // setw(4) - для выравнивания чисел
    }
    cout << endl;
    cout << "----";
    for (int i = 1; i <= size; ++i) {
        cout << "----";
    }
    cout << endl;

    // Вывод строк таблицы
    for (int i = 1; i <= size; ++i) {
        cout << setw(3) << i << " |"; // Вывод номера строки
        for (int j = 1; j <= size; ++j) {
            cout << setw(4) << i * j; // Вывод произведения
        }
        cout << endl;
    }

    return 0;
}