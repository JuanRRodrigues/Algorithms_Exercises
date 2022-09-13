/********************************************************************************
*   File:    G4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/* Fazer a leitura de quatro valores numéricos inteiros representados pelas variáveis A, B, C e D.
Apresentar apenas os valores que sejam divisíveis por 2 e 3. 
*/

 int main()
 {
  int A, B, C, D, RA, RB, RC, RD;
  printf("Digite os Numeros\n");
  printf("A:");
  scanf("%i", &A);
  printf("B:");
  scanf("%i", &B);
  printf("C:");
  scanf("%i", &C);
  printf("D:");
  scanf("%i", &D);
  
  
  
  RA = (A%2)+(A%3);
  RB = (B%2)+(B%3);
  RC = (C%2)+(C%3);
  RD = (D%2)+(D%3);
  if(RA == 0){
    printf("A:%i/", A);
  }
if(RB == 0){
    printf("B:%i/", B);
  }
if(RC == 0){
    printf("C:%i/", C);
  }
 if(RD == 0){
    printf("D:%i/", D);
  } 
     return 0;
 }