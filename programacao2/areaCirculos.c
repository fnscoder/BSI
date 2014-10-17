/*

AlgProgr2 AA6.6: Área de Círculos (Programa C)
Faça um PROGRAMA C para resolver o problema abaixo descrito. Deve-se calcular e mostrar
repetidamente a ÁREA de vários círculos. Cada círculo é representado por um ponto central
(coordenadas x e y) e por seu raio. Represente um círculo usando o conceito de REGISTRO e de
REGISTRO ANINHADO. Use STRUCT da LINGUAGEM C para implementar REGISTROS. O cálculo da ÁREA de
um círculo é feito pela equação abaixo. Note que não é necessário usar o ponto central para o
cálculo da área de um círculo. Área = PI * raio * raio. O valor de PI é 3.1416 (use este valor
aproximado). Leia os dados e calcule a área de 100 círculos. Os dados devem ser lidos do teclado.
Implemente PROCEDIMENTOS para: - A LEITURA dos dados de um círculo, ou seja, o procedimento deve
ler as coordenadas x e y e também o raio do círculo. void LerDadosCírculo(...) -
A ESCRITA da área de um círculo, ou seja, o procedimento deve receber o raio de um círculo e
mostrar no monitor o valor de sua área. void MostrarÁreaCírculo(...)

Autor: Felipe Nogueira de Souza Data: 19/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//defne constante valor de pi
#define pi 3.1416

//define tipo para o circulo
typedef struct {

    float raio;
    float px;
    float py;
} tCirculo;

//em linguagem C um procedimento é uma função com tipo void, ou seja, não retorna nada
//função que le os dados de um circulo com parametros por referencia
void LerDadosCirculo(tCirculo* dadosCirculo) {

    //solicita os dados e armazena
    printf("Informe o raio: ");
    scanf("%f", &(*dadosCirculo).raio);

    printf("Informe o ponto X: ");
    scanf("%f", &(*dadosCirculo).px);

    printf("Informe o ponto Y: ");
    scanf("%f", &(*dadosCirculo).py);
}

//função sem retorno que calcula e exibe a area do circulo com parametros por referencia
void MostrarAreaCirculo(tCirculo* dadosCirculo) {

    //declara variavel para area
    float area;
    //calcula a area do circulo
    area = pi * (*dadosCirculo).raio * (*dadosCirculo).raio;
    //exibe o resultado
    printf("Area do circulo: %f\n\n", area);
}

//função principal
int main(int argc, char* argv[]) {

    //declara variaveis
    int i;                  //indice
    tCirculo circulo1;      //circulo do tipo tCirculo
    tCirculo* pontCirc;     //ponteiro do tipo tCirculo
    pontCirc = &circulo1;   //ponteiro aponta para o endereço de memoria de circulo1

    //laço para calcular a area de 100 circulos
    for (i = 0; i < 100; i++) {

        //informa qual o circulo atual
        printf("Calculo da area do %dº circulo: \n", i+1);

        //chama função que le os dados e envia parametro por referencia
        LerDadosCirculo(pontCirc);

        //chama função que mostra os dados e envia parametro por referencia
        MostrarAreaCirculo(pontCirc);
    }
}
