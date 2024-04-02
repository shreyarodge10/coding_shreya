#include <stdio.h>

void rotateLeftByK(int arr[], int n, int k) {
    k = k % n; // Handling case when k is greater than array size
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Rotate by 2 positions left

    printf("Array before rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotateLeftByK(arr, n, k);

    printf("\nArray after rotation by %d positions left: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
