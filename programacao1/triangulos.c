/*

AA 2.2 - Formação de triângulos com pontos no espaço
Contexto
Três pontos em um plano, se conectados por segmentos de reta, formam um triângulo.
Informações
Cada ponto em um plano é definido por suas coordenadas. 
Sendo x e y os eixos ortogonais que definem o plano xy, cada ponto pi 
pode ser especificado pelo par (xi, yi).
A distância entre dois pontos no plano pode ser dada 
por \sqrt{(x_1 - x_2)^2 + (y_1 - y_2)^2}.
A área de um triângulo pode ser calculada por meio de seu semiperímetro. 
Se o semiperímetro é dado por s, então a área pode ser dada por 
\sqrt{s(s-a)(s-b)(s-c)}, sendo a, b e c os comprimentos dos lados do triângulo. 
O valor do semiperímetro é dado por \frac{a + b + c}{2}.
Especificação
Escreva um algoritmo que permita, a partir das coordenadas de 3 pontos no plano, 
Calcular e escrever a área do triângulo formado.
Uma codificação do algoritmo em C também deve ser elaborada.

AUTOR: FELIPE NOGUEIRA DE SOUZA 27/04/2014

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    //declaração das variáveis
    float x1, y1, x2, y2, x3, y3, s, a, b, c, area = 0;
  
    printf("\n*******************************************************************************");
    printf("\n\n********************** Calculando a area de um triangulo **********************");
    printf("\n\n*******************************************************************************");
  
    //solicita e recebe as coordenadas
    printf("\n\nDigite o primeiro valor da primeira coordenada: ");
    scanf("%f", &x1);
    
    printf("\n\nDigite o segundo valor da primeira coordenada: ");  
    scanf("%f", &y1);
  
    printf("\n\nDigite o primeiro valor da segunda coordenada: ");
    scanf("%f", &x2);
  
    printf("\n\nDigite o segundo valor da segunda coordenada: ");
    scanf("%f", &y2);
  
    printf("\n\nDigite o primeiro valor da terceira coordenada: ");
    scanf("%f", &x3);
  
    printf("\n\nDigite o segundo valor da terceira coordenada: ");
    scanf("%f", &y3);
  
    //calcula a distancia entre dois pontos do plano
    a = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
    b = sqrt(pow((x1 - x3),2) + pow((y1 - y3),2));
    c = sqrt(pow((x2 - x3),2) + pow((y2 - y3),2));
  
    //calcula semiperimetro
    s = (a+b+c)/2;
  
    //calcula area do triangulo
    area = sqrt(s*(s-a)*(s-b)*(s-c));
  
    //exibe os resultados
    printf("\n\nOs valores digitados para a primeira coordenada foram: %f %f", x1, y1); 
    printf("\nOs valores digitados para a segunda coordenada foram: %f %f", x2, y2); 
    printf("\nOs valores digitados para a terceira coordenada foram: %f %f", x3, y3); 
  
    printf("\n\nO segmento A e igual a: %f", a);
    printf("\nO segmento B e igual a: %f", b);  
    printf("\nO segmento C e igual a: %f", c);
  
    printf("\nO semierimetro e igual a: %f", s);
  
    printf("\n\nA area do tringulo e igual a: %f", area);  
  
  
    printf("\n\n\n");
    system("PAUSE");	
    return 0;

}
