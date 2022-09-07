/********************************************************************************
*   File:    I3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>

/* Efetuar a leitura de um valor numérico inteiro e apresentar o resultado do valor lido elevado ao quadrado.  */



int main()
{
    
    int A, R;
    printf("Digite um número inteiro para ser elevado ao quadrado:");
    scanf("%i", &A);
    R=pow(A,2);
    
    printf("O resultado é:%i", R);
    
    return 0;



 
       
}



















