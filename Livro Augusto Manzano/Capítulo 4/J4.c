/********************************************************************************
*   File:    J4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/* Ler um valor numérico inteiro e apresentar uma mensagem informando se o valor fornecido é par
ou ímpar. . 
*/

 int main()
 {
     int  A;
     
     printf("Digite um Numero inteiro: ");
     scanf("%i", &A);
     A = A%2;

     if(A == 0){
        printf("O numero é par");
     }else{
        printf("O numero é impar");
     }
     return 0;
 }