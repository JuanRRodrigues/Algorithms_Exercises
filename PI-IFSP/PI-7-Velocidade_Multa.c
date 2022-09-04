/*****************************************
*   File:    PI-7-Velocidade_Multa        *
*   Author:  Juan R. Rodrigues            *                                     
*   Teacher: Jose Oscar Machado Alexandre *
******************************************/
#include <stdio.h>

int main()
{
    int V,VM,M;
    VM = 20;
    M = 0;
    
    printf("digite a velocidade do motorista: ");
    scanf("%i", &V);
    do{
    if (V <= 20){
        goto SM;
        
    }else{
        V=V-1;
        M=M+5;
    }
    }while(V != 20);
    printf("Multa de %i", M);
    goto FIM;
     SM:
     printf("Sem Multa");
     FIM:
    return 0;
}
