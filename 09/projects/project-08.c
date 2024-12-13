#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/* game of craps */
int roll_dice(void);      // Generates and returns sum of two random 1-6 numbers
bool play_game(void);     // Plays one game, returns true for win, false for loss
bool ask_to_play_again(void);

int main(void) {
    srand(time(NULL));
    int wins=0,losses=0;
    printf("Welcome to Barbut!\n");
    do {
        if (play_game())
            wins++;
        else
            losses++;
    } while (ask_to_play_again());
    printf("\nWins: %d  Losses: %d\n", wins, losses);
    return 0;
}

int roll_dice(void) {
    int dice_1 = (rand()%6)+1;  
    int dice_2 = (rand()%6)+1;
    return dice_1 + dice_2;
}

bool ask_to_play_again(void) { 
    char c;
    
    while(true){
        printf("One more time? (Y/N)");

        scanf(" %c", &c);
        while (getchar() != '\n');
        c = toupper(c); // Convert to upper
      
        if (c == 'Y')
            return true;
        else if (c == 'N')
            return false;
        else
            printf("Answer with Y/N\n");
    }
}

bool play_game(void) {
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);
  
    //First roll phase:
    if (roll == 7 || roll == 11) {
        printf("You win!\n");
        return true;
    } else if ( roll == 2 || roll == 3 || roll == 12 ){
        printf("You lose!\n");
        return false;
    }
    //Point phase
    int point = roll;

    while (true) {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if(roll==point){
            printf("You win!\n");
            return true;
        } else if ( roll == 7) {
            printf("You lose!\n");
            return false;
        }
    }
}

   
