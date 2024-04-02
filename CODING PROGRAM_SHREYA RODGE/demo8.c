#include <stdio.h>

void countEvenOdd(int arr[], int size) {
    int evenCount = 0, oddCount = 0;
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    printf("Number of even integers: %d\n", evenCount);
    printf("Number of odd integers: %d\n", oddCount);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    countEvenOdd(arr, size);

    return 0;
}
