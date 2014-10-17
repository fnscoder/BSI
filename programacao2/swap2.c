/*

AlgProgr2 AA6.8: Swap de Números Inteiros (Programa C)
Faça um PROGRAMA C para resolver o problema abaixo descrito.
Implemente um PROCEDIMENTO chamado Swap que faça a troca de valores entre 2 variáveis do tipo
inteiro. Mais especificamente, deve-se passar 2 variáveis do tipo inteiro para o procedimento
Swap e após a sua execução os valores destas variáveis devem ser trocados. Por exemplo, se a
variável A possuir o valor 1 e a variável B possuir o valor -8, após a execução do procedimento
Swap a variável A possuirá o valor -8 e a variável B possuirá o valor 1. void Swap(...)
Dica: Use passagem de parâmetros por referência para conseguir fazer com que o efeito da troca
de valores entre as variáveis seja visível fora do procedimento, ou seja, seja visível no
comando que chamou o procedimento.

Autor: Felipe Nogueira de Souza Data: 22/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//função sem retorno (procedimento) para inverter dois numeros inteiros
void Swap(int* pt1, int* pt2) {

    //variavel auxiliar para a inversão
    int aux;

    //inverte os valores utilizando ponteiros
    aux = *pt1;
    *pt1 = *pt2;
    *pt2 = aux;
}

//função principal
int main(int argc, char* argv[]) {

    //variaveis
    int num1, num2;             //numeros
    int* pontNum1;              //ponteiros para os numeros
    int* pontNum2;              //ponteiros para os numeros

    //atribui o endereço de memoria das variaveis para os ponteiros
    pontNum1 = &num1;
    pontNum2 = &num2;

    //solicita e armazena dois numeros
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    //informa a ordem que os numeros foram digitados
    printf("\nOs numeros digitados foram: \n1º) %d\n2º) %d", num1, num2);

    //chama função que inverte os numeros
    Swap(pontNum1, pontNum2);

    //exibe os numeros na ordem inversa
    printf("\n\nApos a inversão os numeros ficaram na seguinte ordem:\n");

    printf("1º) %d\n2º) %d", num1, num2);

    system("PAUSE");
}
