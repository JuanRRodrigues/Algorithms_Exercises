/********************************************************************************
*   File:    L3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>

/* Elaborar um programa que apresente o valor da conversão em dólar (US$) de um valor lido em real
(R$). O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível com o usuário. */

int main()
{
    
    float D,R;
    printf("insira o valor em real:");
    scanf("%f", &R);
    D = R/4;
    printf("Dolar(es):%f", D);

    return 0;
}
    
