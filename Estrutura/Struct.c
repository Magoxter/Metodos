    /* Estrutura */
#include <stdio.h>
#include <stdlib.h>

// Estrutura1:
    struct ponto2D {
        int x,y;
        };
// Estrutura2:
    struct ponto3D {
        int x,y,z;
        };

int main (void) {

    struct ponto2D p2;
    struct ponto3D p3;

    p2.x = 10;
    p3.x = 12;

    printf("%d %d\n", p2.x, p3.x);

    return 0;
}
