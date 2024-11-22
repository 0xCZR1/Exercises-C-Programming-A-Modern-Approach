#include <stdio.h>
#include <stdlib.h>
/*Write a program that generates a “random walk" across a 10 x 10 array. The array will con
 tain characters (all ’ . ’ initially). The program must randomly “walk” from element to ele
 ment; always going up, down. left, or right by one element. The elements visited by thc
 program will be labeled with the letters A through Z, in the order visited. Here's an example
 oflhe desired output:.*/
#define MAX_SIZE 100


int main(void) {
   srand(time(NULL));
    int j = 0;
    int n = 0;
    int curr_x, curr_y, letter_index = 0;
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                     'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    char walk_path[10][10] = {0};

    for (int i = 0; i < 11 - 1; i++) {
        putchar('\n');
        for (n = 0; n < 11 - 1; n++){
            walk_path[i][n] = '.'; 
    }
    n = 0;
}
    curr_x = rand() % 10;
    curr_y = rand() % 10;
    walk_path[curr_y][curr_x] = alphabet[letter_index++];
    printf("\n\nInitial position:\n");
    for (int i = 0; i < 10; i++) {
   for (int j = 0; j < 10; j++) {
       printf("%c ", walk_path[i][j]);
   }
   printf("\n");
}

    int dx[] = {0, 1, 0, -1};
    int dy[] = {-1, 0, 1, 0};

    getchar();
    
while (letter_index < 26) {
        int available_moves[4] = {0};
        int move_count = 0;
        
    for (int i = 0; i < 4; i++) {
            int new_x = curr_x + dx[i];
            int new_y = curr_y + dy[i];
            
            if (new_x >= 0 && new_x < 10 && new_y >= 0 && new_y < 10 && 
                walk_path[new_y][new_x] == '.') {
                available_moves[move_count++] = i;
            }
        }
    
     if (move_count == 0) break;

    int move = available_moves[rand() % move_count];
        curr_x += dx[move];
        curr_y += dy[move];
        walk_path[curr_y][curr_x] = alphabet[letter_index++];

   printf("\n\nMove %c:\n", alphabet[letter_index-1]);
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%c ", walk_path[i][j]);
            }
            printf("\n");
        }
        getchar(); 
    }
    
    return 0;

}


