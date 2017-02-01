    /* VetStruct */

#include <stdio.h>

    struct horario {
        int hora[5];
        int minuto[5];
        int segundo[5];
        };

int main (void) {

    int i;
    struct horario teste;

    teste.hora[0] = 10;
    teste.minuto[0] = 20;
    teste.segundo[0] = 30;

    for (i = 1; i < 5; i++) {
         teste.hora[i] = teste.hora[i-1]+1;
         teste.minuto[i] = teste.minuto[i-1]+1;
         teste.segundo[i] = teste.segundo[i-1]+1;
    }

    for (i = 0; i < 5; i++) {
         printf ("%d:%d:%d\n",teste.hora[i],
                              teste.minuto[i],
                              teste.segundo[i]);
    }

    return 0;
}
