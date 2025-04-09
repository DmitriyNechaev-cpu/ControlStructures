#include<iostream>
#include <string>
using namespace std;
//#define Kub 
//#define triangle_1
//#define triangle_2
//#define triangle_3
//#define triangle_4
//#define ROMB
//#define FOR_1
//#define SHACHMATY
//#define SHACHMATY_2

int main()
{
	setlocale(LC_ALL, "");
	cout << "Geometry" << endl;
    int n;
    cout << "������� ���������� ������: "; cin >> n;
    int cube_size;
    cout << "������� ������ ������: "; cin >> cube_size;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) cout << ' ';
        cout << "/";
        for (int j = n; j < n + i * 2; j++) cout << ' ';
        cout << "\\";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << " ";
        for (int j = 0; j < i; j++) cout << ' ';
        cout << "\\";
        for (int j = n * 2 - i - 2; j > i; j--) cout << ' ';
        cout << "/";
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
#ifdef FOR_1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //if ((j + i) % 2 == 0) cout << "+ ";else cout << "- ";
            //if (i % 2 == j % 2)cout << " +";else cout << " -";
            //i % 2 == j % 2 ? cout << "+ " : cout << "- ";
            cout << (i % 2 == j % 2 ? "+ " : "- ");
        }cout << endl;
    }cout << endl;
#endif // FOR_1
#ifdef SHACHMATY

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0)for (int j = 0; j < n; j++) cout << "* ";
                    else for (int j = 0; j < n; j++) cout << "  ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0)for (int j = 0; j < n; j++) cout << "  ";
                    else for (int j = 0; j < n; j++) cout << "* ";
                }
                cout << endl;
            }
        }
    }cout << endl;

#endif // SHACHMATY
#ifdef SHACHMATY_2

    setlocale(0, "C");
    for (int t = 0; t < n; t++)
    {
        if (t % 2 == 0)
        {
            for (int i = 0; i < cube_size; i++)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0) for (int j = 0; j < cube_size; j++) cout << (char)219 << (char)219;
                    else for (int j = 0; j < cube_size; j++) cout << "  ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < cube_size; i++)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0) for (int j = 0; j < cube_size; j++) cout << "  ";
                    else for (int j = 0; j < cube_size; j++) cout << (char)219 << (char)219;

                }
                cout << endl;
            }
        }
    }
#endif // SHACHMATY_2

}
  

    