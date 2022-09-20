/*********************************************************************************
*   File:    A5.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************

Elaborar um programa que apresente como resultado os quadrados dos números inteiros
existentes na faixa de valores de 15 a 200. 
*/

#include <stdio.h>
#include <math.h>
int main()
{

int count, resposta;


for (count = 0; resposta <= 200; count++){
    resposta = pow(count,2);
    if(resposta >= 15 && resposta <= 200){
        printf("%d^2 = %d\n", count, resposta);
    }
}

   return 0;
}

