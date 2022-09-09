/********************************************************************************
*   File:    T3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Construir um programa que calcule e apresente em metros por segundo o valor da velocidade de
um projétil que percorre uma distância em quilômetros a um espaço de tempo em minutos. Utilize
a fórmula VELOCIDADE+- (DISTÂNCIA* 1000) /(TEMPO* 60). */

int main()
{
    
    float D,T,V;
    
    printf("Digite a distancia em KM:");
    scanf("%f", &D);
    printf("Digite a tempo em minutos:");
    scanf("%f", &T);
    V = (D*1000)/(T*60);
    printf("A velocidade em m/s eh:%f", V);
    
    
    return 0;
}
    
    