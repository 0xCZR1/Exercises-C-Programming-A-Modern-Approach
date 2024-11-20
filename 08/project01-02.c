/**/

#include <stdio.h>
#define N 10
#define MAX_INT 100
int main(void) {
 
    int a[N];
    int freq_array[MAX_INT] = {0};

    printf("Enter 10 numbers, separated by space ");
    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]);
        freq_array[a[i]]++;
    }

    printf("Duplicates: ");
    for (int i = 0; i < MAX_INT; i++){
        if(freq_array[i] > 1) {
            printf("%d \n", i);
        }
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", i);
        
    }
    putchar('\n');
    for (int i = 0; i < N; i++) {
       
        printf("%d ", freq_array[i]);
    }
    
 return 0;
}
