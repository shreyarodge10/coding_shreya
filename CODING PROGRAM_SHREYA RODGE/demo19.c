#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

void findIndices(int arr[], int size, int target) {
    // Create a hash table to store the indices of elements
    int hashTable[MAX_SIZE] = {0};

    for (int i = 0; i < size; i++) {
        int complement = target - arr[i];
        
        // Check if complement exists in the hash table
        if (hashTable[complement] != 0) {
            printf("Indices: %d, %d\n", hashTable[complement] - 1, i);
            return;
        }

        // Store the index of the current element in the hash table
        hashTable[arr[i]] = i + 1;
    }

    printf("No such indices found.\n");
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    findIndices(arr, size, target);

    return 0;
}
