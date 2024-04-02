#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversedNumber = reverseNumber(number);
    printf("Reversed number: %d\n", reversedNumber);
    return 0;
}
