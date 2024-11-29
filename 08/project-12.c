#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    printf("Enter a word: ");
    int score, scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
                        5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
                        1, 4, 4, 8, 4, 10};

    while ((c = getchar()) != '\n' && c != EOF) {
        c = toupper(c);
        score += scrabble[c - 'A'];
        
    }
    printf("%d", score);
}
