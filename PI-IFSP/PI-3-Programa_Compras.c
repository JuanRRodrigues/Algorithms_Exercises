/*****************************************
*   File:    PI-3-Programa_Compras.c      *
*   Author:  Juan R. Rodrigues            *                                     
*   Teacher: Jose Oscar Machado Alexandre *
******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int A=42;int B=28;int C=36;int D=11;
    int V;
    
    int Numero, resposta, S, Pag1;
    
    
    
    Inicio: 
    system("clear");
    printf("Bem vindo ao Programa de Compras");
    printf("\n\nEnter para continuar...");
    getchar();
    system("clear");
    
    Menu:
    system("clear");
    printf("Escolha a Funcao desejada");
    printf("\n(0)-Cancelar Compra");
    printf("\n(1)-Produto A = %i", A);
    printf("\n(2)-Produto B = %i", B);
    printf("\n(3)-Produto C = %i", C);
    printf("\n(4)-produto D = %i", D);
    printf("\n(5)-Consultar Descontos");
    printf("\nDigite a opção desejada:");
    scanf("%d", &Numero);
    
    switch(Numero)
    {
        case 0:
        goto Fim;
    case 1:
     system("clear");
     printf("\t\t>>>>>Carrinho de Compras<<<<<");
     printf("\nDeseja adicionar outro produto");
     printf("\n(0)-Cancelar Compra");
     printf("\n(1)-Produto B = %i", B);
     printf("\n(2)-Produto C = %i", C);
     printf("\n(3)-Produto D = %i", D);
     printf("\nDigite a opção desejada:");
     S = getchar();
     scanf("%i", &S);
      if (S == 0){
          
          goto Fim;
          
      }else{
          if (S == 1){
              printf("1-Produto B Adicionado");
              V = (A+B)-((A+B)*20/100);
              printf("\n Valor:%i + %i + desconto = %i", A,B,V);
              system("clear");
              goto Pagamento;
          }else{
              if (S == 2){
                  printf("\n1-Produto C Adicionado\n");
                  V = A+C;
                  printf("%i + %i = %i", A,C,V);
                  system("clear");
              goto Pagamento;
              }else{
                  if (S == 3){
                      ADG:
                      printf("\n1-Produto D Adicionado\n");
                      V = D+A;
                      printf("%i + %i = %i", A,D,V);
                      system("clear");
                      goto Pagamento;
                  }
                  
              }
              
              
              
          }
          
      }
    
    case 2:
    system("clear");
    printf("\t\t>>>>>Carrinho de Compras<<<<<");
     printf("\nDeseja adicionar outro produto");
     printf("\n(0)-Cancelar Compra");
     printf("\n(1)-Produto A = %i", A);
     printf("\n(2)-Produto C = %i", C);
     printf("\n(3)-Produto D = %i", D);
     printf("\nDigite a opção desejada:");
     S = getchar();
     scanf("%i", &S);
     if (S == 0){
         
         goto Fim;
     }else{
         if (S == 1){
             system("clear");
             printf("1-Produto A Adicionado");
              V = (A+B)-((A+B)*20/100);
              printf("\n Valor:%i + %i + desconto = %i", B,A,V);
              system("clear");
              goto Pagamento;
             
         }else{
             if (S == 2){
                 system("clear");
                 printf("1-Produto C Adicionado");
                 BCG:
                 V = (B+C)-((C+B)*10/100);
                 printf("\n Valor:%i + %i + desconto = %i", C,B,V);
                 system("clear");
                 goto Pagamento;
             }else{
                 BDG:
                 if (S == 3){
                     V = D+B;
                     printf("\n Valor:%i + %i + desconto = %i", D,B,V);
                     system("clear");
                     goto Pagamento;
                     
                     
                 }
             }
             
         }
     }
         
         
    case 3:
    system("clear");
    printf("\t\t>>>>>Carrinho de Compras<<<<<");
     printf("\nDeseja adicionar outro produto");
     printf("\n(0)-Cancelar Compra");
     printf("\n(1)-Produto A = %i", A);
     printf("\n(2)-Produto B = %i", C);
     printf("\n(3)-Produto D = %i", D);
     printf("\nDigite a opção desejada:");
     S = getchar();
     scanf("%i", &S);
     if (S == 0){
         
         goto Fim;
     }else{
         if( S == 1){
             system("clear");
             printf("\n1-Produto A Adicionado\n");
                  V = A+C;
                  printf("%i + %i = %i", A,C,V);
                  system("clear");
         }else{
             if ( S == 2){
                 system("clear");
                 printf("1-Produto B Adicionado");
                 goto BCG;
             }else{
                 if ( S == 3){
                     system("clear");
                     printf("1-Produto D Adicionado");
                     DCG:
                     V = D+C/2;
                     printf("%i + %i = %i + desconto", D,C,V);
                     getchar();
                     goto Pagamento;
                 }
             }
         }
         
         
     }
     
    
    case 4:
    system("clear");
    printf("\t\t>>>>>Carrinho de Compras<<<<<");
     printf("\nDeseja adicionar outro produto");
     printf("\n(0)-Cancelar Compra");
     printf("\n(1)-Produto A = %i", A);
     printf("\n(2)-Produto B = %i", C);
     printf("\n(3)-Produto D = %i", D);
     printf("\nDigite a opção desejada:");
     S = getchar();
     scanf("%i", &S);
     if (S == 0){
         goto Fim;
     }else{
         if ( S == 1){
             system("clear");
             printf("1-Produto A Adicionado");
             goto ADG;
         }else{
             
             if ( S == 2){
                 system("clear");
                 printf("1-Produto B Adicionado");
                 goto BDG;
             }else{
                 
                 if(S == 3){
                     system("clear");
                     printf("1-Produto C Adicionado");
                     goto DCG;
                 }else{
                     
                     
                         
                     }
                 }
          
             }
         }
        case 5:
        system("clear");
        printf("\n\t\t>>>>>Descontos<<<<<");
        printf("\nProduto A + B = 20 porcento de desconto.");
        printf("\nProduto B + C = 10 porcento de desconto. ");
        printf("\nProduto C + D = 50 porcento de desconto.");
        printf("\nDigite 0 para Retornar:");
        S = getchar();
        scanf("%i", &S);
        goto Menu;
     }
    
    
    
    Pagamento:
    
    system("clear");
    printf("\n\t\t>>>>>Metodos de Pagamento<<<<<");
    printf("\nEscolha a Funcao desejada");
    printf("\n0 - Cancelar Compra");
    printf("\n1 - Cartão de crédito: Acréscimo de 5 porcento");
    printf("\n2 - Cartão de débito: sem alterações no valor");
    printf("\n3 - Pix: Desconto de 8 porcento");
    printf("\nDigite a opção desejada:");
    scanf("%d", &Pag1);
    
    switch(Pag1)
    {
     case 0:
    
     case 1: //cartão
       system("clear");
       printf("...Processando...");
       printf("\nAcrescimo cobrado de 5 porcento");
       printf("\nPagamento de %i reais realizado", V+(V*5)/100);
       goto Fim;
     case 2: // Débito
       system("clear");
       printf("...Processando...");
       printf("\nPagamento de %i reais realizado", V);
     case 3:// Pix
       system("clear");
       printf("...Processando...");
       printf("\nDesconto aplicado de 8 porcento");
       printf("\nPagamento de %i reais realizado", V-(V*8)/100);
    
    }
    
    
       
     
         
       
    Fim:
    
    
    return 0;
}


