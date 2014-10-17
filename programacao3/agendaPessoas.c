/*
AA2.1 Descrição
Deve ser criada uma tabela (vetor de registros) inicialmente vazia, ou seja, com zero elemento.

Cada registro deve conter informações sobre pessoas, incluindo nome e telefone.

Por meio de um menu de opções, viabilizar as seguintes operações:
Inserir um novo registro à tabela, mantendo-a ordenada por nome;
Listar todos os registros da tabela;
Terminar a execução.
Deve haver verificação, na ocasião da inserção, se há espaço na tabela para um novo registro.
O tamanho da tabela deve ser fixo e determinado pelo desenvolvedor. O mesmo ocorre para o
comprimento máximo do nome e do campo para o telefone.

Deve ser criado um procedimento para fazer a operação de inserção, passando adequadamente os
parâmetros.


Autor: Felipe Nogueira de Souza Data: 11/10/2014
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//define quantidade maxima de registros no vetor
#define MAX 100

//define registro do tipo tPessoa
typedef struct {

    char nome[30];
    char fone[13];
    char email[40];
} tPessoa;

//procedimento que insere pessoas na agenda
//parametros vetor agenda(por ponteiro) e ponteiro *qtde para total de registros
void inserirPessoa(tPessoa* pessoa, int* qtde) {

    //define variaveis
    int i = *qtde - 1;  //variavel i armazenara o indice da ultima posicao registrada na agenda
    int j = 0;          //j armazena a posicao inicial da agenda
    char nome[30];      //variaveis auxiliares/temporarias para armazenar os dados digitados
    char fone[13];
    char email[40];

    //se qtde igual a 0 significa que é o primeiro registro
    if (*qtde == 0) {

        //leio os dados e armazeno no primeiro registro
        printf("\nInforme o nome da pessoa: ");
        scanf(" %s", &pessoa[(*qtde)].nome);
        printf("\nInforme o telefone: (xx-xxxxx-xxxx): ");
        scanf(" %s", &pessoa[(*qtde)].fone);
        printf("\nInforme o e-mail: ");
        scanf(" %s", &pessoa[(*qtde)].email);
        //incremento a contagem de total de registros
        *qtde = *qtde + 1;
        printf("\nRegistrado com sucesso!");
    }
    //qtde não é igual a zero (a agenda já possui algum registro)
    else {

        //verifico se ainda há espaço na agenda
        if(*qtde < MAX) {

            //armazeno os dados nas variaveis auxiliares
            printf("\nInforme o nome da pessoa: ");
            scanf(" %s", &nome);
            printf("\nInforme o telefone: (xx-xxxxx-xxxx): ");
            scanf(" %s", &fone);
            printf("\nInforme o e-mail: ");
            scanf(" %s", &email);

            //verifico se o nome digitado é maior que o ultimo nome registrado
            if (strcmp(nome, pessoa[i].nome) > 0) {

                    //O nome digitado é MAIOR que o ultimo nome da lista
                    //acrescento o nome registrado ao fim da lista
                    strcpy(pessoa[i+1].nome, nome);
                    strcpy(pessoa[i+1].fone, fone);
                    strcpy(pessoa[i+1].email, email);
                    //incremento a qtde
                    *qtde = *qtde + 1;
                    printf("\nRegistrado com sucesso!");
            }
            else {

                //O nome digitado é MENOR que o ultimo nome da lista
                //enquanto o nome digitado for menor que o nome atual da lista(comecando do ultimo)
                while ((strcmp(nome, pessoa[i].nome) < 1)) {

                    //armazeno o registro atual na próxima posição do vetor
                    strcpy(pessoa[i+1].nome, pessoa[i].nome);
                    strcpy(pessoa[i+1].fone, pessoa[i].fone);
                    strcpy(pessoa[i+1].email, pessoa[i].email);

                    //decremento i para acessar o elemento anterior
                    i--;
                }

                //armazeno o registro informado pelo usuario na posição correta do vetor
                strcpy(pessoa[i+1].nome, nome);
                strcpy(pessoa[i+1].fone, fone);
                strcpy(pessoa[i+1].email, email);

                //incremento a qtde
                *qtde = *qtde + 1;
                printf("\nRegistrado com sucesso!");
            }
        }
        else {

            printf("\nNão é possível adicionar mais registros, agenda cheia!");
        }
    }
}

//procedimento para listar todos os registros da agenda
//parametros vetor agenda(por ponteiro) e ponteiro *qtde para total de registros
void listarAgenda(tPessoa* pessoa, int* qtde) {

    //variavel i para o indice do for
    int i;

    //percorro a agenda e mostro os dados
    for (i = 0; i < *qtde; i++) {

        printf("\nNome: %s", pessoa[i].nome);
        printf("\nFone: %s", pessoa[i].fone);
        printf("\ne-mail: %s\n", pessoa[i].email);
    }
}

int main() {

    tPessoa agenda[MAX];            //vetor que armazenará os registros das pessoas
    tPessoa* ptAgenda;              //ponteiro para o vetor
    int opcao, totalRegistrado;     //opção para selecionar inserir, listar ou sair e totalRegistrado armazena a qtde de registros cadastrados
    int*  ptTotal;                  //ponteiro para o total de registros

    //inicializo as variaveis
    totalRegistrado = 0;
    ptTotal = &totalRegistrado;
    ptAgenda = &agenda;

    //laço principal, seleciona a opção do usuario
    do {

        printf("\n************* Agenda para Registros de Pessoas *************");
        printf("\n\nSelecione uma opcao: \n\n  1) Inserir novo registro\n  2) Listar registros\n  3) Sair\n\nOpção: ");
        scanf("%d", &opcao);

        //limpa a tela no linux
        system("clear");

        switch (opcao) {

            case 1:

                //chama procedimento para inserir registro
                inserirPessoa(ptAgenda, ptTotal);
                break;

            case 2:

                //chama procedimento para listar todos os registros
                printf("\nRelatório de registros cadastrados: \n");
                listarAgenda(ptAgenda, ptTotal);
                break;

            case 3:

                //sair do programa
                break;

            default:

                //se não for digitado 1, 2 ou 3 mostra opção inválida e solicita novamente
                printf("\nOpção inválida.");
        }

    //quando opção for igual a 3 sai do laço
    } while (opcao != 3);
}
