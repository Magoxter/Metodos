    /* DecBin */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verificacao (int);
int pot (int,int);

int main (void) {
  int n,i,r,
      ver,
      cont;
    scanf("%d", &n);
     ver = verificacao(n);
     cont = 1;
  for (i = ver; i >= 0; i--) {
    r = n >> i;     // Oper Shift Right
// ate a Ult Pos da Dir para cada Bit
   if (r)
    printf("1");
   else
    printf("0");
   if (cont == 4 &&
       i != 0) {
     printf(".");
     cont = 1;   }
   else
     cont++;
  } printf("\n");
 return 0;
}

int verificacao (int n) {
  int maior,
      ver,i,
      ctrl;
    maior = i = 0;
   while (n >= pot(2,i)) {
    maior = i;
    i++;
  } ver = maior;
    ctrl = 0;
   if (ver % 4 == 0) {
     ver += 4;
     ctrl = 1;
   }
  while (ctrl != 1) {
     ver++;
    if (ver % 4 == 0) {
      ctrl = 1;
    }
  }
 return ver-1;
}

int pot (int n,int x) {
  int raiz;
   raiz = 1;
 while (x--)
     raiz *= n;
 return raiz;
}
