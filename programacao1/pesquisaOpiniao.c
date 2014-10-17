/*

AA 4.3 - Pesquisa de opinião
Apresentação
Uma empresa de propaganda cuida do lançamento de um novo suco. Sabendo que não
só o produto é importante, mas também a embalagem, decidiu realizar uma pesquisa
com as pessoas na rua.
Assim, montou um ponto de mostra do novo produto, oferecendo amostras grátis e
registrando a impressão das pessoas.
Como resultados para a campanha, desejava obter informações se deveria haver
mudanças na fórmula do produto ou na concepção de três embalagens diferentes
concebidas para o projeto.
Informações
O experimento foi montado de forma a avaliar a aceitação do produto em três tipos
de embalagens, propostas por equipes de design diferentes. Apenas um sabor de
suco foi oferecido.
O suco foi oferecido em embalagens especiais, de apenas 50ml, para que cada pessoa
pudesse provar das três embalagens (todas com o mesmo conteúdo!).
Para cada provador voluntário havia duas perguntas e se aceitavam apenas algumas respostas:
Gostou do sabor do suco? Respostas possíveis:
1 = Sim
2 = Não
3 = Outra resposta
Que nota daria para o sabor, de 0 (ruim) a 10 (excelente), sem usar casas decimais?
Qual das embalagens gostou mais? Respostas possíveis:
1 = Embalagem da primeira equipe
2 = Embalagem da segunda equipe
3 = Embalagem da terceira equipe
4 = Outra resposta
Como resultados para a pesquisa, precisa-se saber:
Quantas pessoas foram entrevistadas
A porcentagem de cada possível resposta para a pergunta 1
A nota média dada para o suco (valor real) para todos os participantes
A nota média dada para o suco (valor real) apenas para os que responderam "Não" na primeira pergunta
Qual a embalagem preferida pela maioria (em caso de empate mostrar todas as empatadas)
Especificação
Escreva um algoritmo para resolver o problema acima, pensando que haverá um único
computador que executará a solução proposta, sendo ligado e iniciado na abertura
da pesquisa e encerrado no final do dia, quando serão obtidos os resultados da
pesquisa. Haverá somente um dia para esta pesquisa. O modo de encerramento da
pesquisa deve ser feito ao digitar o valor 4 para a pergunta 1, levando à escrita
dos resultados. Alerta-se que se deve tomar o cuidado de não se fazerem divisões
por zero.

Autor: FELIPE NOGUEIRA DE SOUZA 19/05/2014

*/

#include <stdio.h>

int main(int argc, char *argv[])
{

    printf("\n*******************************************************************************");
    printf("\n\n***************************** PESQUISA DE OPINIAO ******************************");
    printf("\n\n*******************************************************************************");

    //inicializa e instancia as variaveis
    int sabor, sabor1p, sabor2p, sabor3p, notaSabor, somaNota, somaNotaNao, embalagem, embalagem1, embalagem2, embalagem3, embalagem4, cont;
    float mediaNota, mediaNotaNao, sabor1, sabor2, sabor3;
    sabor = 0;
    sabor1 = 0;
    sabor2 = 0;
    sabor3 = 0;
    sabor1p = 0;
    sabor2p = 0;
    sabor3p = 0;
    notaSabor = 0;
    somaNota = 0;
    somaNotaNao = 0;
    embalagem = 0;
    embalagem1 = 0;
    embalagem2 = 0;
    embalagem3 = 0;
    embalagem4 = 0;
    cont = 0;


    //enquanto a resposta for diferente de 4 realiza o loop
    while (sabor != 4){

        printf("\n\n*******************************************************************************");
        printf("\n Gostou do sabor do suco? \n1 - Sim, 2 - Nao, 3 - Outra resposta 4 - Sair: \n");
        scanf("%d", &sabor);

        //verifica se a resposta e valida, se for prossegue com as perguntas
        if (sabor >= 1 && sabor <= 3){

        printf("\n\n Que nota daria para o sabor, de 0 (ruim) a 10 (excelente), sem usar casas decimais?\n");
        scanf("%d", &notaSabor);

        printf("\n\n Qual das embalagens gostou mais? \n1 = Embalagem da primeira equipe \n2 = Embalagem da segunda equipe\n3 = Embalagem da terceira equipe\n4 = Outra resposta\n");
        scanf("%d", &embalagem);

        //verifica a resposta para a primeira pergunta - gostou do suco?
        if (sabor == 1){
            sabor1++;
        }
        else if (sabor == 2) {
                sabor2++;
                somaNotaNao += notaSabor;
            }
            else if (sabor == 3) {
                    sabor3++;
                }
        //verifica qual foi a embalagem preferida
        if (embalagem == 1){
            embalagem1 ++;
        }
        else if (embalagem == 2) {
                embalagem2++;
            }
            else if (embalagem == 3) {
                    embalagem3++;
                }
                else if (embalagem == 4) {
                        embalagem4++;
                    }

        //somatoria das notas dos sucos
        somaNota += notaSabor;

        //contagem das respostas
        cont++;
        }

    }

    //calcula a porcentagem de respostas da primeira pergunta
    sabor1p = (sabor1/cont)*100;
    sabor2p = (sabor2/cont)*100;
    sabor3p = (sabor3/cont)*100;

    //calcula media de nota e media de notas não
    mediaNota = somaNota/cont;
    mediaNotaNao = somaNotaNao/sabor2;

    //verifica qual a embalagem favorita

    if ((embalagem1 == embalagem2) && (embalagem2 == embalagem3) && (embalagem3 == embalagem4)) {

        printf("Houve um empate entre todas as embalagens");
    }
    else if ((embalagem1 == embalagem2) && (embalagem2 == embalagem3) && (embalagem3 > embalagem4)) {

        printf("Houve um empate entre a primeira, segunda e terceira embalagens");
    }
    else if ((embalagem2 == embalagem3) && (embalagem3 == embalagem4) && (embalagem4 > embalagem1)) {

        printf("Houve um empate entre a segunda, terceira embalagens e OUTRAS RESPOSTAS");
    }
    else if ((embalagem1 == embalagem2) && (embalagem2 == embalagem4) && (embalagem4 > embalagem3)) {

        printf("Houve um empate entre a primeira, segunda embalagens e OUTRAS RESPOSTAS");
    }
    else if ((embalagem1 > embalagem3) && (embalagem1 > embalagem4) && (embalagem1 == embalagem2)) {

        printf("Houve um empate entre a primeira e a segunda embalagens");
    }
    else if ((embalagem1 > embalagem2) && (embalagem1 > embalagem4) && (embalagem1 == embalagem3)) {

        printf("Houve um empate entre a primeira e a terceira embalagens");
    }
    else if ((embalagem1 > embalagem3) && (embalagem1 > embalagem2) && (embalagem1 == embalagem4)) {

        printf("Houve um empate entre a primeira embalagem e OUTRAS RESPOSTAS");
    }
    else if ((embalagem2 > embalagem1) && (embalagem2 > embalagem4) && (embalagem2 == embalagem3)) {

        printf("Houve um empate entre a segunda e a terceira embalagens");
    }
    else if ((embalagem2 > embalagem1) && (embalagem2 > embalagem3) && (embalagem2 == embalagem4)) {

        printf("Houve um empate entre a segunda embalagem e OUTRAS RESPOSTAS");
    }
    else if ((embalagem3 > embalagem1) && (embalagem3 > embalagem2) && (embalagem3 == embalagem4)) {

        printf("Houve um empate entre a terceira embalagem e OUTRAS RESPOSTAS");
    }
    else if ((embalagem1 > embalagem2) && (embalagem1 > embalagem3) && (embalagem1 > embalagem4)) {

        printf("A primeira embalagem foi a favorita");
    }
    else if ((embalagem2 > embalagem1) && (embalagem2 > embalagem3) && (embalagem2 > embalagem4)) {

        printf("A segunda embalagem foi a favorita");
    }
    else if ((embalagem3 > embalagem1) && (embalagem3 > embalagem2) && (embalagem3 > embalagem4)) {

        printf("A terceira embalagem foi a favorita");
    }
    else if ((embalagem4 > embalagem1) && (embalagem4 > embalagem2) && (embalagem4 > embalagem3)) {

        printf("A maior parte dos participantes respondeu OUTRAS RESPOSTAS sobre a embalagem favorita");
    }

    //exibe os resultados
    printf("\nForam entrevistados %d pessoas", cont);
    printf("\nA porcentagem de respostas SIM para a primeira pergunta foi %d %%", sabor1p);
    printf("\nA porcentagem de respostas NAO para a primeira pergunta foi %d %%", sabor2p);
    printf("\nA porcentagem de respostas OUTRAS RESPOSTAS para a primeira pergunta foi %d %%", sabor3p);
    printf("\nA media de notas foi %f ", mediaNota);
    printf("\nA media de notas para de quem nao gostou do suco foi %f ", mediaNotaNao);

    printf("\n\n\n");
  	system("PAUSE");
    return 0;
}
