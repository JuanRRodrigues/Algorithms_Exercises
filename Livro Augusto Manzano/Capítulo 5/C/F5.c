/*
**********************************************************************************
*   File:    D5.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Elaborar um programa que apresente o somatório dos valores pares existentes na faixa de 1 até 500. 
 */
 
#include <stdio.h>

int main(){
    
     int valor, resultado, resto;
     printf("Soma dos valores pares existentes na faixa de 1 até 500");

     resultado = 0;

for(valor=0; valor <=500; valor++){
    resto = valor%2;
    if(resto == 0){
        resultado = valor + resultado;
    }
    
}
    
printf("\nSoma: %d", resultado);
    
}
