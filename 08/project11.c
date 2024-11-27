#include <stdio.h>
int main(void) {
    char c;
    char input_array[100];
    
    printf("Enter phone number: ");
    int i = 0;
    while ((c = getchar()) != '\n' && i < 10) {  
        input_array[i++] = c;
    }
    input_array[i] = '\0';
    
    for (unsigned n = 0; n < i; n++) {
        c = input_array[n];
        switch (c) {
            case 'A': case 'B': case 'C':
                putchar('2');
                break;
            case 'D': case 'E': case 'F':
                putchar('3');
                break;
            case 'G': case 'H': case 'I':
                putchar('4');
                break;
            case 'J': case 'K': case 'L':
                putchar('5');
                break;
            case 'M': case 'N': case 'O':
                putchar('6');
                break;
            case 'P': case 'R': case 'S':
                putchar('7');
                break;
            case 'T': case 'U': case 'V':
                putchar('8');
                break;
            case 'W': case 'X': case 'Y':
                putchar('9');
                break;
            default:
                putchar(c);
                break;
        }
    }

    printf("\n");
    return 0;
}


