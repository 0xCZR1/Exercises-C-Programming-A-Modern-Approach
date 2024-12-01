/*
One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Caesar. It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. If the replacement would go past the letter Z, the cipher "wraps around" to the beginning of the alphabet. For example, if each letter is replaced by the letter two positions after it, then Y would be replaced by A, and Z would be replaced by B.

Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted).

Example:
Enter message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 2
Encrypted message: Jr dkhdg, pdnh pb gdb.

Notice that the program can decrypt a message if the user enters 26 minus the original key:
Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
Enter shift amount (1-25): 23
Encrypted message: Go ahead, make my day.

Requirements:
- Message should not exceed 80 characters
Characters other than letters should be left unchanged
Lower-case letters remain lower-case when encrypted
Upper-case letters remain upper-case
Hint: To handle the wrap-around problem, use the expression ((ch - 'A') + n) % 26 + 'A' to calculate the encrypted version of an upper-case letter, where ch stores the letter and n stores the shift amount. (You'll need a similar expression for lower-case letters.)*/

#include <stdio.h>


#define MAX_LENGTH 80


int main(void) {

char user_input[MAX_LENGTH];
int shift_amount;
int i = 0,c;
char caesar_letter;
printf("Enter message to be encrypted: ");
while ((c = getchar()) != EOF && c != '\n') {
    user_input[i] = c;
    i++;
}
user_input[i] = '\0';
printf("Enter shift amount: ");
scanf("%d", &shift_amount);

printf("Encrypted message: ");

for (int n = 0; n <= i; n++){
    if (user_input[n] >= 'A' && user_input[n] <= 'Z'){
        caesar_letter = ((user_input[n] - 'A') + shift_amount) % 26 + 'A';
        printf("%c", caesar_letter);
    }
    else if (user_input[n] >= 'a' && user_input[n] <= 'z'){
        caesar_letter = ((user_input[n] - 'a') + shift_amount) % 26 + 'a';
        printf("%c", caesar_letter);
    }
    
    else{
        printf("%c", user_input[n]);
    }
}

}
