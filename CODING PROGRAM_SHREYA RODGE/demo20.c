#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int countRepeatedLetters(char *word) {
    int count[26] = {0}; // Array to store frequency of each letter

    // Count the frequency of each letter in the word
    for (int i = 0; word[i] != '\0'; i++) {
        if (isalpha(word[i])) {
            char c = tolower(word[i]);
            count[c - 'a']++;
        }
    }

    // Find the maximum frequency of any letter in the word
    int maxFrequency = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxFrequency) {
            maxFrequency = count[i];
        }
    }

    return maxFrequency;
}

int findWordWithMaxRepeatedLetters(char *str) {
    char word[MAX_LENGTH];
    char maxRepeatedWord[MAX_LENGTH] = "";
    int maxFrequency = 0;

    // Tokenize the string into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(word, token);
        int frequency = countRepeatedLetters(word);

        // Update max repeated word if needed
        if (frequency > maxFrequency) {
            maxFrequency = frequency;
            strcpy(maxRepeatedWord, word);
        }

        token = strtok(NULL, " ");
    }

    // If no word with repeated letters found
    if (maxFrequency == 1) {
        return -1;
    }

    printf("Word with the highest number of repeated letters: %s\n", maxRepeatedWord);
    return 0;
}

int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (findWordWithMaxRepeatedLetters(str) == -1) {
        printf("No word with repeated letters found.\n");
    }

    return 0;
}
