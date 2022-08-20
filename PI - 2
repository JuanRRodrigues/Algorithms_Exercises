
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
     // Variaveis globais
     int op, r, A, B, M,Q, C;    // op = deseja continuar  A: numero b:numero r:continuar
     float Raiz;
     int contador = 0;
     int N;
     char P[10];
     //Calculo de octal
     int decim(int n){
         int i = 1,a; 
    int octal = 0; 
    if(n<=7) {
        octal=n;
    }else{
    
        while(n>=8) {
            a=n%8;
            n=n/8;
            octal = octal + a * i; 
            i *= 10; 
        }
        n=n%8;
        octal = octal + n * i; 
    }

    return octal;
}        
//calculo de Hexadecimal
 int hexas(int h){
     int i = 1,a; 
    int hexa = 0; 
    if(h<=15) {
        hexa=h;
    }else{
    
        while(h>=16) {
            a=h%16;
            h=h/16;
            hexa = hexa + a * i; //calculo do octal
            i *= 10; //aumento do fator de base 10
        }
        h=h%16;
        hexa = hexa + h * i; //mesmo calculo aqui
    }
     return hexa;
 }    
     
int main()
{
     // Programa 
    int n,octal,hexa,h;
    Inicio: 
    system("clear");
    printf("Bem-vindo ao Programa de Calculos");
    printf("\n\nEnter para continuar...");
    getchar();
    system("clear");
    // Menu do Progarma - 6 Opçoes
    Menu:
    system("clear");
    printf("Escolha a Funcao desejada");
    printf("\n0-FIM"); // finalizado
    printf("\n1-Tabuada"); // finalizado
    printf("\n2-Calculadora"); // finalizado
    printf("\n3-Conversor Metros -> Decimetros,Centimetro, Milimetros");
    printf("\n4-Conversor Decimal -> octal"); // finalizado
    printf("\n5-Conversor Decimal -> Hexa"); // finalizado
    printf("\n6-Quadrado"); // finalizado
    printf("\nDigite a opção desejada:"); // Escolha = OP
    scanf("%d", &op);
    
    switch(op)
    {
        case 0:  // 0-FIM
        goto Fim;// Finaliza o Programa
        system("clear");
        
        case 1:
        do{
            system("clear");
        printf("\t\t>>>>>Tabuda<<<<<"); //1-Tabuada 1 a 10
        printf("\nDigite um numero da tabuada: ");
        scanf("%d", &A);
        printf("\n--------------------------------------------------\n");
        for(contador=0;contador<=10;contador++)
          {
            printf("%d x %d = %d\n",A,contador,A*contador);
           }
           printf("--------------------------------------------------");
            printf("\n1- Novo Calculo\n");
            printf("2 - Voltar pro Menu\n");
            printf("Digite a opção desejada: ");
            scanf("%d", &r);
        }while(r != 2);
        goto Menu;
        case 2: // 2-Calculadora  + - * /
        do{
            system("clear");
        printf("\t\t>>>>>Calculadora<<<<<");
        printf("\nDigite o primeiro numero: ");
        scanf("%d", &A);
        printf("Digite o segundo numero: ");
        scanf("%d", &B);
        printf("--------------------------------------------------\n");
        printf("%d + %d = %d\n",A,B,A+B);
        printf("%d - %d = %d\n",A,B,A-B);
        printf("%d x %d = %d\n",A,B,A*B);
        printf("%d / %d = %d\n",A,B,A/B);
        printf("--------------------------------------------------");    
            printf("\n1- Novo Calculo\n");
            printf("2 - Voltar pro Menu\n");
            printf("Digite a opção desejada: ");
            scanf("%d", &r); 
        }while(r != 2);
        goto Menu;
        
        case 3: // 3-ConversorMetros = Decimetros,Centimetro e Milimetros
        do{
        system("clear");
        printf("\t\t>>>>>Conversor-Metros<<<<<");
        printf("\nDigite o valor em metros: ");
        scanf("%d", &M);
        printf("\n--------------------------------------------------");
         printf("\nMetros:%d",M);
         printf("\nDecimetros:%d",M*10);
         printf("\nCentimetro:%d",M*100);
         printf("\nMilimetros:%d",M*1000);
        printf("\n--------------------------------------------------");
            printf("\n1- Novo Calculo\n");
            printf("2 - Voltar pro Menu\n");
            printf("Digite a opçao desejada: ");
            scanf("%d", &r);
        }while(r != 2);
        goto Menu;
      
        case 4:
        do{
          system("clear");
          printf("Informe um numero decimal:");  // Conversor Decimal -> octal
          scanf("%d",&n);  

          octal=decim(n);  
    printf("--------------------------------------------------");
    printf("\no numero octal e: %d",octal);
    printf("\n--------------------------------------------------");  
            printf("\n1- Novo Calculo\n");
            printf("2 - Voltar pro Menu\n");
            printf("Digite a opçao desejada: ");
            scanf("%d", &r);
        }while(r != 2);
        goto Menu;
        case 5: 
        do{
            system("clear");
            printf("Informe um numero decimal:");  //Conversor Decimal -> Hexa
            scanf("%d",&h);  

            hexa=hexas(h);  
    printf("--------------------------------------------------");
    printf(" \no numero Hexa eh: %d",hexa);
    printf("\n--------------------------------------------------");  
       
        printf("\n1- Novo Calculo\n");
            printf("2 - Voltar pro Menu\n");
            printf("Digite a opçao desejada: ");
            scanf("%d", &r);
        }while(r != 2);
        goto Menu;
        case 6:
        do{
        system("clear");
        printf("\t\t>>>>>Quadrado<<<<<");
        printf("\nDigite o numero A:");
        scanf("%d", &A);
        printf("Digite o numero B:");
        scanf("%d", &B);
        printf("--------------------------------------------------");
        printf("\nA soma dos Números: %d + %d = %d",A,B,A+B);
        Q = A*pow(B,2);
        printf("\nO produto do Primeiro Número pelo quadrado do segundo:%d",Q);
        A = pow(A,2);
        Q = pow(B,2);
        printf("\nO quadrado do primeiro número:%d",A);
        B = A+Q;
        Raiz = sqrt(B);
        printf("\nA Raiz quadrada da soma dos quadrados: %f", Raiz);
        printf("\n--------------------------------------------------");
           printf("\n1- Novo Calculo\n");
            printf("2 - Voltar pro Menu\n");
            printf("Digite a opção desejada: ");
            scanf("%d", &r);
        }while(r != 2);
         goto Menu;
    }     
          
        
        
        
    
    Fim:
    //goto Inicio;
    
    return 0;                                     
}








