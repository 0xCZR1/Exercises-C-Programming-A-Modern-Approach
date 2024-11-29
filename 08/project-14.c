#include <stdio.h>

/*Wriie a program thal reverses the words in a sentence:
 Enter a sentence: you can cage a swallow can't you?
 Reversal of sentence: you can't swallow a cage can you?*/

int main(void) {

    char sentence[50];
    char c;

    int i = 0;

    printf("Enter a sentence: ");
    
    while ((c = getchar()) != '\n' && c != EOF){
        sentence[i] = c;
        i++;
    }
printf("Reversed sentence: \n");
    for(int n = i; n >= 0; n--) {
        printf("%c", sentence[n]);    
    }
}
