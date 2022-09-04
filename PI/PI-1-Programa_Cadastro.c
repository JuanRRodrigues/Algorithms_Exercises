
/*****************************************
*   File:    PI-1-Programa_Cadastro.c     *
*   Author:  Juan R. Rodrigues            *                                     
*   Teacher: Jose Oscar Machado Alexandre *
******************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 200
#include <stddef.h>

 char nome [SIZE][50];
 int telefone[SIZE];
 int CEP[SIZE];
 int Numero[SIZE];
 int op;
 void cadastro();
 int main(void){
 cadastro();
 
}
  
void cadastro()
{    
    static int linha;
    int numeropesquisa;
    int i,r;
    int del;
    del = 0;
    menu:
    system("clear");
    printf("|0-Fim\n");
	  printf("|1-Fazer Cadastro\n");
	  printf("|2-Alterar\n");
	  printf("|3-Excluir\n");
    printf("|4-Consultar\n");
    printf("                    Escolha: ");
    scanf ("%d", &op);
    switch (op)
    {
    case 0:
        goto FIM;
     case 1:
       do{
           Cadastro:
        printf("\n-------------\n");
        printf("\nDigite o Nome:");
        scanf("%s", &nome[linha]);
        printf("\nDigite o CPF:");
        scanf("%d", &CEP[linha]);
        printf("\nDigite o Telefone:");
        scanf("%d", &telefone[linha]);
        printf("\nDigite o Numero de Cadastro 1-10:");
        scanf("%d", &Numero[linha]);
        printf ("\nDigite 2 para continuar:");
        scanf("%d", &op);
         linha++;
        }while(op==2);
        goto menu;
       case 2:
          system("clear");
          printf("Altere os Dados\n");
          goto Cadastro;
       
       case 3: 
          system("clear");
          printf("\nDigite o numero de cadastro : ");
            scanf("%d", &numeropesquisa);
            for(i=0;i<SIZE;i){
                if(Numero[i]==numeropesquisa){
                  telefone[i]=del; 
                  CEP[i]=del;
                }
          printf("------------------------");
          printf("\nDados Excluidos / Digite o Numero do cadastro para confirmar:");
          printf("\n------------------------");
                
                
       case 4:
            do{
            printf("\nDigite o numero de cadastro : ");
            scanf("%d", &numeropesquisa);
            for(i=0;i<SIZE;i++){
                if(Numero[i]==numeropesquisa){
                 printf("\nNome:%s\nCEP:%d\nTelefone:%d\nNumero:%d", nome[i], telefone[i], CEP[i], Numero[i]); 
                 
            }

                    
                        }
           printf("\n--------------------------------------------------");
            printf("\n(0)- Continuar pesquisa");             
            printf("\n(2)- Voltar pro Menu");
            scanf("%d", &r);
            }while(r != 0);
    }       goto menu;
            
    } 
    FIM:
    return 0;
}
    
    
 
    
    







