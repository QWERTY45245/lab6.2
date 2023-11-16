#include <iostream>
#include<Windows.h>
using namespace std;

// Функція для виведення масиву на екран
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
    cout << "Введіть розмір масиву n: ";
    cin >> n;

    int* array = new int[n];

    // Заповнення масиву випадковими значеннями 
    for (int i = 0; i < n; ++i) {
        array[i] = i + 1;  // Заповнення значеннями від 1 до n
    }

    cout << "Початковий масив: ";
    printArray(array, n);

    // Обмін місцями елементів у зворотньому порядку ітераційним методом
    for (int start = 0, end = n - 1; start < end; ++start, --end) {
        // Обмін значень елементів
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
    }

    cout << "Модифікований масив: ";
    printArray(array, n);

    delete[] array;  // Звільнення пам'яті, виділеної для масиву

    return 0;
}
