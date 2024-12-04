#include <stdio.h>
#define MAX_LENGTH 80

int gcd(int m, int n);

int main(void) {

    int my_brain = gcd(12, 28);
    printf("%d", my_brain);

    return 0;

}

int gcd(int m, int n){

        int r = 0;
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return m; 
}
