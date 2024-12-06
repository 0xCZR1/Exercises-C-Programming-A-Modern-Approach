#include <stdio.h>
#define MAX_LENGTH 80

int gcd(int m, int n);

int main(void) {

    int my_brain = gcd(12, 28);
    printf("%d", my_brain);

    return 0;

}

int gcd(int m, int n){

    return n == 0 ? m : gcd(n, m % n);
}
