/*
Atividade AA2-1 Equivalência Monetária
Contexto
Uma empresa comercial lida diretamente com o público, vendendo produtos. Como o troco em moedas passou a ser um 	problema, alguns funcionários ficaram responsáveis por gerenciar a quantidade de moedas disponíveis para os caixas.

Uma parte do processo de controle envolveu a determinação, para uma dada quantia em reais,de quantas moedas seriam 	necessárias para equivaler a esse valor.
Informações necessárias
Os cálculos envolvem a determinação do número mínimo de moedas para um dado valor em reais.

Por exemplo, R$ 4,35 podem ser dados como quatro moedas de R$1, uma de R$0,25 e mais uma de R$0,10.

Outros exemplos:

R$15,93: 15 x 1,00 + 1 x 0,50 + 1 x 0,25 + 1 x 0,10 + 1 x 0,05 + 3 x 0,01, portanto 22 moedas
R$1,31: 1 x 1,00 + 1 x 0,25 + 1 x 0,05 + 1 x 0,01, portanto 4 moedas
Especificação do trabalho
Escreva um algoritmo que permita que digitado um valor referente a uma quantidade monetária e dê como resultado o 	número total mínimo de moedas que equivalem ao mesmo valor. Assuma que todos os valores digitados sejam	     
necessariamente maiores ou iguais a zero, de forma que, havendo a digitação de um número negativo, o algoritmo não precisa funcionar.

Autor: Felipe Nogueira de Souza Data: 23/04/2014
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    
    //Declarando e inicializando as variaveis
    float valor = 0;                //recebe valor digitado pelo usuario
    int qtdeMoedasTotal = 0;        //armazena qtde total de moedas
    int qtdeMoedasReal = 0;         //armazena a qtde total de moedas de 1 real
    int qtdeMoedas50Centavos = 0;   //armazena a qtde total de moedas de 50 centavos
    int qtdeMoedas25Centavos = 0;   //armazena a qtde total de moedas de 25 centavos
    int qtdeMoedas10Centavos = 0;   //armazena a qtde total de moedas de 10 centavos
    int qtdeMoedas05Centavos = 0;   //armazena a qtde total de moedas de 05 centavos
    int qtdeMoedas01Centavo = 0;    //armazena a qtde total de moedas de 1 centavo
    int decimal = 0;                //armazena parte decimal
            
    //solicita que o usuario digite um valor em reais e faz a leitura deste numero
    printf("\n\n****************************");
    printf(" Equivalencia Monetaria ");
    printf("****************************"); 
    printf("\n\n\n   Digite um valor monetario R$ ");   
    scanf("%f", &valor);
    printf("\n\n\n********************************************************************************");
    valor = valor + 0.005;
    printf("\nO valor digitado foi %f", valor);
    
    //armazena apenas a parte inteira do valor
    qtdeMoedasReal = floor(valor);
        
    //trata a parte decimal do valor
    decimal = (valor-qtdeMoedasReal)*100;
    
    //calcula a qtde de moedas de 50, 25, 10 ,05 e 01 centavo
    qtdeMoedas50Centavos = decimal/50;
    decimal = decimal % 50;
    
    qtdeMoedas25Centavos = decimal/25;
    decimal = decimal % 25;
    
    qtdeMoedas10Centavos = decimal/10;
    decimal = decimal % 10;
    
    qtdeMoedas05Centavos = decimal/5;
    
    qtdeMoedas01Centavo = decimal % 5;
    
    //calcula qtde total de moedas
    qtdeMoedasTotal = qtdeMoedasReal + qtdeMoedas50Centavos + 
                        qtdeMoedas25Centavos + qtdeMoedas10Centavos + 
                        qtdeMoedas05Centavos + qtdeMoedas01Centavo; 
    
    //exibe na tela a qtde de cada moeda e o total de moedas
    printf("\n\n\nA quantidade de moedas de 01 Real e: %d", qtdeMoedasReal);
    printf("\nA quantidade de moedas de 50 centavos e: %d", qtdeMoedas50Centavos);
    printf("\nA quantidade de moedas de 25 centavos e: %d", qtdeMoedas25Centavos);
    printf("\nA quantidade de moedas de 10 centavos e: %d", qtdeMoedas10Centavos);
    printf("\nA quantidade de moedas de 05 centavos e: %d", qtdeMoedas05Centavos);
    printf("\nA quantidade de moedas de 01 centavo e: %d", qtdeMoedas01Centavo);
    printf("\n\n\nA quantidade TOTAL de moedas e: %d", qtdeMoedasTotal);
      
  	printf("\n\n\n");
  	system("PAUSE");	
  	return 0;
}
