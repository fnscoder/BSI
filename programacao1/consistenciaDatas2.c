/*

AA 3.3 - Consistência de datas

Contexto
Verificações de consistência são importantes para os algoritmos.
O objetivo é verificar se datas são válidas e quais as relações entre elas.

Informações
Para esta atividade, são consideradas datas válidas aquelas em que o número de
dias está nos limites usuais, o que depende do mês em questão. Assim, são
considerados as seguintes faixas de dias:

Mês	Intervalo
Janeiro	      1 a 31
Fevereiro	  1 a 28
Março	      1 a 31
Abril	      1 a 30
Maio	      1 a 31
Junho	      1 a 30
Julho	      1 a 31
Agosto	      1 a 31
Setembro	  1 a 30
Outubro	      1 a 31
Novembro	  1 a 30
Dezembro	  1 a 31

Anos bissextos não devem ser considerados, de forma que Fevereiro sempre será
considerado com um máximo de 28 dias.
Os meses, que serão digitados na forma numérica, são válidos na faixa de 1 a 12.
Para os anos, será considerado que anos negativos simbolizem A.C, enquanto
positivos sejam D.C. O único valor inválido para o ano é 0.

Especificação
O trabalho deve fazer a leitura de duas datas, sendo que, para cada uma, devem
ser lidos separadamente dia, mês e ano (usando-se variáveis inteiras).
Cada data deve ser verificada quanto à sua validade pelos critérios apresentados
acima e também devem ser comparadas quanto à cronologia, dizendo se são iguais,
se a primeira é anterior à segunda ou se a segunda é anterior à primeira.
Devem ser escritas as mensagens pertinentes.

Autor: FELIPE NOGUEIRA DE SOUZA 04/05/2014
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //declarando e inicializando as variaveis
    int mes1, dia1, ano1, validadeData1, mes2, dia2, ano2, validadeData2;

    mes1 = 0;
    dia1 = 0;
    ano1 = 0;
    validadeData1 = 0;
    mes2 = 0;
    dia2 = 0;
    ano2 = 0;
    validadeData2 = 0;

    printf("\n*******************************************************************************");
    printf("\n\n******************************* VALIDANDO DATAS *******************************");
    printf("\n\n*******************************************************************************");

    //solicitando e recebendo a primeira data
    printf("\n\n\nPRIMEIRA DATA");
    printf("\n\nDigite o dia: ");
    scanf("%d", &dia1);

    printf("\nDigite o mes conforme tabela abaixo \n\n Janeiro.....1 \n Fevereiro...2 \n Marco.......3 \n Abril.......4 \n Maio........5 \n Junho.......6 \n Julho.......7 \n Agosto......8 \n Setembro....9 \n Outubro....10 \n Novembro...11 \n Dezembro...12\n\nMes: ");
    scanf("\n%d", &mes1);

    printf("\n\nDigite o ano: ");
    scanf("%d", &ano1);

    //solicitando e recebendo a segunada data
    printf("\n\n\nSEGUNDA DATA");
    printf("\n\nDigite o dia: ");
    scanf("%d", &dia2);

    printf("\nDigite o mes conforme tabela abaixo \n\n Janeiro.....1 \n Fevereiro...2 \n Marco.......3 \n Abril.......4 \n Maio........5 \n Junho.......6 \n Julho.......7 \n Agosto......8 \n Setembro....9 \n Outubro....10 \n Novembro...11 \n Dezembro...12\n\nMes: ");
    scanf("\n%d", &mes2);

    printf("\n\nDigite o ano: ");
    scanf("%d", &ano2);

    //verificando a validade da data 1
    if (((mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 ||
                mes1 == 10 || mes1 == 12) && (dia1 > 0 && dia1 < 32)&&(ano1 != 0))||
                ((mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11) &&
                (dia1 > 0 && dia1 < 31)&&(ano1 != 0))||((mes1 == 2)&&
                (dia1 > 0 && dia1 < 29)&&(ano1 != 0)))
    {
        printf("\n\nA primeira data digitada %d/%d/%d e valida", dia1, mes1, ano1);
        validadeData1 = 1;
    }
    else
    {
        printf("\n\nA primeira data digitada %d/%d/%d nao e valida", dia1, mes1, ano1);
    }

    //verificando a validade da data 2
    if (((mes2 == 1 || mes2 == 3 || mes2 == 5 || mes2 == 7 || mes2 == 8 ||
                mes2 == 10 || mes2 == 12) && (dia2 > 0 && dia2 < 32)&&(ano2 != 0))||
                ((mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11) &&
                (dia2 > 0 && dia2 < 31)&&(ano2 != 0))||((mes2 == 2)&&
                (dia2 > 0 && dia2 < 29)&&(ano2 != 0)))
    {
        printf("\n\nA segunda data digitada %d/%d/%d e valida\n\n", dia2, mes2, ano2);
        validadeData2 = 1;
    }
    else
    {
        printf("\n\nA segunda data digitada %d/%d/%d nao e valida\n\n", dia2, mes2, ano2);
    }

    if (validadeData1 == 1 && validadeData2 == 1)
    {
        if (ano1 == ano2)
        {
            if (mes1 == mes2)
            {
                if (dia1 == dia2)
                {
                    printf("As datas sao iguais");
                }
                else if (dia1 > dia2)
                {
                    printf("A segunda data e anterior a primeira");
                }
                else
                {
                    printf("A primeira data e anterior a segunda");
                }
            }
            else if (mes1 > mes2)
            {
                printf("A segunda data e anterior a primeira");
            }
            else
            {
                printf("A primeira data e anterior a segunda");
            }
        }
        else if (ano1 > ano2)
        {
            printf("A segunda data e anterior a primeira");
        }
        else
        {
            printf("A primeira data e anterior a segunda");
        }
    }
    else
    {
        printf("\n\nNao e possivel comparar devido a validade das datas");
    }

    printf("\n\n\n");
    system("PAUSE");

    return 0;
}
