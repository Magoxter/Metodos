    /* Variaveis
     . Compostas
     . Homogeneas
     */

#include <stdio.h>

void teste(void);

int main (void) {

    teste();
    teste();
    teste();

    return 0;
}

void teste(void) {

    int         variavelAutomatica = 2;
    static int  variavelEstatica = 2;

    variavelAutomatica *= 2;
    variavelEstatica *= 2;

    printf("\n%d\n", variavelAutomatica);
    printf("%d\n", variavelEstatica);

    return;
}
