#include <stdio.h>

#define ROWS 3
#define COLS 3

int findMaxOnesRow(int matrix[ROWS][COLS]) {
    int maxRow = 0;
    int maxOnesCount = 0;

    for (int i = 0; i < ROWS; ++i) {
        int onesCount = 0;
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] == 1) {
                onesCount++;
            }
        }
        if (onesCount > maxOnesCount) {
            maxOnesCount = onesCount;
            maxRow = i;
        }
    }

    return maxRow;
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 0, 1},
        {0, 1, 1},
        {1, 1, 0}
    };

    printf("Original matrix:\n");
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int maxOnesRow = findMaxOnesRow(matrix);
    printf("Row with maximum number of 1's: %d\n", maxOnesRow);

    return 0;
}
