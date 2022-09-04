/********************************************************************************
*   File:    B3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <locale.h>

/* Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula
de conversão é C +-- ((F - 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius. */

int main()  
{
    int Celsius, Fahrenheit; //inicio e leitura de variaveis
    printf("Converta uma temperatura de fahrenheit para celsius");
    getchar();
    
    printf("Digite a temperatura em fahrenheit: ");  // atribuição
    scanf("%i", &Fahrenheit);
    Celsius = ((Fahrenheit-32)*5)/9;
    
    printf("A conversão para celsius é: %i", Celsius);
    
    
    return 0;
}