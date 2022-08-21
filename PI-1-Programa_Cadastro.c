/******************************************************************************

1.(GE/GR 1-1) Elabore um programa que pede seu nome, CEP e telefone. Ele deve imprimir 
seu primeiro nome na primeira linha, seu CEP na segunda, e o Telefone na Terceira. 

2.(GE/GR 1-2) Elabore um programa que mostre o seguinte menu na tela de cadastro de clientes.  

0- Fim; 

1- Incluir; 

2- Alterar; 

3- Excluir; 

4- Consultar; 
 
3- (GE/GR 1-3) Elabore um programa que que leia dados em seguida tenha a opção de altera-los ou deleta-los. 

4- (GE/GR 1-4) Elabore um programa que leia 3 variáveis, em seguida tenha a opção de consultar cada uma individualmente. 

5 - (Desafio de Nível 1) - Fazer um Programa que tenha todas as funções apresentadas nos exercícios 1, 2, 3 e 4.  

 (GE/GR 1/5) 

5.1 - Extra - Desenvolver 
um programa de cadastro igual o de cima, entretanto,
com a função de registrar 10 pessoas e criar um banco de dados temporario. 

OBS: O programa de cadastro 
foi alterado por ser muito simples. 
Foi adicionado funções mais complexas usando Vetores, Alem de ser usando um melhor
modo de busca. Todas essas novas funções estão no arquivo C 1-5. 

 // Juan Ribeiro Rodrigues //

*******************************************************************************/
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
    
    
 
    
    







