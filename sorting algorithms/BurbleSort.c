/************************************
*   File:   BurbleSort.c            *
*   Author:  Juan R. Rodrigues      *                                     
************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

void BubleSort (int vetor[], int n)
{  
	
    int contador, aux, i;
		
		for (contador = 1; contador < TAM; contador++) {
			for (i = 0; i < TAM - 1; i++){
			  if (vetor[i] > vetor [i + 1]){
			  	aux = vetor[i];
		      	vetor[i] = vetor[i + 1];
		      	vetor[i + 1] = aux;
			  }
			}
		}
}


int main()
{
  int  i;
  int vetor[5]={36,27,29,58,2};
  printf("|Ordenação original: ");
  for (i = 0; i < TAM; i++)
      printf("   [%d] ", vetor[i]);
      printf("\n\n");

  BubleSort (vetor, TAM);

    printf("|Ordenação Crescente : ");
    for(i = 0; i < TAM; i++)
       printf(" [%d] ", vetor[i]);
}