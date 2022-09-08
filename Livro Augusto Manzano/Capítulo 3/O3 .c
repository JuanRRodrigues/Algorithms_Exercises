/********************************************************************************
*   File:    O3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: LÃ³gica para desenvolvimento de programaÃ§Ã£o de computadores *
*********************************************************************************/
/* Elaborar um programa que leia quatro valores numéricos inteiros (variáveis A, B, C e D). Ao final
o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro valor,
e o resultado da soma (variável S) do segundo com o quarto valor.  */

#include <stdio.h>
#include <math.h>

int main()
{
    
    int A, B, C, D, P, S; // lER A,B,C
    
    printf("insira A:");
    scanf("%i", &A);
    printf("insira B:");
    scanf("%i", &B);
    printf("insira C:");
    scanf("%i", &C);
    printf("insira D:");
    scanf("%i", &D);
    P = A*C;
    S = B+D;
    printf("Produto de A e C:%i", P);
    printf("\nSoma de B e D:%i", S);
    
    return 0;
}
    
    

