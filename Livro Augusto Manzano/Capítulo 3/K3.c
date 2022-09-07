/********************************************************************************
*   File:    K3.c                                                                *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
*********************************************************************************/
/*    Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar
(US$). O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares
disponível com o usuário.                                          */

int main()
{
    //variáveis
    int real = 4;
    int dolar, r;
    
    //ler
    printf("Converta de real para dolares");
    getchar();
    
    printf("digite o valor em dolar:");
    scanf("%i", &dolar);
    
    //atribuir
    r = dolar*real;
    
    //escrever
    printf("O valor convertido é R$%i", r);
    

    return 0;
}