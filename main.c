/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    float num1, num2, resultado;
    char op = '0';
    
    do{
        
        
        num1 = num2 = resultado = 0; //resetar as variaveis
        //imprimindo as opções da nossa calculadora
        printf("\n (1) Somar\n");
        printf(" (2) Subtrair\n");
        printf(" (3) Multiplicar\n");
        printf(" (4) Dividir\n");
        printf(" (0) Sair do Programa\n");
        
        printf("informe a operação: \n");
        printf("\t\t\t\t>>> ");
        op = getchar();
        printf("\n");
        
        if (op == '0'); {
           
           printf("digite o primeiro número:       \t>>> ");
        scanf("%f", &num1);
        printf("digite o segundo número:        \t>>> ");
        scanf ("%f", &num2);
            
            if (op=='1'){
                resultado = num1 + num2;
                
              }else{
                  if (op == '2') {
                      resultado = num1 - num2;
                  }else{
                      if (op == '3'){
                          resultado = num1 * num2;
                      }else{
                          if(op == '4'){
                              resultado = num1 / num2;
                          }
                      }
                  }
              }
        
        
        
                
            
        }    
                
            
        printf( "nO resultado é: \t\t>>> %f\n", resultado );
        //system("Pause");
        return 0;
        
      }while (op !='0');

    return 0;
}
