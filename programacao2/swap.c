/*

AlgProgr2 - AA5.1: Troca de Valores
Faça um programa que troque o valor de 2 variáveis do tipo inteiro usando variáveis do
tipo ponteiro. Por exemplo, caso A = 4 e B = 6, após a troca o valor de A = 6 e B = 4.
Para acessar os valores de A e B use ponteiros, ou seja, o acesso aos dados destas
variáveis deve ser feito de modo indireto.

Autor: Felipe Nogueira de Souza Data 06/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a, b, aux;  //variaveis primeiro e segundo numero e auxiliar
    int* pont_a;    //ponteiros para os dois numeros
    int* pont_b;    //ponteiros para os dois numeros

    //solicita e armazena os numeros
    printf("Informe o primeiro numero: ");
    scanf("%d", &a);

    printf("Informe o segundo numero: ");
    scanf("%d", &b);

    //armazena o endereco de memoria das duas variaveis informadas pelo usuario
    pont_a = &a;
    pont_b = &b;

    //realiza a troca de valores utilizando o endereco de memoria e a variavel aux
    aux = *pont_a;
    *pont_a = *pont_b;
    *pont_b = aux;

    //exibe os numeros invertidos
    printf("Numeros invertidos: %d, %d\n", a, b);

    system("PAUSE");
    return 0;
}
