/********************************************************************************
*   File:    Q3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>

/* Elaborar um programa que calcule e apresente o valor do resultado da área de 
uma circunferência (variável A). O programa deve solicitar a entrada do valor do raio 
da circunferência (variável R). Para a execução deste problema utilize a fórmula A+- 3.14159265* R j 2.  */

int main()
{
    
    float R;    // A: Saida R:Entrada
    double pi = 3.14159265;
    double A;
    printf("Insira o Raio:");
    scanf("%f", &R);
    A = pi*(pow(R,2));
    
    printf("Area da Circuferencia:%f", A);
    
    return 0;
}
    
