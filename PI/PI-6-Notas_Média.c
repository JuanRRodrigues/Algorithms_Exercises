/*****************************************
*   File:    PI-6-Notas_Média.c           *
*   Author:  Juan R. Rodrigues            *                                     
*   Teacher: Jose Oscar Machado Alexandre *
******************************************/
#include <stdio.h>

    float Nota1,Nota2, M, NotaF, MF; 
int main()
{
    printf("Informe as notas do aluno de 0 a 100\n");
    scanf("%f %f",&Nota1 , &Nota2);
    M = (Nota1+Nota2)/2;
    if (M >= 70){
        Aprovado:
        printf("Aprovado");
        goto FIM;
    }else{
        if (M <= 39){
               printf("\nReprovado"); 
               goto FIM;
        
        
        }else{
            
            if (40 >= M <= 69){
            
        printf("\nEm Exame Final");
        printf("\nDigite Nota do Exame Final:");
        scanf("%f", &NotaF);
        MF = M+NotaF;
            }else{
                
                    
                }
            }
            
        }
        
        
    
    if (100 <= MF){
    printf("Aprovado");
    }else{
     printf("\nReprovado");   
    }
    
    FIM:
    
    return 0;
}
