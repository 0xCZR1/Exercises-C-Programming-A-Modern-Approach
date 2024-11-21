#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* Enter message: Hey dude, C is rilly cool
 In BlFF-speak: H3Y DUD3, C 15 RlLLY C00L!!!!!!!!!!*/
#define MAX_SIZE 100


int main(void) {

    char input_buffer[MAX_SIZE];
    int c;
    int i = 0;

    while ((c = getchar()) != '\n' && i < MAX_SIZE - 1) {
        input_buffer[i] = c;
        i++;
    }
    input_buffer[i] = '\0';

    for (i = 0; input_buffer[i] != '\0'; i++){
        input_buffer[i] = toupper(input_buffer[i]);
        
        switch(input_buffer[i]) {
            case'E': input_buffer[i] = '3'; break;

            case'A': input_buffer[i] = '4'; break;

            case'O': input_buffer[i] = '0'; break;

            case'I': input_buffer[i] = '1'; break;

            case'S': input_buffer[i] = '5'; break;
        }

        printf("%c", input_buffer[i]);
    
    }

}
