/********************************************************************************
*   File:    H3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>

/* Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, utilizando a fórmula VOLUME+-- COMPRIMENTO* LARGURA* ALTURA. */

int main()
{
    
    // início
    
    int VOLUME, COMPRIMENTO, LARGURA, ALTURA;
    printf("Calcule o volume de uma caixa retangular");
    getchar();
    
    printf("insira o altura:");
    scanf("%i", &LARGURA);
    printf("insira o comprimento:");
    scanf("%i", &COMPRIMENTO);
    printf("insira o largura:");
    scanf("%i", &ALTURA);
    
    VOLUME = COMPRIMENTO*LARGURA*ALTURA;
    
    printf("O volume é:%i", VOLUME);
    
    return 0;
    
    
    
}