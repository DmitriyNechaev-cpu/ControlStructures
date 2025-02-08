#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Palindrome" << endl;
	int number; // число вводимое с клавиатуры 123
	int reverse = 0;//число записаное в обратном порядке 321
	cout << "Введите число:"; cin >> number;
	int buffer = number; //копия числа введённого с клавиатуры
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;// Получаем младший разряд числа.
		buffer /= 10;// убираем младший разряд 

	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number) << endl;

	{
		cout <<"Палиндром"
}
	else
	{
		cout << "Обычное чило" << endl;
	}
}