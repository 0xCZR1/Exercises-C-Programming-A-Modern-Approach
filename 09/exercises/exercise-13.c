
#include <stdio.h>

int evaluate_position(char board[8][8]);



int main(void) {

    char board[8][8] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},  
        {'P', 'P', 'P', 'P', 'P', 'P', ' ', 'P'},  
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},   
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},   
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},  
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},   
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},  
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}   
    };


    int position_value = evaluate_position(board);
    
    printf("Position value: %d\n", position_value);
    
    return 0;
}




int evaluate_position(char board[8][8]) {
    
    int white_value = 0;
    int black_value = 0;

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            switch(board[i][j]){
                case 'Q': white_value += 9; break;
                case 'R': white_value += 5; break;
                case 'B': white_value += 3; break;
                case 'N': white_value += 3; break;
                case 'P': white_value += 1; break;
                
                // Black pieces
                case 'q': black_value += 9; break;
                case 'r': black_value += 5; break;
                case 'b': black_value += 3; break;
                case 'n': black_value += 3; break;
                case 'p': black_value += 1; break;
            }
        }
    }
    return white_value - black_value;

}
