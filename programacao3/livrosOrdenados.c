/*

FALTA DEFINIR ORDENACAO DOS LIVROS

Manutenção de ordenação de livros emprestados
Introdução
É preciso manter um controle sobre livros emprestados, mantendo uma lista deles. A cada momento,
deve ser possível listar os livros da lista.
Para cada livro são mantidos:
Nome do autor
Título do livro
O detalhe é que a lista deve ser sempre apresentada em ordem crescente (alfabética) por autor.
Proposta
Escreva um programa em C para manter essa lista de livros.
Para tanto, a lista deve ser mantida em um vetor, sendo cada elemento um registro (struct) com o
nome e o título.
O programa deve permitir:
Inserir um novo livro na lista, mantendo-a ordenada por autor
Apresentar toda a lista na tela
Terminar a execução
A inserção deve já ser no local correto, mantendo a lista ordenada; não é objetivo somente
ordenar a lista antes de apresentá-la.
Cada aluno pode escolher o número de caracteres que quiser para manter o nome do autor e o
título do livro.
Deve ser estabelecida uma quantidade máxima de registros (tamanho do vetor), que é arbitrária.
O programa deve verificar, antes de fazer uma nova inserção, se há espaço no vetor.
Não há remoções de livros da lista, apenas inserções.
Não é preciso verificar, antes de uma inserção, se o livro já está na lista. Considere que, se
uma mesma informação for inserida duas vezes, é como se houvesse dois exemplares de um mesmo
título.

Autor: Felipe Nogueira de Souza Data: 11/10/2014
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VETOR 50

typedef struct{

    char autor[30];
    char titulo[50];
    int posicao;
} tLivro;

void cabecalho(){

    printf("\n********************************************************************");
    printf("\n************************ Cadastro de Livros ************************");
    printf("\n********************************************************************\n");
}

void inserirLivro(tLivro *livros, int total){

    int i, j, status;

    i = 0;

    status = 0;

    printf("\nInforme o nome do autor: ");
    scanf("%s", &livros->autor);

    printf("\nInforme o título do livro: ");
    scanf("%s", &livros->titulo);

    //printf("\nO nome informado foi %s e o titulo foi %s.", livros->autor, livros->titulo);

    j = total;

    while (status != 1){


    }

    j = total/2;





    printf("\nLivro inserido com sucesso!");


}

void apresentarLista(tLivro *livros, int total){

    int i;

    for (i = 0; i < total; i++){

        printf("\nAutor: %s", livros->autor);
        printf("\nTítulo do Livro: %s", livros->autor);
    }
}


int main(){

    tLivro vetorLivros[MAX_VETOR];
    tLivro *ptLivros;
    int opcao, totalLivros;

    totalLivros = 0;

    ptLivros = &vetorLivros;

    do {

    cabecalho();

    printf("\n\nSelecione uma opção: \n 1)Inserir novo livro\n 2)Apresentar a lista de livros\n 3)Sair\n");
    scanf("%d", &opcao);

        switch (opcao){

            case 1:

                if(totalLivros < MAX_VETOR){

                    inserirLivro(ptLivros, totalLivros);
                }
                else{

                    printf("\nNão é possível inserir livros, a lista já está cheia!");
                }
                break;

            case 2:

                break;

            case 3:

                break;

            default:

                printf("\nOpção Inválida");
                system("clear");
        }

    }while (opcao != 3);

}
