#include <iostream>

using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");
	double a, b; // числла вводимые пользователем  
	char s;   // Sign  знак операции


	cout << "¬ведите простое арефметическое выражение :";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b >> endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b >> endl; 
	}	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b >> endl; 
	}	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b >> endl; 
	}
}