#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

    }
}

// Function to print the elements of an array
void printArray(const int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {4, 1, 6, 8, 3, 5, 2, 9, 7, 10};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Unsorted Array: ";
    printArray(array, size);

    bubbleSort(array, size);

    cout << "Sorted Array: ";
    printArray(array, size);

    return 0;
}
