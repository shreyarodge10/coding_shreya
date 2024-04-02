#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits in the number
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    // Reset num to original value
    num = originalNum;

    // Compute the sum of nth powers of its digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == originalNum);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
