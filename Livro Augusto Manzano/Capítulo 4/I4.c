/********************************************************************************
*   File:    I4.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

/* Ler cinco valores numéricos inteiros (variáveis A, B, C, D e E), identificar e apresentar o maior e o
menor valores informados. Não execute a ordenação dos valores como no exercício "f'
*/

 int main()
 {
  int A, B, C, D, E, Maior, Menor;
  printf("Digite os Numeros\n");
  printf("A:");
  scanf("%i", &A);
  printf("B:");
  scanf("%i", &B);
  printf("C:");
  scanf("%i", &C);
  printf("D:");
  scanf("%i", &D);
  printf("E:");
  scanf("%i", &E);

  //Maior
  if(A > B && A > C && A > D && A > E){
    Maior = A;
  }
  if(B > A && B > C && B > D && B > E){
    Maior = B;
  }
    if(C > A && C > B && C > D && C > E){
    Maior = C;
  }
  if(D > A && D > B && D > C && D > E){
    Maior = D;
  } 
  if(E > A && E > B && E > C && E > D){
    Maior = E;
    
  }
  // MENOR
  
  if(A < B && A < C && A < D && A < E){
    Menor = A;
  }
  if(B < A && B < C && B < D && B < E){
    Menor = B;
  }
    if(C < A && C < B && C < D && C < E){
    Menor = C;
  }
  if(D < A && D < B && D < C && D < E){
    Menor = D;
  } 
  if(E < A && E < B && E < C && E < D){
    Menor = E;
    
  }
   
  printf("MAIOR:%i", Maior);
  printf("\nMAIOR:%i", Menor);

     return 0;
 }