/********************************************************************************
*   File:    P3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: LÃ³gica para desenvolvimento de programaÃ§Ã£o de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>

/* Elaborar um programa que leia o valor numérico correspondente ao salário mensal (variável SM)
de um trabalhador e também faça a leitura do valor do percentual de reajuste (variável PR) a ser
atribuído. Apresentar o valor do novo salário (variável NS).  */

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
    
