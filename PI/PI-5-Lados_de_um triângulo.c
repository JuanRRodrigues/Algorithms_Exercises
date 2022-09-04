/*****************************************
*   File:    PI-5-Lados_de_um triângulo.c *
*   Author:  Juan R. Rodrigues            *                                     
*   Teacher: Jose Oscar Machado Alexandre *
******************************************/
#include <stdio.h>
int main()
{
    int X, Y, Z, XY, YX;
    printf("Digite os lados do triângulo\n");
    scanf("%i %i %i", &X, &Y, &Z);                    // X-Y < Z < X+Y
     
                                                      // Escaleno X != Y != Z  
    if(X-Y < Z && Z< X+Y){                                // X==Y==Z Equilatero
        goto tipo;                                    //X!=Y==Z Isoceles
        
    }else{
        
        printf("Lados inválidos");
        goto fim;
    }
    
    tipo:
    if(X != Y && Y!=Z ){
       printf("Escaleno");
        
    }else{
        if(X!=Z && Y==X){
            printf("Isoceles");
            
        }else{
           if(X==Y && Y==Z){ 
            printf("Equilatero");
        }
        
        } 
    }
    
    
    
    
    fim:
    return 0;
}


