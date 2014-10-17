/*

AlgProgr2 AA6.4: Máximo Divisor Comum (Programa C)
Escreva uma FUNÇÃO na LINGUAGEM C que calcule o MDC (máximo divisor comum) entre 2 números
inteiros. Dois números naturais sempre têm divisores comuns. Por exemplo, os divisores comuns de
12 e 18 são 1, 2, 3 e 6. Dentre os divisores comuns, 6 é o maior. Então chamamos o 6 de máximo
divisor comum de 12 e 18 e indicamos por MDC(12,18) = 6. Alguns exemplos adicionais:
MDC(6, 12) = 6 MDC(12, 20) = 4 MDC(20, 24) = 4 O protótipo da função está abaixo definido.
int MDC (int n1, int n2)

Autor: Felipe Nogueira de Souza Data: 19/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//função para calcular o maximo divisor comum
int calculaMDC(int n1, int n2) {

    //declara variaveis
    int menor, i, n_mdc;

    //verifica qual o menor numero
    if (n1 > n2) {

        menor = n2;
    }
    else {

        menor = n1;
    }

    //verifica divisores comuns até o menor numero e armazena o maior deles
    for (i = 1; i <= menor; i++) {

        if ((n1 % i == 0) && (n2 % i == 0)) {

            n_mdc = i;
        }
    }

    return n_mdc;
}

//função principal
int main(int argc, char* argv[]) {

    //declara duas variaveis para numeros inteiros
    int num1, num2;

    //solicita e armazena os dois numeros
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    //calcula o maximo divisor comum dos numeros informados
    printf("O maximo divisor comum e: %d", calculaMDC(num1, num2));

    system("PAUSE");
}
