/*

AlgProgr2 - AA3.2: Menor Valor e Posição (Linguagem C)
Implemente na linguagem C um programa que leia um vetor de tamanho 20 de números inteiros.
A seguir, encontre o menor elemento e a sua posição dentro do vetor, mostrando:
“O menor elemento do vetor é”, X, “e sua posição dentro do vetor é:”, P.
Assuma que o vetor não possui valores repetidos.

Autor: Felipe Nogueira de Souza Data: 18/08/2014

*/

#include <stdio.h>
#include <stdlib.h>

//constante para definir o tamanho do vetor
#define TAMANHO 20

int main(int argc, char *argv[]) {

    //declarando variaveis
    int numero[TAMANHO];
    int menorNum, posMenorNum, i;

    //laço de repetição para receber os dados, armazenar no vetor e verificar qual o menor numero
    for (i = 0; i < TAMANHO; i++) {

        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numero[i]);

        //verifica o menor numero
        if (numero[i] < menorNum){

            menorNum = numero[i];
            posMenorNum = i;
        }
    }
    //exibe o resultado
    printf("O menor elemento do vetor e: %d e sua posicao dentro do vetor: %d", menorNum, posMenorNum);
}

