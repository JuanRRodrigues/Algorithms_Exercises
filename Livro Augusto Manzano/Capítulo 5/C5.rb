/********************************************************************************
*   File:    C4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programacao de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/* c) Realizar a leitura dos valores de quatro notas escolares bimestrais de um aluno representadas
pelas variaveis N1, N2, N3 e N4. Calcular a media aritmetica (variavel MD) desse aluno
e apresentar a mensagem "Aprovado" se a media obtida for maior ou igual a 5; caso contrário,
apresentar a mensagem "Reprovado". Informar tambem, apos a apresentação das mensagens, o
valor da media obtida pelo aluno . */

int main()
{
    float N1, N2, N3, N4, MD;
    printf("Digite as notas:\n ");
     printf("Nota 1: ");
      scanf("%f", &N1);
     printf(" Nota 2: ");
      scanf("%f", &N2);
     printf(" Nota 3: ");
      scanf("%f", &N3);
     printf(" Nota 4: ");
      scanf("%f", &N4);
    
     MD = (N1+N2+N3+N4)/4;

     if (MD >= 5){
        printf("Nota Final: %0.1f = Aprovado", MD);
     }else{
        printf("Nota Final: %0.1f = Reprovado", MD);
     }
    
    
    return 0;
}