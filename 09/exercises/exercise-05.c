#include <stdio.h>


int num_digits(int n);

int main(void) {

    int num = num_digits(3233);
    printf("%d", num);

}

int num_digits(int n){

    int i = 0;
    int num = 0;

    while (n != 0) {
        num = n / 10;
        n = num;
        i += 1;
    }

    return i;
    
