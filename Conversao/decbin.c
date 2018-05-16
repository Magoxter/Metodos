		/* Decimal-Binario */
// Este Programa Converte um Byte
// Decimal em Binario no
// Formato String
#include <stdio.h>
#include <math.h>

#define MX 10

int main (void) {
  int dec;
  int z,x;
  int d,e;
  int aux;
  char bin[MX];
   scanf("%d", &dec);
    z = 7;
    bin[8] = '\0';
 while (z >= 0) {
    x = pow(2,z);
  if (dec >= x) {
    bin[z] = '1';
    dec -= x;
  } else
      bin[z] = '0';
  --z;
 } e = 0;
   d = 7;
 while (e < d) {
   aux = bin[e];
   bin[e] = bin[d];
   bin[d] = aux;
  ++e;
  --d;
 }
  printf("%s\n", bin);
 return 0;
}
