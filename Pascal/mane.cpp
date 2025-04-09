#include <iostream>
#include <vector>

using namespace std;

int main() {
     setlocale(LC_ALL, "");
    int numRows;

    cout << "Введите количество строк для треугольника Паскаля: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "Количество строк должно быть положительным." << endl;
        return 1;
    }

    // Создаем вектор векторов для хранения треугольника Паскаля
    vector<vector<int>> pascalTriangle(numRows);

    // Заполняем треугольник Паскаля
    for (int i = 0; i < numRows; ++i) {
        pascalTriangle[i].resize(i + 1);  // Каждая строка имеет i+1 элементов
        pascalTriangle[i][0] = 1;          // Первый элемент каждой строки равен 1
        pascalTriangle[i][i] = 1;          // Последний элемент каждой строки равен 1

        // Вычисляем остальные элементы строки
        for (int j = 1; j < i; ++j) {
            pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }
    }

    // Выводим треугольник Паскаля на экран
    for (int i = 0; i < numRows; ++i) {
        // Выводим пробелы для центрирования
        for (int k = 0; k < numRows - i - 1; ++k) {
            cout << "  "; // Два пробела для более равномерного центрирования
        }

        // Выводим элементы строки
        for (int j = 0; j < i + 1; ++j) {
            cout << pascalTriangle[i][j] << "   "; // Три пробела для разделения элементов
        }
        cout << endl;
    }

    return 0;
}