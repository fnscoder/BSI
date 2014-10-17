/*

Recebe um vetor e o inverte

Autor: Felipe Nogueira de Souza Data: 26/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

#define maximo 5

float criaVetor(float* ptVt, int nelementos) {

    int i;

    for (i = 0; i < nelementos; i++) {

        printf("\nInforme o %dº elemento do vetor: ", i+1);
        scanf("%f", &ptVt[i]);
    }
}

float mostraVetor(float* ptVt, int nelementos) {

    int i;

    for (i = 0; i < nelementos; i++) {

        printf("\n%dº elemento do vetor: %f", i+1, ptVt[i]);
    }
}

float inverteVetor(float* ptVt, int nelementos) {

    float temp;
    int i;

    printf("\n\nInvertendo o vetor\n");

    for (i = 0; i < nelementos/2; i++) {

        temp = ptVt[i];
        ptVt[i] = ptVt[nelementos - 1 - i];
        ptVt[nelementos - 1 - i] = temp;
    }

    for (i = 0; i < nelementos; i++) {

        printf("\nPosição %dº %f", i + 1, ptVt[i]);
    }
}

int main(int argc, char argv[]) {

    float vetor[maximo];
    float* pontVetor;
    int i;

    pontVetor = &vetor;

    criaVetor(pontVetor, maximo);

    mostraVetor(pontVetor, maximo);

    inverteVetor(pontVetor, maximo);
}
