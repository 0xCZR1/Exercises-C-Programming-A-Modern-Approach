#include <stdio.h>
/*Write a program that reads a 5 x 5 array of integers and then prints the row sums and the
 column sums
 Enter row 1: 8 3 9 0 10
 Enter row 2 : 3 5 17 1 1
 Enter row 3 : 2 8 6 23 1
 Enter row 4 : 15 7 3 2 9
 Enter row 5: 6 14 2 6 0

 Row totalS: 30 27 40 36 28
 Column totals: 34 37 37 32 21*/
#define MAX_SIZE 100


int main(void) {
    int row_total = 0;
    int column_total = 0;
    int counter = 0;
 int num_array[5][5] = {{8, 3, 9, 0, 10},
                        {3, 5, 17, 1, 1},
                        {2, 8, 6, 23, 1},
                        {15, 7, 3, 2, 9},
                        {6, 14, 2, 6, 0}};

    printf("\nRow Total: ");
    for (counter; counter < 5; counter++){
    for(int i=0; i<5; i++){
        row_total += num_array[counter][i];
        
        }
        printf("%d ", row_total);
        row_total = 0;
    }
    counter = 0;
    printf("\nColumn Total: ");
    for (counter; counter < 5; counter++){
        for(int i=0; i<5; i++){
        column_total += num_array[i][counter];
        
        }
      printf("%d ", column_total);
        column_total = 0;  
    }
}
