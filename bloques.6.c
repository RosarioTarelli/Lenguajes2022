#include <stdio.h>
#include <stdio_ext.h>

float calcular(float valor1, float valor2);

int main(void) {
  float valor1;
  float valor2;
  int rep=0;
  while(rep!=1){
    __fpurge(stdin);
    printf("Bienvendio a la calculadora\n");
    printf("Ingrese el primer valor\n");
    __fpurge(stdin);
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor\n");
    __fpurge(stdin);
    scanf("%f", &valor2);
    printf("Su resultado es de: %.2f\n",calcular(valor1,valor2));
    printf("Desea usar la calculadora de vuelta?\n-> cualquier número sí\n-> 1 para no \n");
    scanf("%d",&rep);
  }
}

float calcular(float valor1, float valor2){
  float calculo;
  char operacion;
  printf("Ingrese el signo de la operacion que quiere efectuar\n");
  __fpurge(stdin);
  scanf("%c", &operacion);
    switch(operacion){
      case '+': calculo= valor1 + valor2;
        break;
      case '-': calculo= valor1 - valor2;
        break;
      case '/': calculo= valor1 / valor2;
        break;
      case '*': calculo =valor1 * valor2;
        break;
      default:printf("tu signo no es +, -, / ni *");
        break;
    }
  return calculo;
}