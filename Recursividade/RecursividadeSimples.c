/********************************************************************************
*   File:    RecursividadeSimples.c                                              *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   
*********************************************************************************/
#include <stdio.h>

int main(void) 
{
    int fatorial (int x);
    int numero, resultado;
    
    printf("Digite um numero inteiro:");
    scanf("%i", &numero);
    
    resultado = fatorial(numero);
    
    printf("0 fatorial eh %i", resultado);
    
    
    return 0;
}

int fatorial(int x) {
	
	int resultado;
	
	if (x == 0){
		resultado = 1;
	   
	   }else{
	   	resultado = x * fatorial(x - 1);
	   }
	   
		return resultado;
	}
	



