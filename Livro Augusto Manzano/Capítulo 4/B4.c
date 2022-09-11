/********************************************************************************
*   File:    B4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Logica para desenvolvimento de programacao de computadores *
*********************************************************************************/

#include <stdio.h>
#include <locale.h>

/* b) Efetuar a leitura de um valor numerico inteiro positivo ou negativo representado pela variavel N e
apresentar o valor lido como sendo positivo. Dica: se o valor lido for menor que zero, ele deve ser
multiplicado por -1. 
 */

int main()  
{
  // Ler
  int N;
  printf("digite um numero positivo ou negativo: ");
  scanf("%i", &N);

  // Decisão
  if(N < 0){
    N = N*(-1);
  }
  // Escrever
  printf("o Valor digitado eh: %i", N);

    return 0;
}