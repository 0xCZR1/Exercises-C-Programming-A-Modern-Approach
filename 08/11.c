#include <stdio.h>

int main(void) {
    char chess_board[8][8] = {0};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i+j) % 2 == 0) {
                chess_board[i][j] = 'B';
                
            }
            else {
                chess_board[i][j] = 'A';
            }
            printf("%c ", chess_board[i][j]);
        }
        printf("\n");
    }
}
