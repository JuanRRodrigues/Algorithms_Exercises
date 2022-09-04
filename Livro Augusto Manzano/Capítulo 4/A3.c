/********************************************************************************
*   File:    A3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <locale.h>
int main() 
{
    /*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula
de conversão é F = (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius. */

       // Ler Variaveis Entrada:Celsisu (c)   Saída: Fahrenheit (f) //
       
       int c, f;
       
       printf("Converta uma temperatura em celsius graus para fahrenheit");
       getchar();
       
       printf("Digite a temperatura em graus celsius: ");
       scanf("%i", &c);
       f = (9*c+160)/5;
       printf("A temperatura em fahrenheit é: %i", f);
       

    return 0;
}

