/********************************************************************************
*   File:    O4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/*  
Ler um número inteiro qualquer e multiplicá-lo por dois. Apresentar o resultado da multiplicação
somente se o resultado for maior que 30 . 
" 
*/

 int main()
 {
     int A, R;
     printf("Digite um numero inteiro que multiplicado por 2 seja > 30 : ");
     scanf("%i", &A);

     R = A*2;

     if(R > 30){
        printf("O resultado eh: %i", R);
     }
     return 0;
 }