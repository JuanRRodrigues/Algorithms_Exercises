/********************************************************************************
*   File:    Y3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Construir um programa que leia um valor numérico inteiro e apresente como resultado os seus
valores sucessor e antecessor.*/

int main()
{
    
    int A;
    printf("Digite o numero:");
    scanf("%i", &A);
    A = A+1;
    printf("Seu sucessor eh:%i", A);
     A = A-2;
    printf("\nSeu antecessorsucessor eh:%i", A);
    return 0;
}
    