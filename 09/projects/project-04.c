#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#define SIZE 26

void read_word(int counts[SIZE]);
bool equal_array(int counts1[SIZE], int counts2[SIZE]);

bool equal_array(int counts1[SIZE], int counts2[SIZE]){
    int is_anagram = 1;
    for (int j = 0; j < SIZE; j++) {
        if (counts1[j] != counts2[j])
            is_anagram = 0;
    }
    if (is_anagram = 1) {
        printf("Is Anagram");
    }
    else
        printf("Is not Anagram");
}

void read_word(int counts[SIZE]){
    int c;
    int i = 0;

    while ((c = tolower(getchar())) != EOF && c != '\n') {
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a'] += 1;
            i++;
            if (i >= SIZE) break;
        }
    }
    i = 0;
}

int main(void) {
   
    int first_word[SIZE] = {0};
    int second_word[SIZE] = {0};
    int c;
    int i = 0;

    printf("Enter the first word: ");
    read_word(first_word);
    printf("\n");
    printf("Enter the second word: ");
    read_word(second_word); 
    equal_array(first_word, second_word);
}
