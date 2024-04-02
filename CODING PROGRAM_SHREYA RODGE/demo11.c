#include <stdio.h>
#include <ctype.h>

void removeNonAlphabetic(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the string
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove non-alphabetic characters
    removeNonAlphabetic(str);
    
    printf("String after removing non-alphabetic characters: %s\n", str);
    
    return 0;
}
