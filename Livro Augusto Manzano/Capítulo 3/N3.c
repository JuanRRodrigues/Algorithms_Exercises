/********************************************************************************
*   File:    N3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: LÃ³gica para desenvolvimento de programaÃ§Ã£o de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>

/* Construir um programa que leia três valores numéricos inteiros (representados pelas variáveis A,
B e C) e apresente como resultado final o valor do quadrado da soma dos três valores lidos.  */

int main()
{
    
    int A, B, C;
    printf("insira A:");
    scanf("%i", &A);
    printf("insira B:");
    scanf("%i", &B);
    printf("insira C:");
    scanf("%i", &C);
    A = pow((A+B+C),2);
    printf("Soma dos qaudrados eh:%i", A);
    
    return 0;
}
    

