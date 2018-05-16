    /* Decimal-Binario */
// Este Programa Converte um Byte
// Octal em Binario no
// Formato String
#include <stdio.h>
#include <math.h>

#define MX 10

int main (void) {
  int z;
  int y;
  int x;
  int e;
  int d;
  int aux;

  char bin[MX];
  char byt[MX];

   scanf("%s", byt);

   int I = 0;
 while (I < 3) {
  if (I == 0)
    z = 1;
  else
    z = 2;
    x = byt[I];
   if (x >= 48 && x <= 57)
     x -= 48;
   if (x >= 65 && x <= 90)
     x -= 45 +10;
  while (z >= 0) {
    y = pow(2,z);
   if (x >= y) {
    if (I == 0)
      bin[z +(2*3)] = '1';
    else
    if (I == 1)
      bin[z+3] = '1';
    else
      bin[z] = '1';
    x -= y;
   }
   else {
    if (I == 0)
      bin[z +(2*3)] = '0';
    else
    if (I == 1)
      bin[z +(1*3)] = '0';
    else
      bin[z +(0*3)] = '0';
   } --z;
  } ++I;
 } bin[8] = '\0';
   e = 0;
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
