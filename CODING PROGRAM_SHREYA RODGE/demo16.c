#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_COUNT 26

bool isPangram(char *str) {
    // Create a frequency array to store the occurrence of each letter
    int frequency[ALPHABET_COUNT] = {0};

    // Iterate through the string and update the frequency array
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            // Convert character to lowercase to ensure case-insensitive comparison
            char c = tolower(str[i]);
            frequency[c - 'a']++;
        }
    }

    // Check if all alphabets occurred at least once
    for (int i = 0; i < ALPHABET_COUNT; i++) {
        if (frequency[i] == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPangram(str)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
