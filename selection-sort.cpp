#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int array[], int size) {
    int currentIndex, minIndex, temp;
    for (currentIndex = 0; currentIndex < size - 1; ++currentIndex) {
        minIndex = currentIndex;
        for (int i = currentIndex + 1; i < size; ++i) {
            if (array[i] < array[minIndex]) {
                minIndex = i;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != currentIndex) {
            temp = array[currentIndex];
            array[currentIndex] = array[minIndex];
            array[minIndex] = temp;
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

    selectionSort(array, size);

    cout << "Sorted Array: ";
    printArray(array, size);

    return 0;
}
