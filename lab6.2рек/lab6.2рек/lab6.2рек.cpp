#include <iostream>
#include <Windows.h>
using namespace std;

// Функція для виведення масиву на екран
void printArray(const int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Рекурсивна функція для обертання масиву
void reverseArray(int array[], int start, int end) {
    if (start < end) {
        // Обмін значень елементів
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        // Рекурсивний виклик для обертання наступної пари елементів
        reverseArray(array, start + 1, end - 1);
    }
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

    // Виклик рекурсивної функції для обертання масиву
    reverseArray(array, 0, n - 1);

    cout << "Модифікований масив: ";
    printArray(array, n);

    delete[] array;  // Звільнення пам'яті, виділеної для масиву

    return 0;
}
