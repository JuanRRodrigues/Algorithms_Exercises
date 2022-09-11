/********************************************************************************
*   File:    D3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um
automóvel que faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo
gasto (variável TEMPO) e a velocidade média (variável VELOCIDADE) durante a viagem. Desta
forma, será possível obter a distância percorrida com a fórmula DISTÂNCIA +-- TEMPO *
VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível
utilizada na viagem com a fórmula LITROS_USADOS +-- DISTÂNCIA/ 12. O programa deve
apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
quantidade de litros utilizada na viagem. */

int main()
 {
     int T, V, L, D;      // T = Tempo, V = Velocidade Média, D = Distância, L = Litros Gastos 
     
     printf("Cálcule a quantidade de combustível gasta em uma viagem\n");             // formulas d = t * v, l = d/12   
     getchar();
     printf("Digite o tempo e velocidade:\n");
     scanf("%i %i",&T ,&V );
     
     D = T * V;
     L = D/12;
     
     printf("\nDistancia: %i", D);
     printf("\nTempo: %i", T);                   // escrever l,v,t,d
     printf("\nVelocidade: %i", V);
     printf("\nLitros Gastos: %i", L);
     
     
     return 0;
 }