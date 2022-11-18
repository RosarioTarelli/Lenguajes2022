#include <stdio.h>
#define LIM 20
#define LIM_FGETS 21

void contador_vocales (char palabra[LIM]);

int main(void) {
  char palabra[LIM];
  printf("Bienvenido al contador de vocales.\n");
  printf("Ingrese 20 caracteres para formar una frase: ");
  fgets(palabra, LIM_FGETS, stdin);
  printf("Los 20 caracteres ingresados son: %s \n", palabra);
  contador_vocales (palabra);
  return 0;
}

void contador_vocales (char palabra[LIM]){
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  int A = 0, E = 0, I = 0, O = 0, U = 0;
  for (int j = 0; j < LIM; j++){
    if (palabra[j] == 'a') a++;
    if (palabra[j] == 'A') A++;
    if (palabra[j] == 'e') e++;
    if (palabra[j] == 'E') E++;
    if (palabra[j] == 'i') i++;
    if (palabra[j] == 'I') I++;
    if (palabra[j] == 'o') o++;
    if (palabra[j] == 'O') O++;
    if (palabra[j] == 'u') u++;
    if (palabra[j] == 'U') U++;
  }
  printf("Dentro de estos caracteres las vocales son:\n");
  printf("a -> %d\n", a);
  printf("A -> %d\n", A);
  printf("e -> %d\n", e);
  printf("E -> %d\n", E);
  printf("i -> %d\n", i);
  printf("I -> %d\n", I);
  printf("o -> %d\n", o);
  printf("O -> %d\n", O);
  printf("u -> %d\n", u);