/*

AlgProgr2 - AA5.3: Raiz Quadrada
Faça um programa na linguagem C que tenha uma função que calcule a Raiz Quadrada de um
número. Leia, calcule e mostre a raiz quadrada de 100 números. Use a biblioteca < math.h>
para escolher a função que calcula a raiz quadrada de um número.
Dica: use #include para incluir uma nova biblioteca da linguagem C no seu programa.

Autor: Felipe Nogueira de Souza Data: 06/09/2014

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca para calcular raiz quadrada

//função que calcula raiz quadrada de um numero
float calculaRaiz(float num){

    return sqrt(num);
}

int main(int argc, char *argv[]){

    //declarando variaveis
    int i;
    float numero;

    //laço de repetição para solicitar e calcular a raiz de 100 numeros
    for (i = 0; i < 100; i++){
        printf("Informe o %dº numero: ", i+1);
        scanf("%f", &numero);
        printf("A raiz quadrada de %f e: %f\n", numero, calculaRaiz(numero));
    }

    system("PAUSE");
    return 0;
}
