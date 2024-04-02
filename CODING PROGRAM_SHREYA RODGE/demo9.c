#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    int total = (size + 1) * (size + 2) / 2; // Total sum of natural numbers from 1 to size + 1
    for (int i = 0; i < size; ++i) {
        total -= arr[i]; // Subtract each element of the array
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7}; // Assuming one number is missing
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int missingNumber = findMissingNumber(arr, size);
    printf("Missing number in the array: %d\n", missingNumber);

    return 0;
}
