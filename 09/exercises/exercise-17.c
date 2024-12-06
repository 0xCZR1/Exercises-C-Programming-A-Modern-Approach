#include <stdio.h>
int fact(int);

void main()
{
    int try = fact(5);
    printf("%d", try);
}
 
int fact(int n)
{
    int f = 1;

    for (int i = 1; i <= n; i++){
        f = f * i;
       }

    return f;
    
}
