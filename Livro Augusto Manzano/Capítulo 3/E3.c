/********************************************************************************
*   File:    E3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/* Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a
fórmula PRESTAÇÃO = VALOR+ (VALOR* (TAXA/100) * TEMPO) */

 int main()
 {
     /*Váriaveis V = Valor, P = prestação, T = TEMPO, Taxa*/
     
     int V, P, T;
     float Taxa;
     
     printf("Calcule o prestação de um bem em atraso");
     getchar();
     
     printf("Digite o valor, Tempo e taxa\n");
     scanf("%i", &V);
     scanf("%i", &T);
     scanf("%f", &Taxa);
     P=V+(V*(Taxa/100)*T);
     
     printf("A prestação foi de: %i", P);
     
     
     return 0;
 }