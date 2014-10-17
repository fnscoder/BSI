/*
Área minada
Introdução
Este trabalho tem como objetivo simular a travessia de um submarino por uma área minada,
tentando não colidir em nenhuma mina.

Para este fim, deve ser definido o campo como um quadriculado de MxN posições.
Cada posição deve ser livre ou conter uma mina.

A posição inicial do submarino deve ser na parte de baixo, em qualquer posição livre.
Na parte superior deve haver um ponto no qual o submarino deve estar para considerar sua
travessia como terminada.

O jogo
O programa consiste em definir um tabuleiro, marcando as áreas livres
e as minadas, colocando na última linha a posição inicial do submarino e na primeira linha um
ponto de saída.
O tabuleiro deve ser apresentado ao jogador, porém ocultando-se as minas.
A cada passo, deve ser solicitado ao usuário uma direção de movimento: esquerda, direita, para
cima, ou para baixo. De acordo com essa direção, a posição do submarino deve ser atualizada e o
tabuleiro deve ser redesenhado.
Após cada movimentação do submarino, deve ser dada uma dica ao usuário, indicando quantas minas
estão na vizinhança. Para a vizinhança, devem ser consideradas as oito posições do quadriculado
ao redor da posição do submarino. Com isso, o jogador consegue alguma ajuda para desviar das
minas.
O jogo termina quando o submarino vai para uma posição onde há uma mina (falha na missão) ou
quando chega à posição de saída (sucesso).

Autor: Felipe Nogueira de Souza Data: 05/10/2014

*/

//adicionada biblioteca time.h para gerar numero aleatório com a função rand()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//define tamanho maximo de linhas e colunas para o tabuleiro.
#define MAX_LINHAS 50
#define MAX_COLUNAS 50

//define tipo tMatriz que possui os campos linhas, colunas, dados (a matriz em si) e posição do submarino e da linha de chegada
typedef struct {

    int linhas;
    int colunas;
    int iSubmarino, jSubmarino, iChegada, jChegada;
    int dados[MAX_LINHAS][MAX_COLUNAS];
}tMatriz;

//procedimento que cria o submarino na ultima linha em coluna aleatória no inicio do jogo
void criarSubmarino(tMatriz* tab) {

    //atribui a variavel j um numero aleatorio até o limite de colunas
    int j = (rand()%(*tab).colunas);

    //posiciona o submarino na última linha e coluna de indice j
    (*tab).dados[(*tab).linhas - 1][j] = 2;

    //salvo a posição atual do submarino
    (*tab).iSubmarino = (*tab).linhas -1;
    (*tab).jSubmarino = j;
}

//procedimento para criar linha de chegada
void criarChegada(tMatriz* tab) {

    //atribui a variavel j um numero aleatorio até o limite de colunas
    int j = (rand()%(*tab).colunas);

    //posiciona a linha de chegada na primeira linha e coluna de indice j
    (*tab).dados[0][j] = 3;

    //salvo a posição atual da linha de chegada
    (*tab).iChegada = 0;
    (*tab).jChegada = j;
}

//procedimento que solicita o tamanho desejado para o tabuleiro
void tamanhoTabuleiro(tMatriz* tab) {

    //aceita no mínimo 2 e no máximo 50 para linhas e colunas
    do {
        printf("\nInforme o tamanho do TABULEIRO (Mínimo 2 e Máximo 50)");
        printf("\nObs. Para uma melhor visualização selecione no máximo 6 colunas.");
        printf("\nLinhas: ");
        scanf("%d", &(*tab).linhas);
        printf("\nColunas: ");
        scanf("%d", &(*tab).colunas);
    } while(((*tab).linhas < 2) || ((*tab).colunas < 2) || ((*tab).linhas > MAX_LINHAS) ||
            ((*tab).colunas) > MAX_COLUNAS);
}

//procedimento que preenche o tabuleiro com numeros 0 ou 1 aleatoriamente, exceto onde estiver o submarino (numero 2) e a linha de chegada (numero 3)
void preencherTabuleiro(tMatriz* tab) {

    //variavel nivel para selecionar o nivel de dificuldade 1) Fácil 2) Médio 3) Difícil
    int i, j, nivel;

    printf("\nSelecione o nível de dificuldade: \n 1) Fácil\n 2) Médio\n 3) Difícil \n");
    scanf("%d", &nivel);

    for (i = 0; i < (*tab).linhas; i++) {

        for (j = 0; j < (*tab).colunas; j++) {

            //verifica se o submarino e a linha de chegada não estão nesta posição
            if (((*tab).dados[i][j] != 2) && ((*tab).dados[i][j] != 3)) {


                //se nivel fácil
                if (nivel == 1) {
                    
                    //gero numero entre 0 e 9 aleatório, se for menor que 7 atribuo 0, senão atribuo 1
                    if ((rand()%10) < 7) {

                        (*tab).dados[i][j] = 0;
                    }
                    else {

                        (*tab).dados[i][j] = 1;
                    }

                }
                //nivel médio
                else if (nivel == 2) {

                    //gero numero entre 0 e 9 aleatório, se for menor que 5 atribuo 0, senão atribuo 1
                    if ((rand()%10) < 5){

                        (*tab).dados[i][j] = 0;
                    }
                    else {

                        (*tab).dados[i][j] = 1;
                    }

                }
                //nivel difícil
                else if (nivel == 3) {

                    //gero numero entre 0 e 9 aleatório, se for menor que 3 atribuo 0, senão atribuo 1
                    if ((rand()%10) < 3) {

                        (*tab).dados[i][j] = 0;
                    }
                    else {

                        (*tab).dados[i][j] = 1;
                    }

                }

            }
        }
    }
}

void iniciarTabuleiro(tMatriz* tab) {

    int i, j;

    //srand() usado para gerar numeros aleatorios
    srand((unsigned)time(NULL));

    //utiliza os procedimentos a seguir para iniciar o tabuleiro
    tamanhoTabuleiro(tab);

    criarSubmarino(tab);

    criarChegada(tab);

    preencherTabuleiro(tab);

    system("clear");//limpa tela no linux

    exibirTabuleiro(tab);

    exibirDicas(tab);

}

//procedimento que gera um novo tabuleiro após a movimentação do submarino
void atualizarTabuleiro(tMatriz* tab) {

    exibirTabuleiro(tab);

    exibirDicas(tab);
}

//procedimento para exibir o tabuleiro
void exibirTabuleiro(tMatriz* tab) {

    int i, j;

    printf("\n************************************************************************\n");
    printf("*************************...ÁREA  MINADA...*****************************\n");
    printf("************************************************************************\n");

    for (i = 0; i < (*tab).linhas; i++) {

        for (j = 0; j < (*tab).colunas; j++) {

            //exibe apenas o submarino e a chegada e esconde o campo minado
            if ((*tab).dados[i][j] == 2) {

                printf("| Submarino ");
            }
            else if ((*tab).dados[i][j] == 3) {

                printf("|  Chegada  ");
            }
            else {

                printf("|     x     ");
            }
        }
        printf("|\n");
    }
}

//procedimento para exibir dicas
void exibirDicas(tMatriz* tab) {

    //variavel cont para contar a quantidade de minas ao redor
    int cont = 0;

    //verifica se existem minas ao redor e acumula a quantidade em cont
    if ((*tab).dados[(*tab).iSubmarino - 1][(*tab).jSubmarino - 1] == 1) {

        cont++;
    }
    if ((*tab).dados[(*tab).iSubmarino - 1][(*tab).jSubmarino] == 1) {

        cont++;
    }
    if ((*tab).dados[(*tab).iSubmarino - 1][(*tab).jSubmarino + 1] == 1) {

        cont++;
    }
    if ((*tab).dados[(*tab).iSubmarino][(*tab).jSubmarino - 1] == 1) {

        cont++;
    }
    if ((*tab).dados[(*tab).iSubmarino][(*tab).jSubmarino + 1] == 1) {

        cont++;
    }
    if ((*tab).dados[(*tab).iSubmarino + 1][(*tab).jSubmarino-1] == 1) {

        cont++;
    }
    if ((*tab).dados[(*tab).iSubmarino + 1][(*tab).jSubmarino] == 1) {

        cont++;
    }
    if ((*tab).dados[(*tab).iSubmarino + 1][(*tab).jSubmarino+1] == 1) {

        cont++;
    }

    //exibe a quantidade de minas
    printf("\n************************************************************************");
    printf("\n******************* Dica: existem %d minas ao seu redor *****************", cont);
    printf("\n************************************************************************\n");

}

//função principal
int main() {

    //define variaveis
    //tipo tMatriz variavel tabuleiro e ptTab ponteiro para tabuleiro
    tMatriz tabuleiro;
    tMatriz* ptTab;

    int opcao;      //variavel opcao para selecionar a opcao de movimentaçao do jogador
    int jogar = 1;  //variavel para jogar novamente
    int status = 0; // status atual do jogador jogando = 0, perdeu = 1, ganhou = 2, Movimento para lado irregular = 3

    ptTab = &tabuleiro; //atribui o endereço de memoria de tabuleiro ao ponteiro ptTab

    do {

        printf("\n************************************************************************\n");
        printf("*************************...ÁREA  MINADA...*****************************\n");
        printf("************************************************************************\n");

        //inicia o tabuleiro
        iniciarTabuleiro(ptTab);

        //solicita movimentação
        printf("\nMovimente o submarino:\n 1) Esquerda\n 2) Direita\n 3) Para cima\n 4) Para baixo: \n");
        scanf("%d", &opcao);

        //este laço é executado enquanto o status do jogador for jogando (0) ou se ele realizou movimento invalido (3)
        //se o status do jogador for 1 ou 2 (perdeu ou ganhou) sai do laço
        do {

            //esta switch verifica a opcao de movimentação do usuario, 1 direita, 2 esquerda, 3, para cima ou 4 para baixo
            switch (opcao) {

                case 1:

                    //verifico se o jogador está na borda do tabuleiro
                    if (tabuleiro.jSubmarino > 0) {

                        //verifico se a posição está vazia
                        if (tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino - 1] == 0) {

                            //se a posição escolhida estiver vazia
                            //zero a posição atual do submarino
                            tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 0;
                            //movo o submarino
                            tabuleiro.jSubmarino -= 1;
                            //gravo a nova posição
                            tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 2;
                            //atribui status = 0 para prosseguir com o jogo
                            status = 0;
                        }
                        else if (tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino - 1] == 3) {

                            //se a posição escolhida não está vazio e alcançou à chegada. Jogador ganha atribui 2 à status
                            status = 2;
                        }
                        else {

                            //a posição não está vazia e não é chegada a missão falhou. Jogador perde atribui 1 à status
                            status = 1;
                        }
                    }
                    else {

                        //atribui 3 a variavel status indicando que foi solicitado movimento para fora do tabuleiro
                        status = 3;
                    }
                    break;

                case 2:

                    //verifico se o jogador está na borda do tabuleiro
                    if (tabuleiro.jSubmarino < tabuleiro.colunas - 1) {

                        //verifico se a posição está vazia
                        if (tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino + 1] == 0) {

                            //zero a posição atual do submarino
                            tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 0;
                            //movo o submarino
                            tabuleiro.jSubmarino += 1;
                            //gravo a nova posição
                            tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 2;
                            //atribui status = 0 para prosseguir com o jogo
                            status = 0;
                        }
                        else if (tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino + 1] == 3) {

                            //se a posição não está vazio e alcançou à chegada. Jogador ganha atribui 2 à status
                            status = 2;
                        }
                        else {

                            //se a posição não está vazio e não alcançou a chegada a missão falhou. Jogador perde atribui 1 à status
                            status = 1;
                        }
                    }
                    else {

                        //atribui 3 a variavel status indicando que foi solicitado movimento para fora do tabuleiro
                        status = 3;
                    }
                    break;

                case 3:

                    //verifico se o jogador está na borda do tabuleiro
                    if (tabuleiro.iSubmarino > 0) {

                        //verifico se a posição está vazia
                        if (tabuleiro.dados[tabuleiro.iSubmarino - 1][tabuleiro.jSubmarino] == 0) {

                            //zero a posição atual do submarino
                            tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 0;
                            //movo o submarino
                            tabuleiro.iSubmarino -= 1;
                            //gravo a nova posição
                            tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 2;
                            //atribui status = 0 para prosseguir com o jogo
                            status = 0;
                        }
                        else if (tabuleiro.dados[tabuleiro.iSubmarino-1][tabuleiro.jSubmarino] == 3) {

                            //se a posição não está vazio e alcançou à chegada. Jogador ganha atribui 2 à status
                            status = 2;
                        }
                        else {

                            //se a posição não está vazio e não alcançou a chegada a missão falhou. Jogador perde atribui 1 à status
                            status = 1;
                        }
                    }
                    else {

                        //atribui 3 a variavel status indicando que foi solicitado movimento para fora do tabuleiro
                        status = 3;
                    }
                    break;

                case 4:

                    //verifico se o jogador está na borda do tabuleiro
                    if (tabuleiro.iSubmarino < tabuleiro.linhas - 1) {

                        //verifico se a posição está vazia
                        if (tabuleiro.dados[tabuleiro.iSubmarino + 1][tabuleiro.jSubmarino] == 0) {

                            //zero a posição atual do submarino
                            tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 0;
                            //movo o submarino
                            tabuleiro.iSubmarino += 1;
                            //gravo a nova posição
                            tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 2;
                            //atribui status = 0 para prosseguir com o jogo
                            status = 0;
                        }
                        else if (tabuleiro.dados[tabuleiro.iSubmarino + 1][tabuleiro.jSubmarino] == 3) {

                            //se a posição não está vazio e alcançou à chegada. Jogador ganha atribui 2 à status
                            status = 2;
                        }
                        else {

                            //se a posição não está vazio e não alcançou a chegada a missão falhou. Jogador perde atribui 1 à status
                            status = 1;
                        }
                    }
                    else {

                        //atribui 3 a variavel status indicando que foi solicitado movimento para fora do tabuleiro
                        status = 3;
                    }
                    break;

            }

            //verifica status atual do jogo
            //se status 0 status jogando
            if (status == 0) {

                system("clear");//limpa tela no linux
                atualizarTabuleiro(ptTab);

                printf("\nMovimente o submarino:\n 1) Esquerda\n 2) Direita\n 3) Para cima\n 4) Para baixo: \n");
                scanf("%d", &opcao);
            }
            //se status 1 jogador perdeu
            else if(status == 1) {

                system("clear");//limpa tela no linux
                printf("\n************************************************************************");
                printf("\n*******************************..AHHHH..********************************");
                printf("\n************************** :( VOCÊ PERDEU :( ***************************");
                printf("\n*************************** TENTE OUTRA VEZ ****************************");
                printf("\n************************************************************************\n");
            }
            //se status 2 jogador ganhou
            else if(status == 2) {

                system("clear");//limpa tela no linux
                printf("\n************************************************************************");
                printf("\n*****************************..PARABÉNS..*******************************");
                printf("\n************************** :) VOCÊ GANHOU :) ***************************");
                printf("\n*************************** JOGUE OUTRA VEZ ****************************");
                printf("\n************************************************************************\n");
            }
            //se status 3 movimento inválido
            else if(status == 3) {

                //exibe tabuleiro e solicita novo movimento
                system("clear");//limpa tela no linux
                printf("\nVocê não pode mover para esse lado.\n");
                exibirTabuleiro(ptTab);
                exibirDicas(ptTab);
                printf("\nMovimente o submarino:\n 1) Esquerda\n 2) Direita\n 3) Para cima\n 4) Para baixo: \n");
                scanf("%d", &opcao);
            }

        //fim do laço principal
        } while ((status == 0) || (status == 3));

        printf("\n\nDeseja jogar novamente? 1) Sim / 2) Não: \n");
        scanf("%d", &jogar);

        //zero a posição do submarino e da chegada
        tabuleiro.dados[tabuleiro.iSubmarino][tabuleiro.jSubmarino] = 0;
        tabuleiro.dados[tabuleiro.iChegada][tabuleiro.jChegada] = 0;

        system("clear");//limpa tela no linux

    } while (jogar == 1);

    return 0;
}

