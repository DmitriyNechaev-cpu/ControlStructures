#include <iostream>

using namespace std;

bool isPerfectNumber(int num) {
    setlocale(LC_ALL, "");
    if (num <= 1) return false; // 1 не является совершенным числом
    int sum = 1; // 1 - всегда делитель
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int main() {
    setlocale(LC_ALL, "");
    int start, end;

    cout << "Введите начальное значение диапазона: ";
    cin >> start;

    cout << "Введите конечное значение диапазона: ";
    cin >> end;

    cout << "Совершенные числа в диапазоне от " << start << " до " << end << ":" << endl;

    for (int i = start; i <= end; ++i) {
        if (isPerfectNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}