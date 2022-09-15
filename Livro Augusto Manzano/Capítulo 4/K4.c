/********************************************************************************
*   File:    K4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/*  
Efetuar a leitura de um valor numérico inteiro que esteja na faixa de valores de 1 até 9. O
programa deve apresentar a mensagem "O valor está na faixa permitida", caso o valor informado
esteja entre 1 e 9. Se o valor estiver fora da faixa, o programa deve apresentar a mensagem "O
valor está fora da faixa permitida". 
*/

 int main()
 {
     int N;
     
     printf("Digite um Numero de 1 até 9: ");
     scanf("%i", &N);

     if(N <= 9 && N >= 1){
        printf("O valor está na faixa permitida");
     }else{
        printf("O valor está fora da faixa permitida");
     }
     return 0;
 }