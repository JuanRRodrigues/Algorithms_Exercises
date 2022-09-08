/********************************************************************************
*   File:    P3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>

/* Elaborar um programa que leia o valor num�rico correspondente ao sal�rio mensal (vari�vel SM)
de um trabalhador e tamb�m fa�a a leitura do valor do percentual de reajuste (vari�vel PR) a ser
atribu�do. Apresentar o valor do novo sal�rio (vari�vel NS).  */

int main()
{
    
    float SM, PR, NS; 
    
    
    printf("Insira Salario Mensal:");
    scanf("%f", &SM);
    printf("Insira percentual de reajsute:");
    scanf("%f", &PR);
    PR = PR/100;
    NS = SM+(SM*PR);
    
    printf("Novo Salario:%f", NS);
    
    return 0;
}
    
