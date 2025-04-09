#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    // ������������� �������
    vector<int> arr = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
    const int ARRAY_SIZE = arr.size();  // �������� ������ �������

    // ���� ���������� �������
    int shift;
    cout << "������� ���������� ������� �����: ";
    cin >> shift;

    // ������������ �����, ����� �� ��� � �������� ������� ������� (����������� �����)
    shift = shift % ARRAY_SIZE;

    // ������������ ������������� �������� ������
    if (shift < 0) {
        shift = ARRAY_SIZE + shift;
    }

    // ��������� ����������� ����� �����
    rotate(arr.begin(), arr.begin() + shift, arr.end());

    // ����� ����������
    cout << "������ ����� ������:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << arr[i] << "\t"; // ���������� ��������� ��� ������������
    }
    cout << endl;

    return 0;
}