/*
AA 1.1 – Dependência linear
Introdução
No contexto desse exercício, considera-se a dependência linear entre duas sequências valores
numéricos reais como a possibilidade de, a partir da primeira, se chegar à segunda,
multiplicando-se cada elemento da primeira por um valor constante.
Exemplo:
Sequência 1: (2; 6; -2; 0; 10; 9)
Sequência 2: (1; 3; -1; 0; 5; 4,5)
As sequências são linearmente dependentes,
pois a sequência 2 é a sequência 1 multiplicada por 0,5.
Objetivo
Dada uma matriz de valores reais, determinar se existem quaisquer duas linhas que sejam
dependentes linearmente. Cada linha determina uma sequência.
O programa
Um programa deve ser escrito na linguagem C para ler uma matriz de dimensões MxN
(M e N fornecidos pelo usuário).
Após a leitura, todos os valores iguais a zero devem ser substituídos pelo valor 1.
Esta etapa tem como única utilidade eliminar valores nulos e evitar divisões por zero.
Ela não tem função nenhuma para o programa nem para a determinação de linearidade;
apenas é uma simplificação das verificações necessárias. Alternativamente, podem ser usadas
matrizes sem valores nulos.
A matriz "corrigida" deve ser apresentada, juntamente com uma mensagem que indica se há ou
não duas linhas dessa matriz que sejam linearmente dependentes. Não é preciso identificar
quais são essas linhas.

AUTOR: Felipe Nogueira de Souza Data: 04/10/2014
*/

#include <stdio.h>
#include <stdlib.h>

//define tamanho maximo para linhas e colunas
#define MAX_LINHAS 500
#define MAX_COLUNAS 500

//define tipo tMatriz que armazena os campos inteiros linhas e colunas e dados, uma matriz de reais
typedef struct {

    int linhas;
    int colunas;
    float dados[MAX_LINHAS][MAX_COLUNAS];
}tMatriz;

void exibeTopo() {

    printf("\n*****************************************************");
    printf("\n***** DEPENDÊNCIA LINEAR ENTRE LINHAS DA MATRIZ *****");
    printf("\n*****************************************************\n\n");
}

//procedimento que le matriz
void leiaMatriz(tMatriz* matriz) {

    //variaveis para indice
    int i, j;

    exibeTopo();

    //solicita e recebe quantidade de linhas e colunas, no minimo 2 e no máximo o valor definido acima para maximo de linhas e colunas
    do {
        printf("\nInforme quantidade de linhas e colunas \n(mínimo 2 linhas e 2 colunas e máximo 500 linhas e 500 colunas\n");
        printf("\nLinhas: ");
        scanf("%d", &(*matriz).linhas);

        printf("\nColunas: ");
        scanf("%d", &(*matriz).colunas);
    } while (((*matriz).linhas > MAX_LINHAS) || ((*matriz).colunas > MAX_COLUNAS) || ((*matriz).linhas < 2) || ((*matriz).colunas < 2));

    system("clear");//limpa tela no linux

    exibeTopo();

    printf("\nInforme os dados da matriz:");

    //laço para percorrer as linhas da matriz
    for (i = 0; i < (*matriz).linhas; i++) {

        //laço para percorrer as colunas da matriz
        for (j = 0; j < (*matriz).colunas; j++) {

            //solicita e armazena os valores da matriz
            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%f", &(*matriz).dados[i][j]);
        }
    }
}

//procedimento para escrever a matriz
void escrevaMatriz(tMatriz* matriz) {

    int i, j;

    system("clear");//limpa tela no linux

    exibeTopo();

    //laços para percorrer as linhas e colunas da matriz
    for (i = 0; i < (*matriz).linhas; i++) {

        for (j = 0; j < (*matriz).colunas; j++) {

            //exibe os dados
            printf("\nMatriz[%d][%d]: %f", i, j, (*matriz).dados[i][j]);
        }
    }
}

//procedimento que corrigi a matriz, substitui os nulos (0) pelo numero 1 (um)
void corrigiMatriz(tMatriz* matriz) {

    int i, j;

    //laços para percorrrer a matriz
    for (i = 0; i < (*matriz).linhas; i++) {

        for (j = 0; j < (*matriz).colunas; j++) {

            //se o valor for igual a 0 altero para 1
            if ((*matriz).dados[i][j] == 0) {

                (*matriz).dados[i][j] = 1;
            }
        }
    }
}

//função que verifica a linearidade
int verificaLinearidade(tMatriz* matriz) {

    //variavel linearidade recebe 0 se não houver linearidade
    int i, j, k, l, linearidade;

    //variaveis para coeficiente1 coeficiente2 e temp para realizar os calculos necessários
    float coef1, coef2, temp;

    //inicializo as variaveis i e j com zero para acessar o primeira linha e primeira coluna
    i = 0;              //indice linha 1
    j = 0;              //indice coluna 1
    k = 1;              //indice linha 2
    l = 1;              //indice coluna 2
    linearidade = 0;    //inicializo com 0, só mudará para 1 se houver linearidade entre duas linhas.

    //enquanto a variavel i for menor que a quantidade de linhas -1
    while (i < (*matriz).linhas-1) {

        //enquanto k for menor que quantidade de linhas
        while (k < (*matriz).linhas) {

            //verifico linearidade entre duas colunas da linha i e linha k
            coef1 = (*matriz).dados[i][j]/(*matriz).dados[k][j];
            coef2 = (*matriz).dados[i][l]/(*matriz).dados[k][l];

            //se houver linearidade (coef1 == coef2), verifico as próximas colunas
            if (coef1 == coef2) {

                //incremento l para ir para proxima coluna
                l++;

                //entro neste laço para percorrer as outras colunas
                while (l < (*matriz).colunas) {

                    //calculo coef2 com a nova coluna
                    coef2 = (*matriz).dados[i][l]/(*matriz).dados[k][l];

                    //se coef1 != coef2 atribuo a quantidade de colunas total para l e forço a saída do loop
                    if(coef1 != coef2) {

                        l = (*matriz).colunas;
                    }
                    //senão incremento l para ir para proxima coluna
                    else {

                        l++;
                    }
                }

                //após chegar ao fim das colunas verifico se coef1 = coef2,
                //se for atribuo 1 a linearidade e retorno linearidade, pois existe
                //dependencia linear entre essas duas linhas e não preciso continuar
                //verificando as proximas
                if (coef1 == coef2) {

                    linearidade = 1;
                    return linearidade;
                }
            }

            //neste ponto terminei a verificao de duas linhas e não existe linearidade,
            //portanto continuo e incremento k para verificar proxima linha
            k++;

            //reseto os valores de j e l para começar a verificação de duas novas linhas
            j = 0;
            l = 1;
        }

        //incremento i e k passa a valer i + 1, vou verificar as proximas linhas
        i++;
        k = i+1;
    }
    //após veirificar todas as linhas retorno linearidade
    return linearidade;
}

//função principal
int main() {

    //variaveis matriz e ponteiro ptMatriz do tipo tMatriz
    tMatriz matriz;
    tMatriz* ptMatriz;

    //atribuo ao ponteiro o endereço de memoria de matriz
    ptMatriz = &matriz;

    //chamo procedimento que le a matriz
    leiaMatriz(ptMatriz);

    //exibo a matriz lida
    escrevaMatriz(ptMatriz);

    //corrijo a matriz substituindo os nulos por numeros 1
    corrigiMatriz(ptMatriz);

    //exibo a matriz corrigida
    printf("\n\nMatriz corrigida (substituídos os 0 (zeros) por 1 (um)):\n");

    escrevaMatriz(ptMatriz);

    //verifico se há linearidade
    if (verificaLinearidade(ptMatriz) == 1) {

        printf("\n\nExistem pelo menos duas linhas com depêndencia linear nesta matriz.\n");
    }
    else {

        printf("\n\nNão existe dependência linear nesta matriz.\n");
    }
}
