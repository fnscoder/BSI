/*

AlgProgr2 - AA5.2: Operador Seta
Digite e compile o programa 3 do livro de C do Prof. Ricardo (página 172).
Entregue o programa executando corretamente e também uma breve explicação sobre o uso
do operador seta com ponteiros para registros.

Operador de acesso a campos SETA ->
Para acessar o conteúdo de uma variável do tipo estrutura (struct) através de um
ponteiro utilizamos o operador de acesso a compos seta (->).
Na linha 41 do programa é declarado um ponteiro para variavel do tipo estrutura pontFunc.
Na linha 64 pontFunc recebe o endereco de memoria de funcionario1.
Nas linhas 68, 69 e 70 é utilizado o operador seta (->) para atribuir aos campos de
funcionario2 o conteúdo dos campos do endereco apontado por pontFunc.
O seguinte comando também funciona, porém não é muito utilizado e é necessário o uso dos
parenteses devido a precedência de operadores: (*pontFunc).idadeFunc.

Autor: Felipe Nogueira de Souza Data 06/09/2014

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    /* definição da estrutura de funcionários
    com os campos codFunc, idadeFunc, sexoFunc e salFunc. */

    struct funcionario {
        int codFunc; // código do funcionário
        int idadeFunc; // idade do funcionário
        char sexoFunc; // sexo do funcionário, M (masculino) e F (feminino)
        float salFunc; // salário do funcionário
    }; // atenção ao uso do ponto-e-vírgula

    // declaração de variáveis
    struct funcionario funcionario1; // variável do tipo estrutura
    struct funcionario funcionario2; // variável do tipo estrutura
    struct funcionario *pontFunc; // ponteiro para variável do tipo estrutura

    // entrada de dados do funcionário 1
    printf("A seguir, entre com todos os dados do funcionario.\n\n");
    printf("Digite o codigo: ");
    scanf("%d", &funcionario1.codFunc); // note o uso do operador &
    printf("Digite a idade: ");
    scanf("%d", &funcionario1.idadeFunc); // note o uso do operador &
    printf("Digite o sexo [F ou M]: ");
    scanf("%*c%c", &funcionario1.sexoFunc); // note o uso do operador &
    printf("Digite o salario (R$): ");
    scanf("%f", &funcionario1.salFunc); // note o uso do operador &
    printf("\n");

    // saída de dados do funcionario 1 para a tela (monitor de vídeo)
    printf("Os dados do funcionario 1 sao:\n\n");
    printf("Codigo: %d\n", funcionario1.codFunc);
    printf("Idade: %d\n", funcionario1.idadeFunc);
    printf("Sexo: %c\n", funcionario1.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
    printf("\n");

    // uso de ponteiro para estrutura
    pontFunc = &funcionario1;

    // uso do operador seta para a manipulação de campos
    funcionario2.codFunc = 99;
    funcionario2.idadeFunc = pontFunc->idadeFunc;
    funcionario2.sexoFunc = pontFunc->sexoFunc;
    funcionario2.salFunc = pontFunc->salFunc * 1.5;

    // saída de dados do funcionario 2 para a tela (monitor de vídeo)
    printf("Os dados do funcionario 2 sao:\n\n");
    printf("Codigo: %d\n", funcionario2.codFunc);
    printf("Idade: %d\n", funcionario2.idadeFunc);
    printf("Sexo: %c\n", funcionario2.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario2.salFunc);
    printf("\n");

    // alteração do conteúdo de alguns campos de funcionário 1

    // usando ponteiro
    pontFunc->codFunc = 79; // (*pontFunc).codFunc = 79;
    pontFunc->idadeFunc = 25; // (*pontFunc).idadeFunc = 25;

    // saída de dados do funcionario 1 para a tela (monitor de vídeo)
    printf("Os dados do funcionario 1 sao:\n\n");
    printf("Codigo: %d\n", funcionario1.codFunc);
    printf("Idade: %d\n", funcionario1.idadeFunc);
    printf("Sexo: %c\n", funcionario1.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
    printf("\n");

    // finalização do programa principal
    system("PAUSE");
    return 0;
}
