    /* Casting */
#include <stdio.h>

int main (void) {

    int x,y;

    x = 16;
    y = 3;

    float resultado1,
          resultado2;

    resultado1 = (int) x / y;
    resultado2 = 16.0 / 3;

    printf ("a - %.1f\n", resultado1);
    printf ("b - %.1f\n", resultado2);

    return 0;
}
