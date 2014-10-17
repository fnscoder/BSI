/*
AA 2.3 - Consistência de datas
Contexto
Verificações de consistência são importantes para os algoritmos. 
O objetivo é verificar se datas são válidas.
Informações
Para esta atividade, são consideradas datas válidas aquelas em que o número de 
dias está nos limites usuais, o que depende do mês em questão. 
Assim, são considerados as seguintes faixas de dias:
Mês	        Intervalo
Janeiro	    1 a 31
Fevereiro	1 a 28
Março	    1 a 31
Abril	    1 a 30
Maio	    1 a 31
Junho	    1 a 30
Julho	    1 a 31
Agosto	    1 a 31
Setembro	1 a 30
Outubro	    1 a 31
Novembro	1 a 30
Dezembro	1 a 31
Anos bissextos não devem ser considerados, de forma que Fevereiro sempre será 
considerado com um máximo de 28 dias.
Os meses, que serão digitados na forma numérica, são válidos na faixa de 1 a 12.
Para os anos, será considerado que anos negativos simbolizem A.C, 
enquanto positivos sejam D.C. O único valor inválido para o ano é 0.
Especificação
Deve ser elaborado um algoritmo para ler duas datas, cada uma consistindo 
em dia, mês e ano, dados em formato numérico (e.g., 20, 3 e 2000 para 20/3/2000). 
Para cada data, deve ser informado se a data é válida ou não. 
A validade das datas deve ser feita conforme a verificação dos intervalos especificada acima.
Para esta codificação, não podem ser usados comandos condicionais. 
O resultado da verificação deverá ser feito usando-se uma variável lógica, 
a qual será escrita no final do algoritmo. 
Trabalhos que usarem o comando condicional não serão avaliados.

Autor: FELIPE NOGUEIRA DE SOUZA  27/04/2014

*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //declarando e inicializando as variaveis
  int mes1, dia1, ano1, data1, mes2, dia2, ano2, data2 = 0;
  
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
  data1 = ((mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || 
            mes1 == 10 || mes1 == 12) && (dia1 > 0 && dia1 < 32)&&(ano1 != 0))||
            ((mes1 == 4 || mes1 == 6 || mes1 == 8 || mes1 == 11) && 
            (dia1 > 0 && dia1 < 32)&&(ano1 != 0))||((mes1 == 2)&&
            (dia1 > 0 && dia1 < 29)&&(ano1 != 0));
  
  //verificando a validade da data 2
  data2 = ((mes2 == 1 || mes2 == 3 || mes2 == 5 || mes2 == 7 || mes2 == 8 || 
            mes2 == 10 || mes2 == 12) && (dia2 > 0 && dia2 < 32)&&(ano2 != 0))||
            ((mes2 == 4 || mes2 == 6 || mes2 == 8 || mes2 == 11) && 
            (dia2 > 0 && dia2 < 32)&&(ano2 != 0))||((mes2 == 2)&&
            (dia2 > 0 && dia2 < 29)&&(ano2 != 0));
  
  //exibindo o resultado
  printf("\n\nA PRIMEIRA data digitada foi: %d %d %d", dia1, mes1, ano1);          
  printf("\n\nValidade da PRIMEIRA data: %d", data1);

  printf("\n\nA SEGUNDA data digitada foi: %d %d %d", dia2, mes2, ano2);
  printf("\n\nValidade da SEGUNDA data: %d", data2);  
  
  
  printf("\n\n\n");
  system("PAUSE");
  
  return 0;

}
