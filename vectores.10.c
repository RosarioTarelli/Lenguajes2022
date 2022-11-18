#include <stdio.h>
#define NUM 10
int lista[NUM];

int main (void){
  printf("Bienvenido al programa que ordena numeros de mayor a menor.\n");
   printf("Escriba los numeros que quiera ordenar: \n");
 int i,j,nums;
  for (int i=0;i<10;i++){
    scanf("%d",&lista[i]);
  }
 for (i=0 ; i<NUM; i++){
  nums=lista[i];
  j=i-1;
  while((lista[j]<nums)&&(j>=0)){
     lista[j+1]=lista[j];
     j--;
  }
  lista[j+1]=nums;
 }
  printf("El orden es el siguiente: \n");
 for(i=0;i<NUM;i++)printf("%d \t",lista[i]);
 return 0;
}
