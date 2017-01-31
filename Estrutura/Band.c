	/* Bandas */
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef char string[MAX];

struct bandas {
	string 	nome,
		   	  genero;
	int 	integrantes,
			  ranking;
};

int main (void) {
  struct bandas b;
 while (scanf("%s", b.nome) != EOF) {
 	scanf("%s", b.genero);
 	scanf("%d", &b.integrantes);
 	scanf("%d", &b.ranking);
    printf("\n");
   printf("%s...\n", b.nome);
   printf("Genero: %s\n", b.genero);
   printf("Integrantes %d\n", b.integrantes);
   printf("Ranking:    %d\n", b.ranking);
 }
 return 0;
}
