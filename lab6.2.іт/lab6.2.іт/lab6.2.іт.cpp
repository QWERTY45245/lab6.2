#include <iostream>
#include<Windows.h>
using namespace std;

// ������� ��� ��������� ������ �� �����
void printArray(const int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "������ ����� ������ n: ";
    cin >> n;

    int* array = new int[n];

    // ���������� ������ ����������� ���������� 
    for (int i = 0; i < n; ++i) {
        array[i] = i + 1;  // ���������� ���������� �� 1 �� n
    }

    cout << "���������� �����: ";
    printArray(array, n);

    // ���� ������ �������� � ����������� ������� ����������� �������
    for (int start = 0, end = n - 1; start < end; ++start, --end) {
        // ���� ������� ��������
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
    }

    cout << "������������� �����: ";
    printArray(array, n);

    delete[] array;  // ��������� ���'��, ������� ��� ������

    return 0;
}
