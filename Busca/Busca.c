    /* Busca */
#include <stdio.h>
#define MAX 1000

int busca_R (int,int,int[],int);

int main (void) {
  int n,i,x,
      elem,
      esq,dir,
      v[MAX];
    scanf("%d", &n);
     esq = -1;
     dir = n;
   for (i = 0; i < n; i++)
     scanf("%d", &v[i]);
     scanf("%d", &x);
    elem = busca_R(esq,dir,v,x);
  if (v[elem] == x)
    printf("%d\n", elem);
  else
    printf("Elemento Nao Encontrado\n");
 return 0;
}

int busca_R (int esq,int dir,int v[MAX],int x) {
  int meio;
    if (esq == dir-1)
      return dir;
    else {
        meio = (esq + dir) / 2;
      if (v[meio] < x)
        return busca_R(meio,dir,v,x);
      else
        return busca_R(esq,meio,v,x);
    }
}
