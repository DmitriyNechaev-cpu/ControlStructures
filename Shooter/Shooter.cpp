#include<iostream>
#include <conio.h>
using namespace std;
using std::cout;
//#define calc
//#define shooter

void main()
{
	setlocale(LC_ALL, "");
#ifdef calc
	double a, b, c;
	char s;
	cout << "Введите уравнение в одну строку: " << endl;
	cin >> a >> s >> b;

	switch (s)
	{
	case '*':c = a * b; cout << a << "*" << b << "=" << c; break;
	case '/':c = a / b; cout << a << "/" << b << "=" << c; break;
	case '+':c = a + b; cout << a << "+" << b << "=" << c; break;
	case '-':c = a - b; cout << a << "-" << b << "=" << c; break;
	default: cout << "Ошибка!!!!!" << endl;
	}
	while (true)
	{
		cin >> s >> b;
		switch (s) {

		case '+':c = c + b; cout << s << b << "=" << c; break;
		case '-':c = c - b; cout << s << b << "=" << c; break;
		case '*':c = c * b; cout << s << b << "=" << c; break;
		case '/':c = c / b; cout << s << b << "=" << c; break;
		default: cout << "Ошибка!!!!!" << endl << c;
		}

	}
}

#endif // calc

#ifdef shooter

while (true)
{
	char key = _getch();
	switch (key)
	{
	case 119:cout << "Вперед" << endl; break;
	case 115:cout << "Назад" << std::endl; break;
	case 97:cout << "Влево" << std::endl; break;
	case 100:cout << "Впрао" << std::endl; break;
	case 32:cout << "Прыжок" << std::endl; break;
	case 13:cout << "Огонь" << std::endl; break;
	case 27:cout << "Выход" << std::endl; break;

	default:
		cout << "Неверная клавиша" << endl;
	}
#endif // shooter
