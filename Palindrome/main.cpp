#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Palindrome" << endl;
	int number; // ����� �������� � ���������� 123
	int reverse = 0;//����� ��������� � �������� ������� 321
	cout << "������� �����:"; cin >> number;
	int buffer = number; //����� ����� ��������� � ����������
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;// �������� ������� ������ �����.
		buffer /= 10;// ������� ������� ������ 

	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number) << endl;

	{
		cout <<"���������"
}
	else
	{
		cout << "������� ����" << endl;
	}
}