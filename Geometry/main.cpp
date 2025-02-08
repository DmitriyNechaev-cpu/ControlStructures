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

    cout << "������� ������ ��������: ";
    cin >> size;

    // �������� �������
    if (size <= 0) {
        cout << "������ �������� ������ ���� ������������� ������." << endl;
        return 1;
    }

    // ����� ��������
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

    cout << "������� ���������� �����: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "���������� ����� ������ ���� �������������." << endl;
        return 1;
    }

    for (int i = 1; i <= numRows; ++i) {
        string stars(i, '*'); // ������� ������ �� i �������� '*'
        cout << stars << endl;
    }

   

#endif // triangle_1
#ifdef triangle_2
    int numRows;

    cout << "������� ���������� �����: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "���������� ����� ������ ���� �������������." << endl;
        return 1;
    }

    // ����� ����� � �������� �������
    for (int i = numRows; i >= 1; --i) {
        string stars(i, '*'); // ������� ������ �� i �������� '*'
        cout << stars << endl;
    }
  
#endif // triangle_2
#ifdef triangle_3
    int numRows;

    cout << "������� ���������� �����: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "���������� ����� ������ ���� �������������." << endl;
        return 1;
    }

    for (int i = numRows; i >= 1; --i) {
        // ����� �������� ����� �����������
        for (int j = 0; j < numRows - i; ++j) {
            cout << " ";
        }

        // ����� ���������
        string stars(i, '*');
        cout << stars << endl;
    }

    
#endif // triangle_3
#ifdef triangle_4
    int num;

    cout << "������� ��������� ���������� ���������: ";
    cin >> num;

    if (num <= 0) {
        cout << "���������� ��������� ������ ���� �������������." << endl;
        return 1;
    }

    for (int i = 1; i <= num; ++i) { // ���� �� 1 �� num (�� �������� � ��������)
        // ����� �������� ����� �����������
        for (int j = 0; j < num - i; ++j) {
            cout << " ";
        }

        // ����� ���������
        string stars(i, '*');
        cout << stars << endl;
    }

  
#endif // triangle_4
#ifdef ROMB
    int height;

    cout << "������� ������ ����� (�������� �����): ";
    cin >> height;

    if (height <= 0 || height % 2 == 0) {
        cout << "������ ����� ������ ���� ������������� �������� ������." << endl;
        return 1;
    }

    // ������� �������� �����
    for (int i = 1; i <= height / 2 + 1; ++i) {
        // ������� �����
        for (int j = 0; j < height / 2 + 1 - i; ++j) {
            cout << " ";
        }

        // ����� '/'
        cout << "/";

        // ������� ������
        for (int j = 0; j < (i - 1) * 2; ++j) {
            cout << " ";
        }

        // ����� '\'
        if (i > 1) { //�� ������� '\' � ������ ������
            cout << "\\";
        }
        cout << endl;
    }

    // ������ �������� �����
    for (int i = height / 2; i >= 1; --i) {
        // ������� �����
        for (int j = 0; j < height / 2 + 1 - i; ++j) {
            cout << " ";
        }

        // ����� '\'
        cout << "\\";

        // ������� ������
        for (int j = 0; j < (i - 1) * 2; ++j) {
            cout << " ";
        }

        // ����� '/'
        if (i > 1) { //�� ������� '/' � ��������� ������
            cout << "/";
        }

        cout << endl;
    }

#endif // ROMB

  

    }