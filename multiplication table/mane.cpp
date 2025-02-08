#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int size;

    cout << "������� ������ ������� ��������� (�� 20): ";
    cin >> size;

    if (size <= 1 || size > 20) {
        cout << "������������ ������. ������ ������ ���� �� 1 �� 20." << endl;
        return 1;
    }

    // ����� ��������� �������
    cout << "    |";
    for (int i = 1; i <= size; ++i) {
        cout << setw(4) << i;  // setw(4) - ��� ������������ �����
    }
    cout << endl;
    cout << "----";
    for (int i = 1; i <= size; ++i) {
        cout << "----";
    }
    cout << endl;

    // ����� ����� �������
    for (int i = 1; i <= size; ++i) {
        cout << setw(3) << i << " |"; // ����� ������ ������
        for (int j = 1; j <= size; ++j) {
            cout << setw(4) << i * j; // ����� ������������
        }
        cout << endl;
    }

    return 0;
}