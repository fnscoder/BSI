/*

AA 4.1 - C�lculo do fatorial
Objetivo
Usar o comando de repeti��o para fazer multimplica��es sucessivas
Informa��es
O fatorial de um n�mero inteiro k (maior ou igual a zero) pode ser calculado
pela multiplica��o sucessiva 2 * 3 * 4... * k. O fatorial de zero � definido
como 1 (0! = 1).
Especifica��o
Elabore um algoritmo para, dado um valor inteiro maior ou igual a zero,
calcular e escrever seu fatorial.

AUTOR: FELIPE NOGUEIRA DE SOUZA 13/05/2014

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //declara e inicializa as variaveis
    int num, fatorial, i;
    num = 0;
    fatorial = 1;

    printf("\n\n================================================================================");
    printf("\n====================== CALCULANDO FATORIAL DE UM NUMERO ========================");
    printf("\n================================================================================");

    //solicita e recebe um numero
    printf("\n\n   Digite um numero maior ou igual a zero: ");
    scanf("%d", &num);

    printf("\n\n================================================================================");

    //verifica se o numero e valido
    if (num < 0)
    {
        printf("\n   O numero digitado e invalido!");
    }
    else
    {
        //calcula fatorial
        for (i = 0; i < num; i++)
        {
            fatorial = fatorial * (i + 1);
        }

        //exibe o fatorial
        printf("\n   O fatorial de %d e: %d", num, fatorial);
    }

    printf("\n\n================================================================================");

    printf("\n\n\n");
    system("PAUSE");
    return 0;
}
