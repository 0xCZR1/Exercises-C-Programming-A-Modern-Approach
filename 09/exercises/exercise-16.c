#include <stdio.h>
int fact(int);

void main()
{
    int try = fact(5);
    printf("%d", try);
}
 
int fact(int n)
{
    return n <= 1 ? 1 : n  * fact(n - 1);
}
