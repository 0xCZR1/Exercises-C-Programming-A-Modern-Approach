/* Write a program that calculates the average word length for a sentence:
 Enter a sentence: It was deja vu all over again.
 Average word length: 3.4*/
#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0


int main(void)
{
   int word_counter = 0; int letter_counter = 0;
   int state = IN;
   int c;
   
   while ((c = getchar())!= EOF){
      
      if (c == ' ' || c == '\t' || c == '\n') {
         if (state == IN) {
            ++word_counter;
            state = OUT;
         }

      }
      else {if (state == OUT) {
            state = IN;
      }
         ++letter_counter;
   }
}
         if (state == IN)
        ++word_counter;

         float average = (float)letter_counter / word_counter;
         average = roundf(average * 10) / 10;  
   
         printf("Average word length: %.1f\n", average);
    
         return 0;
}
