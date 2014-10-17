/*

AlgProgr2 - AA5.4: Procedimento e Função
Esta é uma atividade teórica. Na linguagem C existe apenas o conceito de FUNÇÃO para
implementar sub-rotinas. Explique e exemplifique como o conceito de FUNÇÃO da
linguagem C pode ser usado para implementar o conceito de PROCEDIMENTO e o conceito de
FUNÇÃO que foi aprendido quando você estudou ALGORITMOS. O exemplo pode ser apenas um
trecho de código parcial, não precisa ser completo, mas tem que mostrar a essência de
como os conceitos são implementados na linguagem C.

FUNÇÕES E PROCEDIMENTOS EM LINGUAGEM C
A diferença entre funções e procedimentos é que funções realizam determinado trecho de
código e retornam uma informação. Quando definimos uma função é preciso determinar qual
o tipo de retorno que ela terá (int, float etc.).
Um procedimento apenas realiza o trecho de código e não retorna valor. Em C, podemos
definir uma função com tipo de retorno void. Isso indica que a função retornará vazio,
ou seja, não haverá nenhuma informação de retorno.
Abaixo temos um pequeno exemplo de função e procedimento em linguagem C

Autor: Felipe Nogueira de Souza Data: 06/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//procedimento verifica a idade e exibe mensagem na tela, mas não retorna valor
void verificaIdade(int idadeAluno){
    if(idadeAluno < 18){
        printf("O aluno é menor de idade!");
    }
    else {
        printf("O aluno é maior de idade!");
    }
}

//função calcula e retorna o ano de nascimento - tipo int
int anoNascimento(int idadeAluno){

    int ano;
    ano = 2014 - idadeAluno;
    return ano;
}

int main(int argc, char *argv[]){

    int idade;

    //solicita e recebe idade do aluno
    printf("Informe a idade do aluno: ");
    scanf("%d", &idade);

    //chama procedimento que verifica idade - maior ou menor de idade
    verificaIdade(idade);

    //chama função que calcula e retorna o ano de nascimento
    printf("\nO ano de nascimento é: %d", anoNascimento(idade));
}
