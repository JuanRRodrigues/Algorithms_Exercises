/********************************************************************************
*   File:    Z3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado
do quadrado da divisão do primeiro valor (variável A) em relação ao segundo valor (variável B) ..*/

int main()
{
    
    int A, B;
    printf("Digite o numero:");
    scanf("%i", &A);
    printf("Digite o numero:");
    scanf("%i", &B);
     A = pow((A/B),2);
    printf("\nO quadrado da diferença é:%i", A);
    return 0;
}
    