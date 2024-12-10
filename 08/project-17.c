#include <stdio.h>
/*
Here's the text from the image:
Write a program that prints an n × n magic square (a square arrangement of the numbers 1, 2, ..., n² in which the sums of the rows, columns, and diagonals are all the same). The user will specify the value of n.

This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
17    24    1     8    15
23     5    7    14    16
4      6    13   20    22
10    12    19   21     3
11    18    25    2     9

Store the magic square in a two-dimensional array. Start by placing the number 1 in the middle of row 0. Place each of the remaining numbers 2, 3, 4, ..., n² by moving up one row and over one column. Any attempt to go outside the bounds of the array should "wrap around" to the opposite side of the array. For example, instead of storing the next number in row -1, we would store it in row n - 1 (the last row). Instead of storing the next number in column n, we would store it in column 0. If a particular array element is already occupied, put the number directly below the previously stored number. If your compiler supports variable-length arrays, declare the array to have n rows and n columns. If not, declare the array to have 99 rows and 99 columns.*/
int main(void) {
    int n = 0;
    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    int middle = (0.5 * n);

    printf("%d\n", middle);    
    int magic_square[n][n];
    int row = 0;
    int col = middle;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }
  
  // Start at middle of first row
    magic_square[row][col] = 1;

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
    
    // Place the number
    magic_square[new_row][new_col] = current_number;
    row = new_row;
    col = new_col;
}



for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("%2d   ", magic_square[i][j]);
    }
    putchar('\n');
}
}
