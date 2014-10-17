/*

AlgProgr2 - AA2.3: Manipulação dos Dados de 5 Funcionários
Estenda o programa da atividade AA2.2 de forma que seja feita a leitura dos dados de
5 funcionários. O programa deve também fornecer os seguintes relatórios,
que o usuário irá escolher até digitar a opção de término:
1. Listagem dos dados de todos os funcionários
2. Listagem dos dados de todos os funcionários do sexo masculino
3. Listagem dos dados de todos os funcionários do sexo feminino
4. Contagem, por time de futebol, da quantidade de torcedores.
Assuma que os funcionários torcem para apenas 5 times (Palmeiras, SP, Santos, Corinthians e Outros).
5. Listagem dos dados de um funcionário fornecido o seu código.
Dicas: Use o comando switch para implementar o menu da escolha dos relatórios.
Use o comando typedef para simplificar a declaração de uma estrutura.

Autor: Felipe Nogueira de Souza Data: 04/08/2014

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    /* definição da estrutura de funcionários
    com os campos codFunc, idadeFunc, sexoFunc e salFunc. */

    typedef struct {
        //acrescentando os campos nome e time
        char nomeFunc[30]; // nome do funcionario
        char timeFunc[15]; // time do funcionario

        int codFunc; // código do funcionário
        int idadeFunc; // idade do funcionário
        char sexoFunc; // sexo do funcionário, M (masculino) e F (feminino)
        float salFunc; // salário do funcionário
    }funcionario; // atenção ao uso do ponto-e-vírgula

    // declaração de duas variáveis do tipo estrutura
    funcionario funcionario1, funcionario2, funcionario3, funcionario4, funcionario5;

    int opcao, continuar, contCorinthians, contPalmeiras, contSP, contSantos, contOutros, codFunc;

    contCorinthians = 0;
    contPalmeiras = 0;
    contSP = 0;
    contSantos = 0;
    contOutros = 0;
    continuar = 1;;

    // entrada de dados do funcionário 1
    printf("A seguir, entre com todos os dados do primeiro funcionario.\n\n");
    printf("Digite o nome do funcionario: ");
    scanf("%s", &funcionario1.nomeFunc);
    printf("Digite o codigo: ");
    scanf("%d", &funcionario1.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario1.idadeFunc);
    printf("Digite o sexo [F ou M]: ");
    scanf("%*c%c", &funcionario1.sexoFunc);
    printf("Digite o salario (R$): ");
    scanf("%f", &funcionario1.salFunc);
    printf("Digite o time: ", &funcionario1.timeFunc);
    scanf("%s", &funcionario1.timeFunc);
    printf("\n");

    // entrada de dados do funcionário 2
    printf("A seguir, entre com todos os dados do segundo funcionario.\n\n");
    printf("Digite o nome do funcionario: ");
    scanf("%s", &funcionario2.nomeFunc);
    printf("Digite o codigo: ");
    scanf("%d", &funcionario2.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario2.idadeFunc);
    printf("Digite o sexo [F ou M]: ");
    scanf("%*c%c", &funcionario2.sexoFunc);
    printf("Digite o salario (R$): ");
    scanf("%f", &funcionario2.salFunc);
    printf("Digite o time: ", &funcionario1.timeFunc);
    scanf("%s", &funcionario2.timeFunc);
    printf("\n");

    // entrada de dados do funcionário 3
    printf("A seguir, entre com todos os dados do terceiro funcionario.\n\n");
    printf("Digite o nome do funcionario: ");
    scanf("%s", &funcionario3.nomeFunc);
    printf("Digite o codigo: ");
    scanf("%d", &funcionario3.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario3.idadeFunc);
    printf("Digite o sexo [F ou M]: ");
    scanf("%*c%c", &funcionario3.sexoFunc);
    printf("Digite o salario (R$): ");
    scanf("%f", &funcionario3.salFunc);
    printf("Digite o time: ", &funcionario1.timeFunc);
    scanf("%s", &funcionario3.timeFunc);
    printf("\n");

    // entrada de dados do funcionário 4
    printf("A seguir, entre com todos os dados do quarto funcionario.\n\n");
    printf("Digite o nome do funcionario: ");
    scanf("%s", &funcionario4.nomeFunc);
    printf("Digite o codigo: ");
    scanf("%d", &funcionario4.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario4.idadeFunc);
    printf("Digite o sexo [F ou M]: ");
    scanf("%*c%c", &funcionario4.sexoFunc);
    printf("Digite o salario (R$): ");
    scanf("%f", &funcionario4.salFunc);
    printf("Digite o time: ", &funcionario1.timeFunc);
    scanf("%s", &funcionario4.timeFunc);
    printf("\n");

    // entrada de dados do funcionário 5
    printf("A seguir, entre com todos os dados do quinto funcionario.\n\n");
    printf("Digite o nome do funcionario: ");
    scanf("%s", &funcionario5.nomeFunc);
    printf("Digite o codigo: ");
    scanf("%d", &funcionario5.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario5.idadeFunc);
    printf("Digite o sexo [F ou M]: ");
    scanf("%*c%c", &funcionario5.sexoFunc);
    printf("Digite o salario (R$): ");
    scanf("%f", &funcionario5.salFunc);
    printf("Digite o time: ", &funcionario1.timeFunc);
    scanf("%s", &funcionario5.timeFunc);
    printf("\n");

    while (continuar == 1){

        printf("Selecione uma opcao: \n\n   1. Listagem dos dados de todos os funcionários \n   2. Listagem dos dados de todos os funcionários do sexo masculino \n   3. Listagem dos dados de todos os funcionários do sexo feminino \n   4. Contagem, por time de futebol, da quantidade de torcedores. \n   5. Listagem dos dados de um funcionário fornecido o seu código.\n\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1: //exibe listagem de todos os funcionarios

                printf("Os dados do funcionario 1 sao:\n\n");
                printf("Nome: %s\n", funcionario1.nomeFunc);
                printf("Codigo: %d\n", funcionario1.codFunc);
                printf("Idade: %d\n", funcionario1.idadeFunc);
                printf("Sexo: %c\n", funcionario1.sexoFunc);
                printf("Salario (R$): %.2f\n", funcionario1.salFunc);
                printf("Time: %s\n", funcionario1.timeFunc);
                printf("\n\n");

                printf("Os dados do funcionario 2 sao:\n\n");
                printf("Nome: %s\n", funcionario2.nomeFunc);
                printf("Codigo: %d\n", funcionario2.codFunc);
                printf("Idade: %d\n", funcionario2.idadeFunc);
                printf("Sexo: %c\n", funcionario2.sexoFunc);
                printf("Salario (R$): %.2f\n", funcionario2.salFunc);
                printf("Time: %s\n", funcionario2.timeFunc);
                printf("\n\n");

                printf("Os dados do funcionario 3 sao:\n\n");
                printf("Nome: %s\n", funcionario3.nomeFunc);
                printf("Codigo: %d\n", funcionario3.codFunc);
                printf("Idade: %d\n", funcionario3.idadeFunc);
                printf("Sexo: %c\n", funcionario3.sexoFunc);
                printf("Salario (R$): %.2f\n", funcionario3.salFunc);
                printf("Time: %s\n", funcionario3.timeFunc);
                printf("\n\n");

                printf("Os dados do funcionario 4 sao:\n\n");
                printf("Nome: %s\n", funcionario4.nomeFunc);
                printf("Codigo: %d\n", funcionario4.codFunc);
                printf("Idade: %d\n", funcionario4.idadeFunc);
                printf("Sexo: %c\n", funcionario4.sexoFunc);
                printf("Salario (R$): %.2f\n", funcionario4.salFunc);
                printf("Time: %s\n", funcionario4.timeFunc);
                printf("\n\n");

                printf("Os dados do funcionario 5 sao:\n\n");
                printf("Nome: %s\n", funcionario5.nomeFunc);
                printf("Codigo: %d\n", funcionario5.codFunc);
                printf("Idade: %d\n", funcionario5.idadeFunc);
                printf("Sexo: %c\n", funcionario5.sexoFunc);
                printf("Salario (R$): %.2f\n", funcionario5.salFunc);
                printf("Time: %s\n", funcionario5.timeFunc);
                printf("\n\n");

                break;

            case 2: //exibe listagem de funcionarios do sexo masculino

                if (funcionario1.sexoFunc == "M"){
                    printf("%s\n", funcionario1.nomeFunc);
                }
                if (funcionario2.sexoFunc == "M"){
                    printf("%s\n", funcionario2.nomeFunc);
                }
                if (funcionario3.sexoFunc == "M"){
                    printf("%s\n", funcionario3.nomeFunc);
                }
                if (funcionario4.sexoFunc == "M"){
                    printf("%s\n", funcionario4.nomeFunc);
                }
                if (funcionario5.sexoFunc == "M"){
                    printf("%s\n", funcionario5.nomeFunc);
                }

                break;

            case 3: //exibe listagem de funcionarios do sexo feminino

                if (funcionario1.sexoFunc == "F"){
                    printf("%s", funcionario1.nomeFunc);
                }
                if (funcionario2.sexoFunc == "F"){
                    printf("%s", funcionario2.nomeFunc);
                }
                if (funcionario3.sexoFunc == "F"){
                    printf("%s", funcionario3.nomeFunc);
                }
                if (funcionario4.sexoFunc == "F"){
                    printf("%s", funcionario4.nomeFunc);
                }
                if (funcionario5.sexoFunc == "F"){
                    printf("%s", funcionario5.nomeFunc);
                }

                break;

            case 4: //exibe contagem por time de futebol

                if (funcionario1.timeFunc == "Corinthians"){

                    contCorinthians ++;
                }
                else if (funcionario1.timeFunc == "Palmeiras"){

                    contPalmeiras ++;
                }
                else if (funcionario1.timeFunc == "SP"){

                    contSP ++;
                }
                else if (funcionario1.timeFunc == "Santos"){

                    contSantos ++;
                }
                else {

                    contOutros ++;
                }

                //verifica time do funcionario 2
                if (funcionario2.timeFunc == "Corinthians"){

                    contCorinthians ++;
                }
                else if (funcionario2.timeFunc == "Palmeiras"){

                    contPalmeiras ++;
                }
                else if (funcionario2.timeFunc == "SP"){

                    contSP ++;
                }
                else if (funcionario2.timeFunc == "Santos"){

                    contSantos ++;
                }
                else {

                    contOutros ++;
                }

                //verifica time do funcionario 3
                if (funcionario3.timeFunc == "Corinthians"){

                    contCorinthians ++;
                }
                else if (funcionario3.timeFunc == "Palmeiras"){

                    contPalmeiras ++;
                }
                else if (funcionario3.timeFunc == "SP"){

                    contSP ++;
                }
                else if (funcionario3.timeFunc == "Santos"){

                    contSantos ++;
                }
                else {

                    contOutros ++;
                }

                //verifica time do funcionario 4
                if (funcionario4.timeFunc == "Corinthians"){

                    contCorinthians ++;
                }
                else if (funcionario4.timeFunc == "Palmeiras"){

                    contPalmeiras ++;
                }
                else if (funcionario4.timeFunc == "SP"){

                    contSP ++;
                }
                else if (funcionario4.timeFunc == "Santos"){

                    contSantos ++;
                }
                else {

                    contOutros ++;
                }

                //verifica time do funcionario 5
                if (funcionario5.timeFunc == "Corinthians"){

                    contCorinthians ++;
                }
                else if (funcionario5.timeFunc == "Palmeiras"){

                    contPalmeiras ++;
                }
                else if (funcionario5.timeFunc == "SP"){

                    contSP ++;
                }
                else if (funcionario5.timeFunc == "Santos"){

                    contSantos ++;
                }
                else {

                    contOutros ++;
                }

                printf("Quantidade de funcionarios que torcem pelo Corinthians: %d \n", contCorinthians);
                printf("Quantidade de funcionarios que torcem pelo Palmeiras: %d \n", contPalmeiras);
                printf("Quantidade de funcionarios que torcem pelo SP: %d \n", contSP);
                printf("Quantidade de funcionarios que torcem pelo Santos: %d \n", contSantos);
                printf("Quantidade de funcionarios que torcem por outros times: %d \n", contOutros);

                break;

            case 5: //exibe os dados de um funcionario fornecido seu codigo

                printf("Digite o codigo do funcionario: ");
                scanf("%d", &codFunc);

                if (codFunc == funcionario1.codFunc){

                    printf("Os dados do funcionario 1 sao:\n\n");
                    printf("Nome: %s\n", funcionario1.nomeFunc);
                    printf("Codigo: %d\n", funcionario1.codFunc);
                    printf("Idade: %d\n", funcionario1.idadeFunc);
                    printf("Sexo: %c\n", funcionario1.sexoFunc);
                    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
                    printf("Time: %s\n", funcionario1.timeFunc);
                    printf("\n\n");

                }

                else if (codFunc == funcionario2.codFunc){

                    printf("Os dados do funcionario 2 sao:\n\n");
                    printf("Nome: %s\n", funcionario2.nomeFunc);
                    printf("Codigo: %d\n", funcionario2.codFunc);
                    printf("Idade: %d\n", funcionario2.idadeFunc);
                    printf("Sexo: %c\n", funcionario2.sexoFunc);
                    printf("Salario (R$): %.2f\n", funcionario2.salFunc);
                    printf("Time: %s\n", funcionario2.timeFunc);
                    printf("\n\n");

                }

                else if (codFunc == funcionario3.codFunc){


                    printf("Os dados do funcionario 3 sao:\n\n");
                    printf("Nome: %s\n", funcionario3.nomeFunc);
                    printf("Codigo: %d\n", funcionario3.codFunc);
                    printf("Idade: %d\n", funcionario3.idadeFunc);
                    printf("Sexo: %c\n", funcionario3.sexoFunc);
                    printf("Salario (R$): %.2f\n", funcionario3.salFunc);
                    printf("Time: %s\n", funcionario3.timeFunc);
                    printf("\n\n");

                }

                else if (codFunc == funcionario4.codFunc){

                    printf("Os dados do funcionario 4 sao:\n\n");
                    printf("Nome: %s\n", funcionario4.nomeFunc);
                    printf("Codigo: %d\n", funcionario4.codFunc);
                    printf("Idade: %d\n", funcionario4.idadeFunc);
                    printf("Sexo: %c\n", funcionario4.sexoFunc);
                    printf("Salario (R$): %.2f\n", funcionario4.salFunc);
                    printf("Time: %s\n", funcionario4.timeFunc);
                    printf("\n\n");

                }

                else if (codFunc == funcionario5.codFunc){

                    printf("Os dados do funcionario 5 sao:\n\n");
                    printf("Nome: %s\n", funcionario5.nomeFunc);
                    printf("Codigo: %d\n", funcionario5.codFunc);
                    printf("Idade: %d\n", funcionario5.idadeFunc);
                    printf("Sexo: %c\n", funcionario5.sexoFunc);
                    printf("Salario (R$): %.2f\n", funcionario5.salFunc);
                    printf("Time: %s\n", funcionario5.timeFunc);
                    printf("\n\n");

                }

                else {

                    printf("Codigo inexistente!");
                }

                break;

        }
        printf("Digite 1 para continuar ou qualquer numero para sair: ");
        scanf("%d", &continuar);
    }

    // finalização do programa principal

    system("PAUSE");
    return 0;

}
