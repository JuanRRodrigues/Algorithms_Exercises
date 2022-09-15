/********************************************************************************
*   File:    M4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <locale.h>

/*  
Efetuar a leitura de um nome (variável NOME) e o sexo (variável SEXO) de uma pessoa e
apresentar como saída uma das seguintes mensagens: "llmo. Sr.", caso seja informado o sexo
masculino (utilizar como valor o caractere "M"), ou "llma. Sra.", caso seja informado
o sexo feminino (utilizar como valor o caractere "F"). Após a mensagem de saudação,
apresentar o nome informado. O programa deve, após a entrada do sexo, verificar primeiramente
se o sexo fornecido é realmente válido, ou seja, se é igual a "M" ou a "F". Não sendo essa
condição verdadeira, o programa deve apresentar a mensagem "Sexo informado inválido".  
*/
char nome;
 int main()
 {
     char sexo;
     
     printf("Digite um Nome: ");
     scanf("%s", &nome);

     printf("Qual o Sexo (M Para Masculino & F para Feminino): ");
     scanf("%s", &sexo);


     if (strcmp("M", &sexo) == 0){
          printf(" llmo. Sr. %s  ", &nome );
         
     }else{
         if (strcmp("F", &sexo) == 0){
             printf(" llma. Sra. %s  ", &nome );
         }else{
             printf("Sexo Invalido");
         }
     }
         
     
     
     return 0;
 }
