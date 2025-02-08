#include <iostream>
using namespace std;
using  std::cin;
using std::cout;
using std::endl;

void main() {
	setlocale(LC_ALL, "");
	int n;
	cout << "введите количество итераци: ";
		cin >> n;
		while (--n)
		cout << n << "\t";

	cout << endl;
}



