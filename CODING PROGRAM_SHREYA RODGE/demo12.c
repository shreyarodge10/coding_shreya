#include <stdio.h>

void rotateLeftByOne(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotateLeftByOne(arr, n);

    printf("\nArray after rotation by one position left: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
