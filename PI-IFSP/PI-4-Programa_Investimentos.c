/******************************************
*   File:    PI-4-Programa_Investimentos.c *
*   Author:  Juan R. Rodrigues             *                                     
*   Teacher: Jose Oscar Machado Alexandre  *
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


       float R,V,L,S, M;
       int Numero, resposta;
       
int main()
{
    
    
    Inicio: 
    system("clear");
    printf(">>Bem vindo ao Programa de Investimentos<<");
    printf("\nDigite quantos reais deseja investir:");
    scanf("%f", &R);
    getchar();
    system("clear");

    do{
    Menu:
    system("clear");
    printf("\t\t>>>>>Menu de Cambio<<<<<");
    printf("\nEscolha a Funcao desejada");
    printf("\n0-FIM");
    printf("\n1-Dolar");
    printf("\n2-Euro");
    printf("\n3-Renmibi");
    printf("\n4-Rubro-Russo");
    printf("\n5-Libra");
    printf("\nDigite a opçao desejada:");
    scanf("%d", &Numero);
    
    switch(Numero)
    {
        case 0:
        goto FIM;
        
        case 1:
        system("clear");
        printf("\t\t>>>>>Real para Dolar<<<<<");
        V = R/4;
        printf("\nReal:%f = Dolar:%f", R,R/4);
        goto LOOP;
        
        case 2:
        system("clear");
        printf("\t\t>>>>>Real para Euro<<<<<");
        V = R/6;
        printf("\nReal:%f = Euro:%f", R,R/6);
        goto LOOP;
        
        case 3:
        system("clear");
        printf("\t\t>>>>>Real para Renmibi<<<<<");
        V = R/0.5;
        printf("\nReais:%f = Renmibi:%f", R,R/0.5);
        goto LOOP;
        
        case 4:
        system("clear");
        printf("\t\t>>>>>Real para Rubro-Russo<<<<<");
        V = R/1.5;
        printf("\nReais:%f = Renmibi:%f", R,R/1.5);
        goto LOOP;
        
        case 5:
        system("clear");
        printf("\t\t>>>>>Real para Libra<<<<<");
        V = R/5.6;
        printf("\nReais:%f = Libra:%f", R,R/5.6);
        goto LOOP;
    }
    LOOP:
    printf("\n(1)-Trocar de Moeda ?\n");
    printf("(2)-Investir\n");
    printf("Digite a opçao desejada: ");
    scanf("%d", &resposta);
    }while(resposta != 2);
    
    printf("\t\t>>>>>Investimento<<<<<");
    switch(Numero)
    {
       case 1:
       M = V*pow(1+00.025,2); //2
       L = M - V;
       printf("\n Lucro de 2 Meses:%f", L);
       M = V*pow(1+00.025,6); //6
       L = M - V;
       printf("\n Lucro de 6 Meses:%f", L);
       M = V*pow(1+00.025,12); //12
       L = M - V;
       
       printf("\n Lucro de 12 Meses:%f", L);
       printf("\n\t\t\t\t>>>> Saldo Final: %f", M);
       goto FIM;
       
       case 2:
         M = V*pow(1+00.012,2); //2
         L = M - V;
         printf("\n Lucro de 2 Meses:%f", L);
         M = V*pow(1+00.012,6); //6
         L = M - V;
         printf("\n Lucro de 6 Meses:%f", L);
         M = V*pow(1+00.012,12); //12
         L = M - V;
         printf("\n Lucro de 12 Meses:%f", L);
         printf("\n\t\t\t\t>>>> Saldo Final: %f", M);
        goto FIM;
        
        case 3:
          M = V*pow(1+00.08,2); //2
          L = M - V;
          printf("\n Lucro de 2 Meses:%f", L);
          M = V*pow(1+00.08,6); //6
          L = M - V;
          printf("\n Lucro de 6 Meses:%f", L);
          M = V*pow(1+00.08,12); //12
          L = M - V;
          printf("\n Lucro de 12 Meses:%f", L);
          printf("\n\t\t\t\t>>>> Saldo Final: %f", M);
          goto FIM;
           case 4:
           
            M = V*pow(1+00.038,2); //2
            L = M - V;
            printf("\n Lucro de 2 Meses:%f", L);
            M = V*pow(1+00.038,6); //6
            L = M - V;
            printf("\n Lucro de 6 Meses:%f", L);
            M = V*pow(1+00.038,12); //12
            L = M - V;
            printf("\n Lucro de 12 Meses:%f", L);
            printf("\n\t\t\t\t>>>> Saldo Final: %f", M);
            goto FIM;
            
              case 5:
                M = V*pow(1+00.029,2); //2
                L = M - V;
                printf("\n Lucro de 2 Meses:%f", L);
                M = V*pow(1+00.029,6); //6
                L = M - V;
                printf("\n Lucro de 6 Meses:%f", L);
                M = V*pow(1+00.029,12); //12
                 L = M - V;
                 printf("\n Lucro de 12 Meses:%f", L);
                 printf("\n\t\t\t\t>>>> Saldo Final: %f", M);
            goto FIM;
                
        
    }
    
    
    FIM:
    return 0;
}
