/*

AlgProgr2 AA6.7: Números Racionais (Programa C)
Faça um PROGRAMA C para resolver o problema abaixo descrito.
Escreva PROCEDIMENTOS que manipulem NÚMEROS RACIONAIS. Um número racional é representado na
forma numerador/denominador. Use o conceito de REGISTRO (Struct na Linguagem C) para representar
um número racional por meio do tipo de dados abaixo especificado.
typedef struct { int numerador; int denominador; } tRacional;
Implemente PROCEDIMENTOS para as seguintes funcionalidades:
1) Obter um número racional void LerNumeroRacional(...)
Dica: Use passagem de parâmetro por referência para obter um número racional.
2) Somar 2 números racionais void SomarNumerosRacionais(...)
Dica: Use 3 parâmetros formais, sendo o 1o e o 2o parâmetros para passar para o procedimento
os 2 números racionais e o 3o parâmetro para retornar o resultado da soma dos 2 números racionais.

Autor: Felipe Nogueira de Souza Data: 22/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//definindo tipo para numero racional com numerador e denominador
typedef struct {

    int numerador;
    int denominador;
} tRacional;

//procedimento que le um numero racional
void LerNumeroRacional(tRacional *numRacional) {

    printf("Informe o numero racional\nNumerador: ");
    scanf("%d", &(*numRacional).numerador);

    printf("Denominador: ");
    scanf("%d", &(*numRacional).denominador);
    printf("\n\n");
}

//procedimento que soma dois numeros racionais
void SomarNumerosRacionais(tRacional* numRacional1, tRacional* numRacional2, tRacional* resultado) {

    (*resultado).numerador = (*numRacional1).numerador * (*numRacional2).denominador + (*numRacional1).denominador * (*numRacional2).numerador;
    (*resultado).denominador = (*numRacional1).denominador * (*numRacional2).denominador;
}

//procedimento que simplifica um numero racional
void simplifica(tRacional* resultado) {

    //variaveis
    int valor1, valor2, resto;

    //calcula MDC e armazena o resultado em valor 1
    valor1 = (*resultado).numerador;
    valor2 = (*resultado).denominador;

    while (resto != 0) {

        resto = valor1 % valor2;
        valor1 = valor2;
        valor2 = resto;
    }

    //divide o numerador e o denominador pelo resultado do MDC
    (*resultado).numerador = (*resultado).numerador/valor1;
    (*resultado).denominador = (*resultado).denominador/valor1;
}

//função principal
int main(int argc, char* argv[]) {

    //declarando variaveis
    tRacional racional1, racional2, soma;                   //variaveis para dois numeros racionais e para a soma
    tRacional* pontRacional1;                               //ponteiros para as tres variaveis do tipo tRacional
    tRacional* pontRacional2;                               //ponteiros para as tres variaveis do tipo tRacional
    tRacional* pontSoma;                                    //ponteiros para as tres variaveis do tipo tRacional
    
    //atrbiu aos ponteiros o endereço de memoria das variaveis correspondentes
    pontRacional1 = &racional1;
    pontRacional2 = &racional2;
    pontSoma = &soma;

    //chama procedimento duas vezes para ler dois numeros racionais
    LerNumeroRacional(pontRacional1);

    LerNumeroRacional(pontRacional2);

    //chama procedimento que soma os numeros racionais
    SomarNumerosRacionais(pontRacional1, pontRacional2, pontSoma);

    //exibe a soma
    printf("A soma dos numeros racionais e:\nNumerador: %d \nDenominador: %d", soma.numerador, soma.denominador);

    printf("\n\nApos simplificação o resultado é:");

    //chama função que simplifica o resultado da soma
    simplifica(pontSoma);

    //exibe a soma simplificada
    printf("\nNumerador: %d \nDenominador: %d", soma.numerador, soma.denominador);

    system("PAUSE");
}
