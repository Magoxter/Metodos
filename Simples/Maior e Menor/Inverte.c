    /* Inverte */
// Este Programa Inverte n Numero

#include <stdio.h>

void positivo(int);

int main (void) {

    int num;

    printf("Numero Inteiro: ");
    scanf ("%d", &num);

    if (num >= 0) {
        positivo(num);
    }

    else {
        num = num * -1;
        printf("-");
        positivo(num);
    }

    return 0;
}

void positivo(int num) {

    int cifra;

    do {
        cifra = num % 10;
        printf ("%d", cifra);
        num /= 10;
    }  while (num != 0);

    printf("\n");

    return;
}
