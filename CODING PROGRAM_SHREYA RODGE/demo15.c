#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

int areAnagrams(char *str1, char *str2) {
    int count1[MAX_CHARS] = {0};
    int count2[MAX_CHARS] = {0};
    int i;

    // If lengths of the strings are not same, they cannot be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count frequency of characters in both strings
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // If counts of characters are not same, they cannot be anagrams
    for (i = 0; i < MAX_CHARS; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1; // Strings are anagrams
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
