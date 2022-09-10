/********************************************************************************
*   File:    U3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera.
Utilize a fórmula VOLUME +- (4 / 3) * 3.14159 * (RAIO j 3).*/

int main()
{
    
    float R,VOLUME;
    float pi = 3.14159;
    
    printf("Digite o RAIO:");
    scanf("%f", &R);
    VOLUME = (4/3)*pi*(pow(R,3));
    printf("O volume eh:%f", VOLUME);
    
    
    return 0;
}
    