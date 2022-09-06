/********************************************************************************
*   File:    I3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>


/*Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado
do quadrado da diferença do primeiro valor (variável A) em relação ao segundo valor (variável B) .*/

int main()
{
    
  int A, B, R, P;
  printf("Calcule o qaudrado da diferença de dois valores");
  getchar;
  
  printf("digite os dois valores:");
  scanf("%i %i", &A, &B);
  R=pow(A-B,2);
  
  printf("\n o quadrado da diferença é: ");
  printf("%i", R);
    
  return 0;
    
    
}
