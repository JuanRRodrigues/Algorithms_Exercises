/********************************************************************************
*   File:    N4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/*  
Efetuar a leitura de três valores inteiros desconhecidos representados pelas variáveis A, B e C.
Somar os valores fornecidos e apresentar o resultado somente se for maior ou igual a 100. ".  
*/

 int main()
 {
    int A, B, C, R;
    printf("Digite 3 valores\n");
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);

    R = A+B+C;

    if(R >= 100){
        printf("A soma dos valores eh: %i", R);
    }else{
        
    }

     
     return 0;
 }