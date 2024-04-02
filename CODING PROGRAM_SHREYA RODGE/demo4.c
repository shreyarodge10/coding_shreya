#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortFirstHalfAscendingSecondHalfDescending(int arr[], int size) {
    // Bubble sort the first half in ascending order
    for (int i = 0; i < size / 2 - 1; ++i) {
        for (int j = 0; j < size / 2 - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    // Bubble sort the second half in descending order
    for (int i = size / 2; i < size - 1; ++i) {
        for (int j = size / 2; j < size - i + size / 2 - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 7, 1, 4, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    sortFirstHalfAscendingSecondHalfDescending(arr, size);

    printf("Array with first half sorted in ascending and second half in descending: ");
    printArray(arr, size);

    return 0;
}
