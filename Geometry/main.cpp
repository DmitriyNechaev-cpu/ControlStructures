#include<iostream>
#include <string>
using namespace std;
//#define Kub 
//#define triangle_1
//#define triangle_2
//#define triangle_3
//#define triangle_4
//#define ROMB
int main()
{
	setlocale(LC_ALL, "");
	cout << "Geometry" << endl;
#ifdef Kub

    int size;

    cout << "Введите размер квадрата: ";
    cin >> size;

    // Проверка размера
    if (size <= 0) {
        cout << "Размер квадрата должен быть положительным числом." << endl;
        return 1;
    }

    // Вывод квадрата
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
#endif // Kub

#ifdef triangle_1
    int numRows;

    cout << "Введите количество строк: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "Количество строк должно быть положительным." << endl;
        return 1;
    }

    for (int i = 1; i <= numRows; ++i) {
        string stars(i, '*'); // Создаем строку из i символов '*'
        cout << stars << endl;
    }

   

#endif // triangle_1
#ifdef triangle_2
    int numRows;

    cout << "Введите количество строк: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "Количество строк должно быть положительным." << endl;
        return 1;
    }

    // Вывод строк в обратном порядке
    for (int i = numRows; i >= 1; --i) {
        string stars(i, '*'); // Создаем строку из i символов '*'
        cout << stars << endl;
    }
  
#endif // triangle_2
#ifdef triangle_3
    int numRows;

    cout << "Введите количество строк: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "Количество строк должно быть положительным." << endl;
        return 1;
    }

    for (int i = numRows; i >= 1; --i) {
        // Вывод пробелов перед звездочками
        for (int j = 0; j < numRows - i; ++j) {
            cout << " ";
        }

        // Вывод звездочек
        string stars(i, '*');
        cout << stars << endl;
    }

    
#endif // triangle_3
#ifdef triangle_4
    int num;

    cout << "Введите начальное количество звездочек: ";
    cin >> num;

    if (num <= 0) {
        cout << "Количество звездочек должно быть положительным." << endl;
        return 1;
    }

    for (int i = 1; i <= num; ++i) { // Цикл от 1 до num (от меньшего к большему)
        // Вывод пробелов перед звездочками
        for (int j = 0; j < num - i; ++j) {
            cout << " ";
        }

        // Вывод звездочек
        string stars(i, '*');
        cout << stars << endl;
    }

  
#endif // triangle_4
#ifdef ROMB
    int height;

    cout << "Введите высоту ромба (нечетное число): ";
    cin >> height;

    if (height <= 0 || height % 2 == 0) {
        cout << "Высота ромба должна быть положительным нечетным числом." << endl;
        return 1;
    }

    // Верхняя половина ромба
    for (int i = 1; i <= height / 2 + 1; ++i) {
        // Пробелы слева
        for (int j = 0; j < height / 2 + 1 - i; ++j) {
            cout << " ";
        }

        // Вывод '/'
        cout << "/";

        // Пробелы внутри
        for (int j = 0; j < (i - 1) * 2; ++j) {
            cout << " ";
        }

        // Вывод '\'
        if (i > 1) { //Не выводим '\' в первой строке
            cout << "\\";
        }
        cout << endl;
    }

    // Нижняя половина ромба
    for (int i = height / 2; i >= 1; --i) {
        // Пробелы слева
        for (int j = 0; j < height / 2 + 1 - i; ++j) {
            cout << " ";
        }

        // Вывод '\'
        cout << "\\";

        // Пробелы внутри
        for (int j = 0; j < (i - 1) * 2; ++j) {
            cout << " ";
        }

        // Вывод '/'
        if (i > 1) { //Не выводим '/' в последней строке
            cout << "/";
        }

        cout << endl;
    }

#endif // ROMB

  

    }