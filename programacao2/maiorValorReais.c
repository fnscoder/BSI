/*

Faça um programa em C que receba pelo teclado N numeros reais e em seguida mostre na tela
apenas o maior valor dentre estes numeros. A quantidade N precisa ser fornecida pelo
usuario e considere-a como sendo sempre maior que 0

Autor: Felipe Nogueira de Souza Data: 21/08/2014

*/

#include <stdio.h>

int main() {

    float maior = 0;
    int i, qtdeNumeros = 0;

    while (qtdeNumeros < 1) {

        printf("Informe a quantidade de numeros: ");
        scanf("%d", &qtdeNumeros);
    }

    float numeros[qtdeNumeros];

    for (i = 0; i < qtdeNumeros; i++) {

        printf("\nInforme o %dº numero: ", i+1);
        scanf("%f", &numeros[i]);

        if (numeros[i] > maior) {

            maior = numeros[i];
        }
    }
    printf("O maior numero informado foi: %f", maior);
}
