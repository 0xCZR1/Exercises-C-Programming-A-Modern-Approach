#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    printf("Enter a word: ");
    int score = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        c = toupper(c);
        
        if (c >= 'A' && c <= 'Z') {
            switch (c) {
                case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U': // 1: AEILNORSTU
                    score += 1;
                    break;
                case 'D': case 'G': // 2: DG
                    score += 2;
                    break;
                case 'B': case 'C': case 'M': case 'P': // 3: BCMP
                    score += 3;
                    break;
                case 'F': case 'H': case 'V': case 'W': case 'Y':  //  4: FHVWY
                    score += 4;
                    break;
                case 'K': //  5: K
                    score += 5;
                    break;
                case 'J': case 'X': //  8: JX
                    score += 8;
                    break;
                case 'Q': case 'Z': // 10: QZ
                    score += 10;
                    break;
            }
        } else {
            printf("%c", c);
        }
    }
    printf("Final Score: %d", score);
    printf("\n"); 
    return 0;
}
