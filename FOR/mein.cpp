#include <iostream>
#include <iomanip>
using namespace std;
using std::cin;
using std::cout;
using std::endl;


//#define FACTORIAL
//#define FIBONACCI
//#define SIMPLE_NUMBERS
//#define PERFECT_NUMBERS
//#define PIFAGOR

int main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL
	double a;//Основание степени
	int n;//Показатель степени
	cout << "Введите онование степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	double N = 1
		if (n < 0) {
			a = 1 / a;
			n = -n;
		}
	for (int i = 0; i < n; i++)
	{
		N *= a;

	}
	cout << a << " ^ " << n << " = " << N << endl;

#endif // FACTORIAL
	
#ifdef FIBONACCI
	int n;
	cout << "Введите предел: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
#endif // FIBONACCI
#ifdef SIMPLE_NUMBERS

	int n;
	cout << "Введите предельное число: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple) cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE_NUMBERS

	
#ifdef PERFECT_NUMBERS
	int n;
	cout << " Введите предельное число:"; cin >> n;
	for (int i = 2; i < n; i++)
	{
		bool perfect = true;
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)

		{
			if (i % j == 0)sum += j;

		}
		if (i == sum)cout << i << "\t";
	}
		cout << endl;
#endif // PERFECT_NUMBERS

#ifdef PIFAGOR
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
#endif // PIFAGOR

	}