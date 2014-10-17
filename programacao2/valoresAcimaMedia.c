/*

AlgProgr2 AA6.2: Quantidade de Valores Acima da Média (Programa C)
Faça uma FUNÇÃO na LINGUAGEM C que receba um vetor de notas de alunos e retorne o total de
alunos que possuem nota maior ou igual a nota média da turma.
int TotalAlunos ( float V[máximoAlunos] )
Considere a seguinte constante inteira: const int máximoAlunos = 40; A nota média da turma é a
média aritmética das notas dos alunos. Considere o vetor de notas como sendo um vetor de
números reais do tipo float. Considere que a turma possui no máximo 40 alunos.

Autor: Felipe Nogueira de Souza 19/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//definindo uma constante inteira com valor igual a 40
const int maximoAlunos = 40;

//função que verifica a media e quantos alunos tem nota igual ou maior a media, recebe um vetor float por referencia
int TotalAlunos(float *vetorNotas) {

    //declarando variaveis
    int i, cont = 0;
    float media, soma = 0;

    //soma o total de notas
    for (i = 0; i < maximoAlunos; i++) {

        soma += vetorNotas[i];
    }

    //verifica a media
    media = soma/maximoAlunos;

    //laço para percorrer o vetor e verificar se a nota do aluno é maior ou igual a media
    for (i = 0; i < maximoAlunos; i++) {

        if (vetorNotas[i] >= media) {

            cont++;
        }
    }
    //retorna quantidade de alunos com nota igual ou maior a media
    return cont;
}

//função principal
int main(int argc, char* argv[]) {

    //declarando variaveis
    float notasAlunos[maximoAlunos];    //vetor que recebera as notas dos alunos
    float *pontVetor;                   //ponteiro que apontara para o endereço de memoria do vetor
    int i;                              //variavel para indice
    pontVetor = &notasAlunos;           //atribui o endereço de memoria do vetor para o ponteiro

    //laço para solicitar e receber a nota dos alunos
    for (i = 0; i < maximoAlunos; i++) {

        printf("Informe a nota do %d aluno: ", i+1);
        scanf("%f", &notasAlunos[i]);
    }
    //exibe a quantidade de alunos com nota igual ou maior a media chamando a função TotalAlunos e passando o parametro por referencia, ou seja, passando o ponteiro com o endereço de memoria do vetor
    printf("O total de alunos com nota maior ou igual a media e: %d", TotalAlunos(pontVetor));

    system("PAUSE");
}
