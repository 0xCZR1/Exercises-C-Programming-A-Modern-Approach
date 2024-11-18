/* Write a declaration of an array named weekend containing seven bool values. Include an
 initializer that makes the first and last values true; all other values should be false .*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define TR 1
#define FA 0

int main(void)
{

  int bl[7] = {[0] = TR, [6] = TR};
  for (int i = 0; i < 7; i++) {
    printf("%d", bl[i]);
  }
  printf("\n");
  bool weekend[7] = {[0] = true, [6] = true};
  for (int i = 0; i < 7; i++) {
    printf("%d", weekend[i]);
  }

}
