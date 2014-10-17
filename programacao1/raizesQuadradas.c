/*
AA 3.1 - Ra�zes quadradas
Contexto
Usualmente, a raiz quadrada � calculada para valores reais, desde que tais 
valores sejam maiores ou iguais a zero. Assim, ficam indefinidos c�lculos para 
valores negativos.
� preciso, por�m, fazer o c�lculo da raiz quadrada para qualquer valor real.
Especifica��o
A raiz quadrada de valores negativos podem ser expressas em n�meros imagin�rios.
Por exemplo, temos que \sqrt{-4} pode ser expresso como 2i, sendo que o valor i 
indica \sqrt{-1}.
Precisa-se que, para valores negativos, os c�lculos para a raiz sejam expressos 
na forma ni, sendo n um valor real.
Exemplos:
Entrada	Sa�da
  4	   2.00
 10.5  3.24
-17	   4.12i
 -1	   i ou 1.00i
-25	   5.00i
O que fazer
Deve ser desenvolvido um algoritmo para aceitar como entradas qualquer valor 
real (mesmo negativos) e calcular sua raiz quadrada. As sa�das devem ser as 
usuais para valores maiores ou iguais a zero e na forma ni para valores negativos. 
Apenas um n�mero deve ser calculado a cada execu��o.
Tamb�m um programa em C deve ser codificado a partir do algoritmo. O n�mero de 
casas decimais na sa�da pode ser definido por cada aluno, n�o precisando ser as 
duas casas decimais usadas nos exemplos.

Autor: Felipe Nogueira de Souza Data: 04/05/2014

*/

#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[])
{
        
    //declaracao de variaveis  
    float num, raiz = 0;
      
    //solicita e recebe um numero
    printf("\n\nDigite um numero ");
    scanf("%f", &num);
      
    //verifica se o numero e positivo ou negativo e extrai a raiz quadrada
    if (num < 0) 
    {
        num = num * -1;
        raiz = sqrt(num);
        printf("\n\n\nA raiz quadrada do numero digitado e %fi", raiz);      
    }
    else
    {
        raiz = sqrt(num);
        printf("\n\n\nA raiz quadrada do numero digitado e %f", raiz);     
    }
      
    printf("\n\n\n");
    system("PAUSE");	
    return 0;

}
