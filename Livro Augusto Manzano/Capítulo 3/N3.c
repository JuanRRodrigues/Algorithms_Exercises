/********************************************************************************
*   File:    N3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>

/* Construir um programa que leia tr�s valores num�ricos inteiros (representados pelas vari�veis A,
B e C) e apresente como resultado final o valor do quadrado da soma dos tr�s valores lidos.  */

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
    

