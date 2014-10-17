/*
AlgProg3 Centroide em 10 dimensões
Introdução
Dados em 10 dimensões podem representados por um grupo de 10 coordenadas. Como exemplo, um 
ponto em R10 pode ser:
(1,37; 2,06; 0,92; -2,7; 1,87; 0,88; 1,43; -1,3; 2,72; 3,79)
Quando se dispõe de um conjunto de vários pontos, existe um outro ponto, chamado centroide,
que corresponde ao "centro" desse conjunto de pontos.
As coordenadas desse centroide são calculadas pelas médias de cada cada dimensão. Em outras
palavras, a primeira coordenada do centroide é a média da primeira coordenada de todos os
pontos; a segunda coordenada é a média da segunda coordenada de todos os pontos; e assim por
diante.
Um exemplo:
Pontos:

(-0,45; 0,2; 2,01; -1,57; 0,79; -2,45; 1,87; 0,66; -0,5; -2,99)
(-1,62; -2,92; 3,87; 2,91; 2,62; 3,04; 2,5; -3,91; 0,8; -2,84)
(-0,57; -3,96; 2,5; -2,81; 1,21; 3,34; 1,77; -0,29; 3,03; -2,63)
Centroide:
(-0,88; -2,23; 2,79; -0,49; 1,54; 1,31; 2,05; -1,18; 1,11; -2,82)
Note que -0,88 é calculado pela média de -0,45, -1,61 e -0,57, por exemplo.
Proposta
Escreva um programa em linguagem C para ler um conjunto de 5 pontos de 10 dimensões cada um e
escrever as coordenadas do centroide desses pontos.
Para isso, deve ser usada uma matriz 6x10 de valores reais. Nas 5 primeiras linhas devem ser
colocados os valores das coordenadas dos 5 pontos. Na sexta linha devem ser colocadas as
coordenadas do centroide desses pontos.
Ao final, devem ser escritos todos os pontos e também o centroide.

Autor: Felipe Nogueira de Souza Data: 03/10/2014
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j;
    float matriz[6][10];

    for (i = 0; i < 5; i++) {

        printf("%dº ponto:\n", i + 1);

        for (j = 0; j < 10; j++) {

            printf("%dº Coordenada: ", j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (j = 0; j < 10; j++) {

        matriz[5][j] = (matriz[0][j]+matriz[1][j]+matriz[2][j]+matriz[3][j]+matriz[4][j])/5;
    }

    for (i = 0; i < 6; i++) {

        printf("\n%dº Ponto\n", i + 1);
        for (j = 0; j < 10; j++){

            printf(" %f ", matriz[i][j]);
        }
    }

}








