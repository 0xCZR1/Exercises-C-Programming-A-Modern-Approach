/**/

#include <stdio.h>
#define N 10
#define MAX_INT 100
int main(void) {
 
    int num;

    while (1) {

        printf("Enter digits: ");
        scanf("%d", &num);

        if (num <= 0) break;
        
        int temp = num;
        int freq_map[N] = {0};
        int has_repeat = 0;
        

        while (temp > 0){

            if(freq_map[temp % 10] == 1) {
                has_repeat = 1;
                break;
            }
            freq_map[temp % 10] = 1;
            temp /= 10;
        }

        
        if (has_repeat)
            printf("Occurence found! %d\n", num);
        else 
            printf("No occurences found! %d\n", num);


    
 

}
return 0;

}
