/********************************************************************************
*   File:    E4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/* e) Efetuar a leitura de três valores numéricos (representados pelas variáveis A, B e C) e processar o
cálculo da equação completa de segundo grau, utilizando a fórmula de Bhaskara (considerar para
a solução do problema todas as possíveis condições para delta: delta < O - não há solução real,
delta> O - há duas soluções reais e diferentes e delta= O - há apenas uma solução real). Lembre-
-se de que é completa a equação de segundo grau que possui todos os coeficientes A, B e C
diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas
para delta.  */

 int main()
 {
    int A, B, C, D;
    float X1, X2;
    printf("Digite o numero:\n");
    printf("Valor A: ");
    scanf("%d", &A);
    printf("Valor B: ");
    scanf("%d", &B);
    printf("Valor C: ");
    scanf("%d", &C);

    D=((B*B)-(4*(A*C)));
    printf("Delta: %i", D);

    D = sqrt(D);
    printf("\nRaiz: %i", D);
    if(D > 0){
     X1 = (-B + D)/(2*A);
     X2 = (-B - D)/(2*A);
     printf("\nS = {%f,%f} ", X1, X2);
    }else{
        if(D = 0){
            X1 = (-B + D)/(2*A);
            printf("S = {%f,%f} ", X1, X1);
        }else{
            printf("Não há solução");
        }
    }

  
     return 0;
 }