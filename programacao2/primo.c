/*

AlgProgr2 AA6.3: Número Primo (Programa C)
Escreva uma FUNÇÃO na LINGUAGEM C que aceite como parâmetro um número inteiro positivo
(i.e. número maior que zero) e retorne se o número é primo (i.e., valor de retorno da função
deve ser +1) ou se o número não é primo (i.e., valor de retorno da função deve ser 0).
Se o número não for um número inteiro positivo (por exemplo, números 0, -1 ou -3), deve-se
mostrar uma mensagem de erro e a função deve retornar o valor -1. int EhNumeroPrimo(int n)
Um número inteiro maior que 1 é chamado de número primo se os seus únicos divisores positivos
forem 1 e ele próprio. Os primeiros números primos são 2, 3, 5, 7, 11 e 13.

Autor: Felipe Nogueira de Souza Data: 19/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//função que verifica se um numero é primo
int primo(int n) {

    //declara variaveis para indice e contador
    int i, cont;
    cont = 0;

    //verifica validade do numero, se invalido retorna -1
    if (n < 1) {

        printf("Numero invalido!");
        return -1;
    }

    //entra no else se o numero for valido
    else {

        //verifica por quais numeros o numero informado é divisivel
        for (i = 1; i <= n; i++) {

            if (n%i == 0) {

                cont++;
            }
        }

        //se contador for maior que 2, o numero não é primo e retorna 0, senão retorna 1
        if (cont > 2) {

            return 0;
        }
        else {

            return 1;
        }
    }
}

//função principal
int main(int argc, char* argv[]) {

    //declara uma variavel inteira
    int num;

    //solicita e armazena um numero inteiro
    printf("Informe um numero inteiro para verificar se e primo: ");
    scanf("%d", &num);

    //exibe o resultado chamando a função primo
    printf("%d", primo(num));

    system("PAUSE");
}
