/********************************************************************************
*   File:    F3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>


/* Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A
passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores após a efetivação do processamento da troca. */

int main()
{
    
    int a, b, c;      // A = B   B = A
    printf("converta as variaveis A E B\n");
    getchar();
    printf("Digite A: ");
    scanf("%i", &a);
    printf("Digite B: ");
    scanf("%i", &b);
    c = a;
    a = b;
    b = c;
    
    printf("O valor de A:%i ", a);
    printf("O valor de B:%i ", b);
    
    return 0;
    
    
}