/*

AlgProgr2 AA6.5: Leitura e Escrita de Dados de um Aluno (Programa C)
Na LINGUAGEM C, implemente PROCEDIMENTOS para a LEITURA e a ESCRITA dos dados de um aluno.
A leitura dos dados de um aluno deve ser realizada do teclado usando funções tais como scanf()
e gets() e a escrita dos dados de um aluno deve ser feita na saída padrão (i.e. monitor) usando
a função printf(). Cada aluno possui os seguintes dados: RA (inteiro), nome (string), IRA (float)
e sexo (char, sendo M para masculino e F para feminino). Complete a lista de parâmetros formais
de cada procedimento abaixo (i.e. de cada função com valor de retorno void) para tratar os dados
de alunos. void LerDadosAluno(...) void EscreverDadosAluno(...) Atenção para o uso de passagem
de parâmetros por valor ou passagem de parâmetros por referência.

Autor: Felipe Nogueira de Souza Data: 19/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//definindo tipo para aluno
typedef struct {

    int nRA;
    char nome[30];
    float ira;
    char sexo;

} tAluno;

//unção que le os dados de um aluno, parametros por referencia
void LerDadosAluno(tAluno *dadosAluno) {

    //solicita e armazena os dados do aluno
    printf("Informe o numero do RA do aluno: ");
    scanf("%d", &(*dadosAluno).nRA);

    printf("Informe o nome do aluno: ");
    scanf("%s", &(*dadosAluno).nome);

    printf("Informe o numero do IRA do aluno: ");
    scanf("%f", &(*dadosAluno).ira);

    printf("Informe o sexo do aluno: ");
    scanf("%s", &(*dadosAluno).sexo);
}

//função que escreve os dados do aluno, parametros por referencia
void EscreverDadosAluno(tAluno *dadosAluno) {

    //exibe os dados do aluno
    printf("Os dados do alunos sao: \n");
    printf("RA: %d \n", (*dadosAluno).nRA);
    printf("Nome: %s \n", (*dadosAluno).nome);
    printf("IRA: %f \n", (*dadosAluno).ira);
    printf("Sexo: %c \n", (*dadosAluno).sexo);
}

//função principal
int main(int argc, char* argv[]) {

    //declarando variaveis
    tAluno aluno1;      //variavel aluno do tipo tAluno
    tAluno* ponteiro;   //ponteiro do tipo tAluno
    ponteiro = &aluno1; //ponteiro aponta para o endereço de memoria de aluno1

    //chama função que le os dados de um aluno
    LerDadosAluno(ponteiro);

    //chama função que escreve os dados de um aluno
    EscreverDadosAluno(ponteiro);

    system("PAUSE");
}
