#include <stdio.h>
#include <math.h>

int main(void)
{
   double x, result;
   double y = 1;
   double new_y = 0;
   printf("Enter a positive number: ");
   scanf("%lf", &x);

   do{
      new_y = (y + x/y) / 2;
      if (fabs(new_y - y) < (0.00001 * y)){
            break;
      }
      y = new_y;
   } while (1); 
   
      
    printf("%lf", new_y);        
}
