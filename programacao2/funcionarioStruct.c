/*

AlgProgr2 - AA2.1: Dados de Funcionários com Struct
Altere o programa 2 da página 168 do livro de linguagem C do Prof. Ricardo de forma a
incluir em cada registro de funcionário 2 campos adicionais, sendo um campo para
indicar o NOME do funcionário e outro para indicar o TIME DE FUTEBOL que o funcionário
torce. Ambos os campos do registro funcionário são strings. Altere o restante do
programa de forma que a manipulação de qualquer variável do tipo struct funcionario
também manipule os 2 novos campos NOME e TIME DE FUTEBOL. Dica: Cuidado com o uso de
funções de leitura de dados com strings. Lembre-se que, por exemplo, nome é equivalente
a &nome[0].

Autor: Felipe Nogueira de Souza Data: 04/08/2014

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    /* definição da estrutura de funcionários
    com os campos codFunc, idadeFunc, sexoFunc e salFunc. */

    struct funcionario {
        //acrescentando os campos nome e time
        char nomeFunc[30]; // nome do funcionario
        char timeFunc[15]; // time do funcionario

        int codFunc; // código do funcionário
        int idadeFunc; // idade do funcionário
        char sexoFunc; // sexo do funcionário, M (masculino) e F (feminino)
        float salFunc; // salário do funcionário
    }; // atenção ao uso do ponto-e-vírgula

    // declaração de duas variáveis do tipo estrutura
    struct funcionario funcionario1;
    struct funcionario funcionario2;

    // entrada de dados do funcionário 1
    printf("A seguir, entre com todos os dados do funcionario.\n\n");
    printf("Digite o nome do funcionario: "); //solicitando nome
    scanf("%s", &funcionario1.nomeFunc); //recebendo nome
    printf("Digite o codigo: ");
    scanf("%d", &funcionario1.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario1.idadeFunc);
    printf("Digite o sexo [F ou M]: ");
    scanf("%*c%c", &funcionario1.sexoFunc);
    printf("Digite o salario (R$): ");
    scanf("%f", &funcionario1.salFunc);
    printf("Digite o time: ", &funcionario1.timeFunc); //solicitando time
    scanf("%s", &funcionario1.timeFunc); //recebendo time
    printf("\n");

    // saída de dados do funcionario 1 para a tela (monitor de vídeo)
    printf("Os dados do funcionario 1 sao:\n\n");
    printf("Nome: %s\n", funcionario1.nomeFunc); //exibindo nome
    printf("Codigo: %d\n", funcionario1.codFunc);
    printf("Idade: %d\n", funcionario1.idadeFunc);
    printf("Sexo: %c\n", funcionario1.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
    printf("Time: %s\n", funcionario1.timeFunc); //exibindo time
    printf("\n");

    // atribuição dos dados do funcionário 1 para o funcionario 2
    funcionario2 = funcionario1;

    // saída de dados do funcionario 2 para a tela (monitor de vídeo)
    printf("Os dados do funcionario 2 sao:\n\n");
    printf("Nome: %s\n", funcionario2.nomeFunc); //exibindo nome
    printf("Codigo: %d\n", funcionario2.codFunc);
    printf("Idade: %d\n", funcionario2.idadeFunc);
    printf("Sexo: %c\n", funcionario2.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario2.salFunc);
    printf("Time: %s\n", &funcionario2.timeFunc); //exibindo time
    printf("\n");

    // finalização do programa principal

    system("PAUSE");
    return 0;
}
