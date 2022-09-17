/********************************************************************************
*   File:    D4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/*d) Ler os valores de quatro notas escolares bimestrais de um aluno representadas pelas variáveis
N1, N2, N3 e N4. Calcular a média aritmética (variável MD1) desse aluno e apresentar a
mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve
solicitar a quinta nota (nota de exame, representada pela variável NE) do aluno e calcular uma
nova média aritmética (variável MD2) entre a nota de exame e a primeira média aritmética. Se o
valor da nova média for maior ou igual a cinco, apresentar a mensagem "Aprovado em exame";
caso contrário, apresentar a mensagem "Reprovado". Informar também, após a apresentação das
mensagens, o valor da média obtida pelo aluno.  */

int main()
{
    //Variáveis
    float N1, N2, N3, N4, NE, MD, MD2;
    printf("Digite as notas:\n ");
     printf("Nota 1: ");
      scanf("%f", &N1);
     printf(" Nota 2: ");
      scanf("%f", &N2);
     printf(" Nota 3: ");
      scanf("%f", &N3);
     printf(" Nota 4: ");
      scanf("%f", &N4);
    //Atribuição
     MD = (N1+N2+N3+N4)/4;

    // Decisão
     if (MD >= 7){
        printf("Nota Final: %0.1f = Aprovado", MD); // Escrever Resultado
     }else{
        printf("Nota Atual: %0.1f = Aluno em Exame\n", MD); // Escrever Resultado
        printf("Nota do exame: ");
         scanf("%f", &NE);
         MD2 = (MD+NE)/2;
         if(MD2 >= 5){
            printf("Nota Final: %0.1f = Aprovado", MD2); // Escrever Resultado
         }else{
            printf("Nota Final: %0.1f = Reprovado", MD2); // Escrever Resultado
         }
        
     }
    
     return 0;
 }