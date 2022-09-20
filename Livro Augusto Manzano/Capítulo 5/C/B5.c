/*********************************************************************************
*   File:    B5.c                                                              *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************

Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional. */
 
#include <stdio.h>

 int main(){

  int numero, produto, count;

  printf("Tabuada Tradicional de Multiplicação\n");
   printf("Informe um numero inteiro: "); 
    scanf("%d", &numero);


for(count=1; count <= 10;count++){
   produto  = count * numero;
   printf("\n%dx%d = %d", count, numero, produto);
   }
}


