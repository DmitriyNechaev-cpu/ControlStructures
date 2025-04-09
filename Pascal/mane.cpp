#include <iostream>
#include <vector>

using namespace std;

int main() {
     setlocale(LC_ALL, "");
    int numRows;

    cout << "������� ���������� ����� ��� ������������ �������: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "���������� ����� ������ ���� �������������." << endl;
        return 1;
    }

    // ������� ������ �������� ��� �������� ������������ �������
    vector<vector<int>> pascalTriangle(numRows);

    // ��������� ����������� �������
    for (int i = 0; i < numRows; ++i) {
        pascalTriangle[i].resize(i + 1);  // ������ ������ ����� i+1 ���������
        pascalTriangle[i][0] = 1;          // ������ ������� ������ ������ ����� 1
        pascalTriangle[i][i] = 1;          // ��������� ������� ������ ������ ����� 1

        // ��������� ��������� �������� ������
        for (int j = 1; j < i; ++j) {
            pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }
    }

    // ������� ����������� ������� �� �����
    for (int i = 0; i < numRows; ++i) {
        // ������� ������� ��� �������������
        for (int k = 0; k < numRows - i - 1; ++k) {
            cout << "  "; // ��� ������� ��� ����� ������������ �������������
        }

        // ������� �������� ������
        for (int j = 0; j < i + 1; ++j) {
            cout << pascalTriangle[i][j] << "   "; // ��� ������� ��� ���������� ���������
        }
        cout << endl;
    }

    return 0;
}