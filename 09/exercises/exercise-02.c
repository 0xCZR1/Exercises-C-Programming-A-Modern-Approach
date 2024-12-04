#include <stdio.h>


#define MAX_LENGTH 80

int check(int x, int y, int n);

int main(void) {

    int check_it = check(0,3,8);
    printf("%d", check_it);
    return 0;

}

int check(int x, int y, int n){
    if(x > 0 && x < n - 1 && y > 0 && y < n - 1) 
    return 1;
    else
    return 0;
}
