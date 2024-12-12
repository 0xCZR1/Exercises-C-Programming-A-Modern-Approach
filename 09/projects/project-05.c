#include <stdio.h>

int main(void) {
   int n = 0;
   printf("This program creates a magic square of a specified size.\n");
   printf("The size must be an odd number between 1 and 99.\n");
   printf("Enter size of magic square: ");
   scanf("%d", &n);
   
   int middle = n / 2;
   int magic_square[n][n];


   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           magic_square[i][j] = 0;
       }
   }
   
   // Start
   int row = 0;
   int col = middle;
   magic_square[row][col] = 1;

   // Place remaining numbers
   for (int current_number = 2; current_number <= n*n; current_number++) {
       // Try to move up and right
       int new_row = row - 1;
       int new_col = col + 1;
       
       // Handle wrap-around
       if (new_row < 0) new_row = n - 1;
       if (new_col >= n) new_col = 0;
       
       // If spot is taken, go below previous spot instead
       if (magic_square[new_row][new_col] != 0) {
           new_row = row + 1;
           new_col = col;
       }
       

       magic_square[new_row][new_col] = current_number;
       row = new_row;
       col = new_col;
   }


   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           printf("%4d", magic_square[i][j]);
       }
       putchar('\n');
   }

   return 0;
}
