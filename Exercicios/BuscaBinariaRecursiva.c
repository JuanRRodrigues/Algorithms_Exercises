
/*****************************************
*   File:    BuscaBinariaRecursiva.c     *
*   Author:  Juan R. Rodrigues           *                                    
*****************************************/

//Bibliotecas

#include <stdlib.h>
#include <stdio.h>
#define VECTOR_SIZE 10

// variaveis
int BuscaBinariaRecursiva(int *vet, int chave, int inicio, int fim){
	int meio;
	if (inicio <= fim){
		meio = (inicio + fim) / 2;
		if(chave == vet[meio])
		  return meio;
		  else{
		  	if(chave < vet[meio])
		  	    return BuscaBinariaRecursiva(vet, chave, inicio, meio -1);
		  	 else
		  	    return BuscaBinariaRecursiva(vet, chave, meio +1, fim);
		  }
		
	}
	return -1;  // elemento não encontrado
}



 int main() {
 	int vet[10] = {13,14,19,45,69,80,93,100,5,69};
 	int valor, op;
 	
 	do {
 		printf("Digite um valor a ser buscado: ");
 		scanf("%d", &valor);
 		printf("\nResultado: %d\n", BuscaBinariaRecursiva(vet, valor, 0, 9));
 		
 		printf("\n0 - sair\n1 - nova Busca\n");
 		scanf("%d", &op);
	 }while(op != 0);
	 
	 return 0;
 }    
     
