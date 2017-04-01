    /* Maior Menor */
#include <stdio.h>

int main (void) {
  int x,y,
      max,
      min;
   scanf("%d", &x);
   scanf("%d", &y);
  max = x;
  min = x;
 if (y > max)
   max = y;
 if (y < min)
   min = y;
  printf("\n");
  printf("%d > %d\n",max,min);
 return 0;
}
