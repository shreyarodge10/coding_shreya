#include <stdio.h>

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    printf("Common elements between the two arrays: ");
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1: ");
    for (int i = 0; i < size1; ++i) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < size2; ++i) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}