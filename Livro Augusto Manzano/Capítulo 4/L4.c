/********************************************************************************
*   File:    L4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/*  
Fazer a leitura de um valor numérico inteiro qualquer e apresentá-lo caso não seja maior que 3.
Dica: para a solução deste problema utilize apenas o operador lógico de negação. . 
*/

 int main()
 {
  int Numero;
  printf("Digite um numero inteiro que não seja maior que 3: ");
  scanf("%i", &Numero);

  if(! (Numero <= 3)){
      printf("O numero é maior q 3");

  }else{
    printf("O numero é menor ou igual a 3");
  }
     
     return 0;
 }
