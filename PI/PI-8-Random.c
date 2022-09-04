/*****************************************
*   File:    PI-8-Random.c                *
*   Author:  Juan R. Rodrigues            *                                     
*   Teacher: Jose Oscar Machado Alexandre *
******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int N, NM, T, TM;
int main()
{
    srand(time(NULL));
    NM = rand() % 500;
    
    do{
        T = T+1;
        TM = T;
        printf("\nQual e o numero magico 0-500:");
        scanf("%i", &N);
        if ( N > NM){
            
            printf("Maior do Que o Numero Magico");
        }else{
            if ( N < NM){
                printf("Menor do Que o Numero Magico");
            }
              
        }
          
    }while(N != NM);
    if (TM < 4){
       printf("Parabéns %i Tentativas: Muito Sortudo", TM); 
    }else{
      if (TM < 7){
        printf("Parabéns %i Tentativas: Sortudo", TM);  
      }else{
          if (TM < 11){
              printf("Parabéns %i Tentativas: Normal", TM);
          }else{
              if(TM > 10){
               printf("%i Tentativas: Tente Denovo...", TM);    
              }
          }
          
      }  
        
    }
    
    
        
    return 0;
}


