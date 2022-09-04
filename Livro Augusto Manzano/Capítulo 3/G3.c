/********************************************************************************
*   File:    G3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/

#include <stdio.h>
#include <math.h>


/* Ler quatro valores numéricos inteiros e apresentar o resultado das adições e das multiplicações
utilizando o mesmo raciocínio aplicado quando do uso de propriedades distributivas para a
máxima combinação possível entre as quatro variáveis. Não é para calcular a propriedade distributiva, apenas para usar a sua forma de combinação. Considerando a leitura de valores para as
variáveis A, B, C e D, devem ser feitas seis adições e seis multiplicações, ou seja, deve ser combinada a variável A com a variável B, a variável A com a variável C, a variável A com a variável D.
Depois é necessário combinar a variável B com a variável C e a variável B com a variável D e,
por fim, a variável C será combinada com a variável D. */

   // 


int main()
{
    int A, B, C, D, AB, AC, AD, BC, BD, CD, ABM, ACM, ADM, BCM, BDM, CDM;
    
    printf("Informe os quatro valores inteiros"); //Início
    getchar();
    
    printf("Digite o valor de A:");         //Varíaveis de entrada
    scanf("%i", &A);
    printf("Digite o valor de B:");
    scanf("%i", &B);
    printf("Digite o valor de C:");
    scanf("%i", &C);
    printf("Digite o valor de D:");
    scanf("%i", &D);
    
    //Atribuições
    AB = A+B;
    AC = A+C;
    AD = A+D;
    BC = B+C;
    BD = B+D;
    CD = C+D;            
    ABM = A*B;
    ACM = A*C;
    ADM = A*D;
    BCM = B*C;
    BDM = B*D;
    CDM = C*D;
    
    // Escrever SOMAS
    printf("\nResultado das Somas:");
    printf("\nA+B:%i", AB);  
    printf("\nA+C:%i", AC);   
    printf("\nA+D:%i", AD);
    printf("\nB+C:%i", BC);
    printf("\nB+D:%i", BD);
    printf("\nC+D:%i", CD);
    
    // Escrever Mults
    printf("\n\nResultado das Mults");
    printf("\nA*B:%i", ABM);
    printf("\nA*C:%i", ACM);
    printf("\nA*D:%i", ADM);
    printf("\nB*C:%i", BCM);
    printf("\nB*D:%i", BDM);
    printf("\nC*D:%i", CDM);
    
    
    return 0;
    
}