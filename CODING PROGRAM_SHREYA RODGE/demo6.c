#include <stdio.h>

void printUniqueNumbers(int arr[], int size) {
    printf("Unique numbers in the array: ");
    for (int i = 0; i < size; ++i) {
        int j;
        for (j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (i == j) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printUniqueNumbers(arr, size);

    return 0;
}
