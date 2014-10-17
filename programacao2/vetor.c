/*

AlgProgr2 - AA3.3: Inicialização, Varredura e Seleção de Elementos em Arranjo de
Inteiros (Programa C)
Faça um programa na linguagem C que resolva o seguinte problema: Inicializar um arranjo
unidimensional de elementos inteiros. A quantidade de elementos do arranjo deve ser
obtida do teclado. Porém, o tamanho máximo do arranjo é de 500 elementos e deve ser
usado na sua declaração. O valor de cada elemento do arranjo deve ser lido do teclado.
Após a inicialização do arranjo, mostrar o valor de todos os elementos do arranjo e
destacar os elementos cujo valor esteja no intervalo [10, 30].
PS: arranjo unidimensional também é chamado de vetor.

Autor: Felipe Nogueira de Souza Data: 18/08/2014

*/

#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 500

int main(int argc, char *argv[]) {

    int vetorInteiros[MAXIMO], numeroInteiros, i;

    //solicita e recebe o numero de inteiros
    printf("Digite o numero de inteiros: ");
    scanf("%d", &numeroInteiros);

    //verifica se o numero de alunos e maior que o numero maximo permitido
    while (numeroInteiros > MAXIMO){

        printf("\n\nO numero maximo de inteiros e: %d \nDigite um numero valido: ", MAXIMO);
        scanf("%d", &numeroInteiros);
    }

    for (i = 0; i < numeroInteiros; i++){

        printf("Digite o valor do %dº inteiro: ", i+1);
        scanf("%d", &vetorInteiros[i]);
    }

    for (i = 0; i < numeroInteiros; i++){

        if ((vetorInteiros[i] >= 10) && (vetorInteiros[i] <= 30)){

            printf("\n*** %d *** Em destaque", vetorInteiros[i]);
        }
        else {

            printf("\n%d", vetorInteiros[i]);
        }
    }
}



