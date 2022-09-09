/********************************************************************************
*   File:    S3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Elaborar um programa que leia dois valores numéricos reais desconhecidos representados pelas
variáveis A e B. Calcular e apresentar os resultados das quatro operações aritméticas básicas.*/

int main()
{
    
    float A, B, Soma, Div, Sub, Mult;
    
    //srand(time(NULL));
    A = rand();
    B = rand();
    printf("O valor de A eh:%f", A);
    printf("\nO valor de B eh:%f", B);
    printf("\n------------------------------");
    Soma = A+B;
    Sub = A-B;
    Mult = A*B;
    Div = A/B;
    printf("\nA soma eh:%f", Soma);
    printf("\nA Sub eh:%f", Sub);
    printf("\nA Div eh:%f", Div);
    printf("\nA Mult eh:%f", Mult);
    
    
    
    return 0;
}
    