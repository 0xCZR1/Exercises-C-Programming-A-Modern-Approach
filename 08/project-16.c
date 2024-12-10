#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 26

int main(void) {

    int first_word[SIZE] = {0};   
    int second_word[SIZE] = {0};
    int c;
    int i = 0;

    // First word
    printf("Enter the first word: ");
    while ((c = tolower(getchar())) != EOF && c != '\n') {
        if (c >= 'a' && c <= 'z') {
            // Count frequency of each letter
            first_word[c - 'a']++;  // Convert 'a' to 0, 'b' to 1, etc.
        }
    }

    // Second word
    printf("Enter the second word: ");
    while ((c = tolower(getchar())) != EOF && c != '\n') {
        if (c >= 'a' && c <= 'z') {
            second_word[c - 'a']++;
        }
    }

    // Compare letter frequencies
    int is_anagram = 1;  // assume true until proven false
    for (i = 0; i < SIZE; i++) {
        if (first_word[i] != second_word[i]) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("The words are anagrams!\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}
