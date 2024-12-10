#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void generate_random_walk(char walk[MAX_SIZE][MAX_SIZE]);
void print_array (char walk[MAX_SIZE][MAX_SIZE]);

void print_array (char walk_path[MAX_SIZE][MAX_SIZE]) {

        for (int i = 0; i < MAX_SIZE; i++) {
            for (int j = 0; j < MAX_SIZE; j++) {
                printf("%c ", walk_path[i][j]);
            }
            printf("\n");
        }
        getchar(); 
    }


void generate_random_walk(char walk_path[MAX_SIZE][MAX_SIZE]) {
    
    srand(time(NULL));

    int n = 0;
    int curr_x, curr_y, letter_index = 0;
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                     'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    

    for (int i = 0; i < 11 - 1; i++) {
        putchar('\n');
        for (n = 0; n < 11 - 1; n++){
            walk_path[i][n] = '.'; 
    }
    n = 0;
}
    curr_x = rand() % MAX_SIZE;
    curr_y = rand() % MAX_SIZE;
    walk_path[curr_y][curr_x] = alphabet[letter_index++];
    printf("\n\nInitial position:\n");
    for (int i = 0; i < MAX_SIZE; i++) {
   for (int j = 0; j < MAX_SIZE; j++) {
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
            
            if (new_x >= 0 && new_x < MAX_SIZE && new_y >= 0 && new_y < MAX_SIZE && 
                walk_path[new_y][new_x] == '.') {
                available_moves[move_count++] = i;
            }
        }
    
     if (move_count == 0) break;

    int move = available_moves[rand() % move_count];
        curr_x += dx[move];
        curr_y += dy[move];
        walk_path[curr_y][curr_x] = alphabet[letter_index++];
}
}


int main(void) {
   
    char walk_path[MAX_SIZE][MAX_SIZE];
    generate_random_walk(walk_path);
    print_array(walk_path);
    
    return 0;

}
