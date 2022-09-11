/********************************************************************************
*   File:    A4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

/* a) Efetuar a leitura de dois valores numéricos inteiros representados pelas variáveis A e B e
apresentar o resultado da diferença do maior valor pelo menor valor. */

#include <stdio.h>
#include <locale.h>
int main() 
{
// Ler Valores
  int A, B, R;
  printf("Digite o primeiro numero: ");
   scanf("%d", &A);
  printf("Digite o segundo numero: ");
   scanf("%d", &B);

// Decisão
  if (A > B){
    R=A-B;

  }else{
    R=B-A;
  }
// Escrever Resultado
      printf("O resultado eh: %i", R);
       

    return 0;
}