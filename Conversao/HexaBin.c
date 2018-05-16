		/* Hexadecimal-Binario */
// Este Programa Converte um Byte
// Hexadecimal em Binario em
// Formato String

#include <stdio.h>
#include <math.h>

#define MX 10

int main (void) {
  int z;
  int i;
  int x;
  int d;
  int e;

  int aux;
  int pot2;

  char bin[MX];
  char byt[MX];

   scanf("%s", byt);

    i = 0;
 while (i < 2) {
    z = 3;
    x = byt[i];
   if (x >= 48 && x <= 57)
     x -= 48;
   if (x >= 65 && x <= 90)
     x -= 45 +10;
  while (z >= 0) {
    pot2 = pow(2,z);
   if (x >= pot2) {
    if (i == 0)
      bin[z+4] = '1';
    else
      bin[z] = '1';
     x -= pot2;
   }
   else {
    if (i == 0)
      bin[z+4] = '0';
    else
      bin[z] = '0';
   } --z;
  } ++i;
 } e = 0;
   d = 7;
 while (e < d) {
   aux = bin[e];
   bin[e] = bin[d];
   bin[d] = aux;
  ++e;
  --d;
 } printf("%s\n", bin);
 return 0;
}
