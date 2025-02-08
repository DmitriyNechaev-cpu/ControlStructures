#include <iostream>
using namespace std;
#define CALC_IF_END
//#define CALC_SWITCH
void main()
{
	setlocale(LC_ALL, "Russian");
	double a, b; // числла вводимые пользователем  
	char s;   // Sign  знак операции

	cout << "¬ведите простое арефметическое выражение :";
	cin >> a >> s >> b;
#ifdef CALC_IF_END
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else
	{
		cout << "Error: No Operation" << endl;

		cout << "Calculator Console Application" << endl << endl;
		cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b";
			
}
#endif // CALC_IF_END
#ifdef CALC_SWITCH
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error : No operation" << endl;
	
	}
#endif // CALC_SWITCH


	
}