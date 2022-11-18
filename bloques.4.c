#include <stdio.h>

int multneg=1;
int sumpos=0;
int actual;
int cant;

int main(void) {
  printf("Ingrese 10 numeros para calcular la suma de los positivos y el producto de los negativos\n");
  for(cant=0;cant<10;cant++){
    scanf("%d",&actual);
    if (actual>0) sumpos=actual+sumpos;
    else multneg=actual*multneg;
    }
      printf("La suma es igual a %d\n", sumpos);
      printf("El producto es igual a %d\n", multneg);
  }