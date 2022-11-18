#include <stdio.h>

float promedio (float vect[]);
int aprobado (float vect[]);
int desaprobado (float vect[]);

int main(void) {
  float vect[20];
  printf("Ingrese las notas de los 20 alumnos\n");
  for (int i=0;i<20;i++) {
    printf("Nota alumno %d: ",i+1);
    scanf("%f", &vect[i]);
  }
  printf("El promedio es: %.2f\n", promedio (vect));
  printf("La cantidad de aprobados es: %d\n", aprobado(vect));
  printf("La cantidad de desaprobados es: %d\n", desaprobado(vect));
}

float promedio (float vect[]){
  float not=0;
  float prom;
  for (int i=0;i<20;i++){
    not=vect[i]+not;
  }
  prom=not/20;
  return prom;
}

int aprobado (float vect[]){
  int cantaprob=0;
  for (int i=0;i<20;i++){
    //printf("%f ",vect[i]);
    if (vect[i]>6.99) cantaprob=cantaprob+1;
   }
  return cantaprob;
  }

int desaprobado (float vect[]){
  int cantdesaprob=0;
  for (int i=0;i<20;i++){
    //printf("%f ",vect[i]);
    if (vect[i]<6.99) cantdesaprob=cantdesaprob+1;
   }
  return cantdesaprob;
}
