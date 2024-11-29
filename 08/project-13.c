#include <stdio.h>

int main(void) {

    char c;
    char last_name[20];
    int i = 0;
    printf("Enter a first and last name: ");

    
    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) == ' ')
        ;

    do {
        last_name[i] = c;
        ++i;
    } while ((c = getchar()) != '\n' && c != ' ');

    c = '\0';
    for (int n = 0; n < i; n++){
        printf("%c", last_name[n]);
    }
    return 0;
}
