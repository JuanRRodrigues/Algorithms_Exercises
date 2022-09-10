/********************************************************************************
*   File:    X3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Elaborar um programa que calcule uma raiz de base qualquer com índice qualquer.. */

int main()
{
    
    int B;
    float R;
    printf("Digite a base da raiz:");
    scanf("%i", &B);
    R = sqrt(B);
    printf("A raiz eh:%f", R);
    
    
    return 0;
}
    
