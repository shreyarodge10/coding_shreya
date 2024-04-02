#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    if (original == reversed)
        return 1; // Palindrome
    else
        return 0; // Not a Palindrome
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);
    
    return 0;
}
