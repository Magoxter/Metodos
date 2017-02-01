#include <stdio.h>

    struct horario {
       int horas;
       int minutos;
       int segundos;
    };

int main (void) {

    struct horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario depois;

    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos + 10;
    depois.segundos = agora.segundos + 10;

    printf ("\nAGORA...\n");
    printf ("%d:%d:%d\n",agora.horas,
                         agora.minutos,
                         agora.segundos);

    printf ("\nDEPOIS...\n");
    printf ("%d:%d:%d\n",depois.horas,
                         depois.minutos,
                         depois.segundos);

    return 0;
}
