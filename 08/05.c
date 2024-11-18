#include <stdio.h>

int main(void)
{
    unsigned long long int fib_numbers[40] = {[0] = 0, [1] = 1};
    
    for (int i = 2; i < 40; i++) {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }
    
    for (int i = 0; i < 40; i++) {
        printf("%llu\n", fib_numbers[i]);
    }
    return 0;
}
