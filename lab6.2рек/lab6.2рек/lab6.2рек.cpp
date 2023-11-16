#include <iostream>
#include <Windows.h>
using namespace std;

// ������� ��� ��������� ������ �� �����
void printArray(const int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// ���������� ������� ��� ��������� ������
void reverseArray(int array[], int start, int end) {
    if (start < end) {
        // ���� ������� ��������
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        // ����������� ������ ��� ��������� �������� ���� ��������
        reverseArray(array, start + 1, end - 1);
    }
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

    // ������ ���������� ������� ��� ��������� ������
    reverseArray(array, 0, n - 1);

    cout << "������������� �����: ";
    printArray(array, n);

    delete[] array;  // ��������� ���'��, ������� ��� ������

    return 0;
}
