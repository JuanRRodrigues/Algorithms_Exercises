/********************************************************************************
*   File:    R3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
#include <stdio.h>
#include <math.h>

/* Em uma eleição sindical concorreram ao cargo de presidente três candidatos (representados
pelas variáveis A, B e C). Durante a apuração dos votos foram computados votos nulos e em
branco, além dos votos válidos para cada candidato. Deve ser criado um programa de computador 
que faça a leitura da quantidade de votos válidos para cada candidato, além de também ler
a quantidade de votos nulos e em branco. Ao final o programa deve apresentar o número total
de eleitores, considerando votos válidos, nulos e em branco; o percentual correspondente de
votos válidos em relação à quantidade de eleitores; o percentual correspondente de votos válidos
do candidato A em relação à quantidade de eleitores; o percentual correspondente de
votos válidos do candidato B em relação à quantidade de eleitores; o percentual correspondente
de votos válidos do candidato C em relação à quantidade de eleitores; o percentual
correspondente de votos nulos em relação à quantidade de eleitores; e por último o
percentual correspondente de votos em branco em relação à quantidade de eleitores. */

int main()
{
    
    float nulos, A, B, C, AV, BV, CV, VC, VB, VV, E, TB, TN, PV, TV, AB, BB, CB, BN, AN, CN;    // A, B, C: Representantes        VN, VB, VV   V:validos B:BRANCOS N:Nulos
    
    // validos
    printf("Insira os votos validos do candidato A:");
    scanf("%f", &AV);
    printf("Insira os votos validos do candidato B:");
    scanf("%f", &BV);
    printf("Insira os votos validos do candidato C:");
    scanf("%f", &CV);
    TV = AV+BV+CV;
    //Nulos
    printf("Insira os votos nulos do candidato A:");
    scanf("%f", &AN);
    printf("Insira os votos nulos do candidato B:");
    scanf("%f", &BN);
    printf("Insira os votos nulos do candidato C:");
    scanf("%f", &CN);
    TN = AN+BN+CN;
    //Brancos
    printf("Insira os votos brancos do candidato A:");
    scanf("%f", &AB);
    printf("Insira os votos brancos do candidato B:");
    scanf("%f", &BB);
    printf("Insira os votos brancos do candidato C:");
    scanf("%f", &CB);
    TB = AB+BB+CB;
    
    
    // Escrever
    E = TV+TB+TN; // Total de Eleitores
    printf("Eleitores:%f", E);
    
    AV = (AV/E)*100;
    printf("\nPercentual de validosA:%f", AV);
    BV = (BV/E)*100;
    printf("\nPercentual de validosB:%f", BV);
    CV = (CV*E)/100;
    printf("\nPercentual de validosC:%f", CV);
    PV = (TV*E)/100; 
    printf("\nPercentual de validos:%f", PV);
    TB = (TB*E)/100; 
    printf("\nPercentual de brancos:%f", TB);
    nulos = (TN*E)/100; 
    printf("\nPercentual de nulos:%f", nulos);
    return 0;
}