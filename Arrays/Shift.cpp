#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    // Инициализация массива
    vector<int> arr = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
    const int ARRAY_SIZE = arr.size();  // Получаем размер массива

    // Ввод количества сдвигов
    int shift;
    cout << "Введите количество сдвигов влево: ";
    cin >> shift;

    // Обрабатываем сдвиг, чтобы он был в пределах размера массива (циклический сдвиг)
    shift = shift % ARRAY_SIZE;

    // Обрабатываем отрицательные значения сдвига
    if (shift < 0) {
        shift = ARRAY_SIZE + shift;
    }

    // Выполняем циклический сдвиг влево
    rotate(arr.begin(), arr.begin() + shift, arr.end());

    // Вывод результата
    cout << "Массив после сдвига:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << arr[i] << "\t"; // Используем табуляцию для выравнивания
    }
    cout << endl;

    return 0;
}