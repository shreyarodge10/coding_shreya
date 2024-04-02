#include <stdio.h>

void removeDuplicates(int arr[], int *n) {
    if (*n <= 1) // No duplicates possible
        return;

    int j = 0;
    for (int i = 0; i < *n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[*n - 1]; // Copy the last element
    *n = j; // Update array size
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    removeDuplicates(arr, &n);

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
