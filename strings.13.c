#include <stdio.h>
#include <string.h>

int main(void) {
  char palabra[40];
  printf("Ingrese una palabra\n");
  scanf("%s",&palabra);
  printf("La palabra tiene %d caracteres",strlen(palabra));
  return 0;
}