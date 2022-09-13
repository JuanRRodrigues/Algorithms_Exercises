/********************************************************************************
*   File:    F4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/* Ler três valores inteiros representados pelas variáveis A, B e C e apresentar os valores lidos
dispostos em ordem crescente. Dica: utilizar tomada de decisão sequencial e as ideias trabalhadas
nos exercícios "g" (propriedade distributiva) e "f' (troca de valores) do capítulo 3.  */

 int main()
 {
    int A, B, C, F;
    printf("Digite o Número\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);  
    
    if (A > B){
        F = B;
        B = A;
        A = F;
    }
    if (B > C){
        F = C;
        C = B;
        B = F;
    }
    if (A > B){
        F = B;
        B = A;
        A = F; 
    }
        printf("%d, %d, %d", A, B, C);
        
    

     return 0;
 }