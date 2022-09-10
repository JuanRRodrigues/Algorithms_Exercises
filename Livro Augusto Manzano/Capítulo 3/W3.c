/********************************************************************************
*   File:    W3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Elaborar um programa que leia uma medida em pés e apresente o seu valor convertido em
metros, lembrando que um pé mede 0,3048 metro, ou seja, um pé é igual a 30,48 centímetros. */

int main()
{
    
    float P;
    
    printf("Digite o varlo em pes:");
    scanf("%f", &P);
    P = (P*30.48)/100;
    printf("O medida eh:%f metros", P);
    
    
    return 0;
}
    