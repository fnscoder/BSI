/*

Calcula o perimetro de um triangulo

Autor: Felipe Nogueira de Souza Data: 21/08/2014

*/

#include <stdio.h>
#include <math.h>

typedef struct{

    float ponto1, ponto2;
} tpontos;

typedef struct{

    float ladoA, ladoB, ladoC, perimetro;
} ttriangulo;

int main(){

    tpontos coordenadas[3];
    ttriangulo triangulo;
    int i;

    for (i = 0; i < 3; i++){

        printf("Informe o 1º ponto da %dº coordenada: ", i+1);
        scanf("%f", &coordenadas[i].ponto1);

        printf("Informe o 2º ponto da %dº coordenada: ", i+1);
        scanf("%f", &coordenadas[i].ponto2);
    }

    triangulo.ladoA = sqrt(pow((coordenadas[0].ponto1 - coordenadas[1].ponto1), 2) + pow((coordenadas[0].ponto2 - coordenadas[1].ponto2), 2));

    triangulo.ladoB = sqrt(pow((coordenadas[0].ponto1 - coordenadas[2].ponto1), 2) + pow((coordenadas[0].ponto2 - coordenadas[2].ponto2), 2));

    triangulo.ladoB = sqrt(pow((coordenadas[1].ponto1 - coordenadas[2].ponto1), 2) + pow((coordenadas[1].ponto2 - coordenadas[2].ponto2), 2));

    triangulo.perimetro = triangulo.ladoA + triangulo.ladoB + triangulo.ladoC;

    printf("\n\nO perimetro do triangulo informado e: %f", triangulo.perimetro);
}
