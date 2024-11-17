#include <stdio.h>
#include <math.h>

int main(void)
{
   int number = 0;
   long double result = 1;
   
   printf("Enter a positive integer: ");
   scanf("%d", &number);

   for (int i = 1; i <= number; i++){
       result *= i;
   }
   
   printf("Factorial of %d: %.0Le\n", number, result);
