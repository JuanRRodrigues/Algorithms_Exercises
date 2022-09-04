/********************************************************************************
*   File:    C3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/* Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula VOLUME +--
3.14159 *Ri 2 * ALTURA. */

int main()
{
    
    int VOLUME, R, ALTURA;
    printf("Calcule e apresente o valor do volume de uma lata de óleo");
    getchar();
    
    printf("\nDigite o Raio e a Altura:\n");        // Raio = R
    scanf("%i %i", &R, &ALTURA);
    VOLUME =  3.14159*pow(R, 2)*ALTURA;
    
    printf("O volume é:%i", VOLUME);
    
    
    return 0;
}