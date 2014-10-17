/*

AlgProgr2 AA6.1: Maior Valor (Programa C)
Implemente uma FUNÇÃO na LINGUAGEM C que fornecidos 3 números inteiros, retorne o maior valor
dentre estes 3 números. int MaiorValor (int valor1, int valor2, int valor3)

Autor: Felipe Nogueira de Souza 19/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

//funçao que retorna o maior valor
int maiorValor(int valor1, int valor2, int valor3){

    //verifica se o primeiro valor e o maior
    if ((valor1 > valor2) && (valor1 > valor3)){

        return valor1;
    }
    //verifica se o segundo valor é o maior
    else if ((valor2 > valor1) && (valor2 > valor3)){

        return valor2;
    }
    //verifica se o terceiro valor é o maior
    else if ((valor3 > valor1) && (valor3 > valor2)){

        return valor3;
    }
    //se o primeiro e o segundo valor forem iguais, verifica se o terceiro é maior, senão retorna primeiro valor
    else if ((valor1 == valor2)){

        if (valor3 > valor1){

            return valor3;
        }
        else {

            return valor1;
        }
    }
    //se valor 1 e valor 3 forem iguais, verifica valor 2, se for maior retorna o valor 2 senão retorna o valor 1
    else if ((valor1 == valor3)){

        if (valor2 > valor1){

            return valor2;
        }
        else {

            return valor1;
        }
    }
    //se valor 2 e 3 forem iguais verifca se valor 1 é maior, se for retorna valor 1 senão retorna valor 2
    else if ((valor2 == valor3)){

        if (valor1 > valor2){

            return valor1;
        }
        else {

            return valor2;
        }
    }

}

//função principal
int main(int argc, char *argv[]){

    //declara as variaveis para os tres numeros inteiros
    int num1, num2, num3;

    //solicita e armazena os tres numeros
    printf("informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("informe o segundo numero: ");
    scanf("%d", &num2);

    printf("informe o terceiro numero: ");
    scanf("%d", &num3);

    //exibe o resultado utilizando na saida a função maiorValor
    printf("O maior numero e: %d", maiorValor(num1, num2, num3));

    system("PAUSE");
}
