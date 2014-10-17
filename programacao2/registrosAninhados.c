/*

AlgProgr2 - AA2.4: Manipulação de Registros Aninhados de Funcionários
Esta atividade deve se basear no trecho de programa exemplificado na página 202 do
livro-texto de linguagem C do Prof. Ricardo (i.e. trecho de código em cinza claro que
mostra a declaração de estruturas aninhadas). Faça um programa que leia os dados de 3
funcionários e mostre todos os dados destes funcionários em ordem ascendente de idade,
ou seja, primeiro devem ser mostrados os dados do funcionário mais jovem.
Caso haja funcionários com mesma idade, pode-se mostrar em qualquer ordem os dados
destes funcionários.

Autor: Felipe Nogueira de Souza Data: 04/08/2014

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    struct endereco {

        char rua[50]; //nome da rua
        char cidade[30]; //nome da cidade
        char estado[2]; // estado (sigla)
        char cep[8]; //cep com digito
        int num; //numero da residencia
    };

    typedef struct {
    char nomeFunc[30]; // nome do funcionario
    int codFunc; // código do funcionário
    int idade; //idade do funcionario
    float salFunc; // salário do funcionário
    struct endereco endFunc; //struct aninhado para endereco de funcionario
    } funcionario; // atenção ao uso do ponto-e-vírgula

    // declaração de duas variáveis do tipo estrutura
    funcionario funcionario1, funcionario2, funcionario3;

    //cadastrando o primeiro funcionario
    printf("\nCadastre os dados do primeiro funcionario: \n");
    printf("Digite o nome: ");
    scanf("%s", &funcionario1.nomeFunc);
    printf("Digite o codigo: ");
    scanf("%d", &funcionario1.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Digite o salario: ");
    scanf("%f", &funcionario1.salFunc);
    printf("Digite o nome da rua: ");
    scanf("%s", &funcionario1.endFunc.rua);
    printf("Digite o numero: ");
    scanf("%d", &funcionario1.endFunc.num);
    printf("Digite o nome da cidade: ");
    scanf("%s", &funcionario1.endFunc.cidade);
    printf("Digite o estado: ");
    scanf("%s", &funcionario1.endFunc.estado);
    printf("Digite o CEP: ");
    scanf("%s", &funcionario1.endFunc.cep);

    //cadastrando o segundo funcionario
    printf("\n\nCadastre os dados do segundo funcionario: \n");
    printf("Digite o nome: ");
    scanf("%s", &funcionario2.nomeFunc);
    printf("Digite o codigo: ");
    scanf("%d", &funcionario2.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Digite o salario: ");
    scanf("%f", &funcionario2.salFunc);
    printf("Digite o nome da rua: ");
    scanf("%s", &funcionario2.endFunc.rua);
    printf("Digite o numero: ");
    scanf("%d", &funcionario2.endFunc.num);
    printf("Digite o nome da cidade: ");
    scanf("%s", &funcionario2.endFunc.cidade);
    printf("Digite o estado: ");
    scanf("%s", &funcionario2.endFunc.estado);
    printf("Digite o CEP: ");
    scanf("%s", &funcionario2.endFunc.cep);

    //cadastrando o terceiro funcionario
    printf("\n\nCadastre os dados do terceiro funcionario: \n");
    printf("Digite o nome: ");
    scanf("%s", &funcionario3.nomeFunc);
    printf("Digite o codigo: ");
    scanf("%d", &funcionario3.codFunc);
    printf("Digite a idade: ");
    scanf("%d", &funcionario3.idade);
    printf("Digite o salario: ");
    scanf("%f", &funcionario3.salFunc);
    printf("Digite o nome da rua: ");
    scanf("%s", &funcionario3.endFunc.rua);
    printf("Digite o numero: ");
    scanf("%d", &funcionario3.endFunc.num);
    printf("Digite o nome da cidade: ");
    scanf("%s", &funcionario3.endFunc.cidade);
    printf("Digite o estado: ");
    scanf("%s", &funcionario3.endFunc.estado);
    printf("Digitde o CEP: ");
    scanf("%s", &funcionario3.endFunc.cep);

    if (funcionario1.idade < funcionario2.idade && funcionario2.idade < funcionario3.idade){

        //primeiro funcionario por ordem ascendente de idade
        printf("\n\nO mais jovem e o primeiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario1.nomeFunc);
        printf("Codigo: %d\n", funcionario1.codFunc);
        printf("Idade: %d\n", funcionario1.idade);
        printf("Salario: %f\n", funcionario1.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario1.endFunc.rua);
        printf(" Numero: %d\n", funcionario1.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario1.endFunc.cidade);
        printf("Cep: %s", funcionario1.endFunc.cep);

        //segundo funcionario por ordem ascendente de idade
        printf("\n\nO segundo mais jovem e o segundo funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario2.nomeFunc);
        printf("Codigo: %d\n", funcionario2.codFunc);
        printf("Idade: %d\n", funcionario2.idade);
        printf("Salario: %f\n", funcionario2.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario2.endFunc.rua);
        printf(" Numero: %d\n", funcionario2.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario2.endFunc.cidade);
        printf("Cep: %s", funcionario2.endFunc.cep);

        //terceiro funcionario por ordem ascendente de idade
        printf("\n\nO terceiro mais jovem e o terceiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario3.nomeFunc);
        printf("Codigo: %d\n", funcionario3.codFunc);
        printf("Idade: %d\n", funcionario3.idade);
        printf("Salario: %f\n", funcionario3.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario3.endFunc.rua);
        printf(" Numero: %d\n", funcionario3.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario3.endFunc.cidade);
        printf("Cep: %s", funcionario3.endFunc.cep);

    }
    else if (funcionario1.idade < funcionario3.idade && funcionario3.idade < funcionario2.idade){

        //primeiro funcionario por ordem ascendente de idade
        printf("\n\nO mais jovem e o primeiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario1.nomeFunc);
        printf("Codigo: %d\n", funcionario1.codFunc);
        printf("Idade: %d\n", funcionario1.idade);
        printf("Salario: %f\n", funcionario1.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario1.endFunc.rua);
        printf(" Numero: %d\n", funcionario1.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario1.endFunc.cidade);
        printf("Cep: %s", funcionario1.endFunc.cep);

        //segundo funcionario por ordem ascendente de idade
        printf("\n\nO segundo mais jovem e o terceiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario3.nomeFunc);
        printf("Codigo: %d\n", funcionario3.codFunc);
        printf("Idade: %d\n", funcionario3.idade);
        printf("Salario: %f\n", funcionario3.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario3.endFunc.rua);
        printf(" Numero: %d\n", funcionario3.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario3.endFunc.cidade);
        printf("Cep: %s", funcionario3.endFunc.cep);

        //terceiro funcionario por ordem ascendente de idade
        printf("\n\nO terceiro mais jovem e o segundo funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario2.nomeFunc);
        printf("Codigo: %d\n", funcionario2.codFunc);
        printf("Idade: %d\n", funcionario2.idade);
        printf("Salario: %f\n", funcionario2.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario2.endFunc.rua);
        printf(" Numero: %d\n", funcionario2.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario2.endFunc.cidade);
        printf("Cep: %s", funcionario2.endFunc.cep);

    }
    else if (funcionario2.idade < funcionario1.idade && funcionario1.idade < funcionario3.idade){

        //primeiro funcionario por ordem ascendente de idade
        printf("\n\nO funcionario mais jovem e o segundo funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario2.nomeFunc);
        printf("Codigo: %d\n", funcionario2.codFunc);
        printf("Idade: %d\n", funcionario2.idade);
        printf("Salario: %f\n", funcionario2.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario2.endFunc.rua);
        printf(" Numero: %d\n", funcionario2.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario2.endFunc.cidade);
        printf("Cep: %s", funcionario2.endFunc.cep);

        //segundo funcionario por ordem ascendente de idadecendente de idade
        printf("\n\nO segundo mais jovem e o primeiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario1.nomeFunc);
        printf("Codigo: %d\n", funcionario1.codFunc);
        printf("Idade: %d\n", funcionario1.idade);
        printf("Salario: %f\n", funcionario1.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario1.endFunc.rua);
        printf(" Numero: %d\n", funcionario1.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario1.endFunc.cidade);
        printf("Cep: %s", funcionario1.endFunc.cep);

        //terceiro funcionario por ordem ascendente de idade
        printf("\n\nO terceiro mais jovem e o terceiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario3.nomeFunc);
        printf("Codigo: %d\n", funcionario3.codFunc);
        printf("Idade: %d\n", funcionario3.idade);
        printf("Salario: %f\n", funcionario3.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario3.endFunc.rua);
        printf(" Numero: %d\n", funcionario3.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario3.endFunc.cidade);
        printf("Cep: %s", funcionario3.endFunc.cep);

    }
    else if (funcionario2.idade < funcionario3.idade && funcionario3.idade < funcionario1.idade){

        //primeiro funcionario por ordem ascendente de idade
        printf("\n\nO funcionario mais jovem e o segundo funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario2.nomeFunc);
        printf("Codigo: %d\n", funcionario2.codFunc);
        printf("Idade: %d\n", funcionario2.idade);
        printf("Salario: %f\n", funcionario2.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario2.endFunc.rua);
        printf(" Numero: %d\n", funcionario2.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario2.endFunc.cidade);
        printf("Cep: %s", funcionario2.endFunc.cep);

        //segundo funcionario por ordem ascendente de idadecendente de idade
        printf("\n\nO segundo mais jovem e o terceiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario3.nomeFunc);
        printf("Codigo: %d\n", funcionario3.codFunc);
        printf("Idade: %d\n", funcionario3.idade);
        printf("Salario: %f\n", funcionario3.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario3.endFunc.rua);
        printf(" Numero: %d\n", funcionario3.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario3.endFunc.cidade);
        printf("Cep: %s", funcionario3.endFunc.cep);

        //terceiro funcionario por ordem ascendente de idade
        printf("\n\nO terceiro mais jovem e o primeiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario1.nomeFunc);
        printf("Codigo: %d\n", funcionario1.codFunc);
        printf("Idade: %d\n", funcionario1.idade);
        printf("Salario: %f\n", funcionario1.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario1.endFunc.rua);
        printf(" Numero: %d\n", funcionario1.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario1.endFunc.cidade);
        printf("Cep: %s", funcionario1.endFunc.cep);

    }
    else if (funcionario3.idade < funcionario1.idade && funcionario1.idade < funcionario2.idade){

        //primeiro funcionario por ordem ascendente de idade
        printf("\n\nO funcionario mais jovem e o terceiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario3.nomeFunc);
        printf("Codigo: %d\n", funcionario3.codFunc);
        printf("Idade: %d\n", funcionario3.idade);
        printf("Salario: %f\n", funcionario3.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario3.endFunc.rua);
        printf(" Numero: %d\n", funcionario3.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario3.endFunc.cidade);
        printf("Cep: %s", funcionario3.endFunc.cep);

        //segundo funcionario por ordem ascendente de idadecendente de idade
        printf("\n\nO segundo mais jovem e o primeiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario1.nomeFunc);
        printf("Codigo: %d\n", funcionario1.codFunc);
        printf("Idade: %d\n", funcionario1.idade);
        printf("Salario: %f\n", funcionario1.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario1.endFunc.rua);
        printf(" Numero: %d\n", funcionario1.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario1.endFunc.cidade);
        printf("Cep: %s", funcionario1.endFunc.cep);

        //terceiro funcionario por ordem ascendente de idade
        printf("\n\nO terceiro mais jovem e o segundo funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario2.nomeFunc);
        printf("Codigo: %d\n", funcionario2.codFunc);
        printf("Idade: %d\n", funcionario2.idade);
        printf("Salario: %f\n", funcionario2.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario2.endFunc.rua);
        printf(" Numero: %d\n", funcionario2.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario2.endFunc.cidade);
        printf("Cep: %s", funcionario2.endFunc.cep);

    }
    else if (funcionario3.idade < funcionario2.idade && funcionario2.idade < funcionario1.idade){

        //primeiro funcionario por ordem ascendente de idade
        printf("\n\nO funcionario mais jovem e o terceiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario3.nomeFunc);
        printf("Codigo: %d\n", funcionario3.codFunc);
        printf("Idade: %d\n", funcionario3.idade);
        printf("Salario: %f\n", funcionario3.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario3.endFunc.rua);
        printf(" Numero: %d\n", funcionario3.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario3.endFunc.cidade);
        printf("Cep: %s", funcionario3.endFunc.cep);

        //segundo funcionario por ordem ascendente de idadecendente de idade
        printf("\n\nO segundo mais jovem e o segundo funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario2.nomeFunc);
        printf("Codigo: %d\n", funcionario2.codFunc);
        printf("Idade: %d\n", funcionario2.idade);
        printf("Salario: %f\n", funcionario2.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario2.endFunc.rua);
        printf(" Numero: %d\n", funcionario2.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario2.endFunc.cidade);
        printf("Cep: %s", funcionario2.endFunc.cep);

        //terceiro funcionario por ordem ascendente de idade
        printf("\n\nO terceiro mais jovem e o primeiro funcionario cadastrado\n");
        printf("Nome: %s\n", funcionario1.nomeFunc);
        printf("Codigo: %d\n", funcionario1.codFunc);
        printf("Idade: %d\n", funcionario1.idade);
        printf("Salario: %f\n", funcionario1.salFunc);
        printf("Endereco do funcionario\n");
        printf("Rua: %s", funcionario1.endFunc.rua);
        printf(" Numero: %d\n", funcionario1.endFunc.num);
        printf("Cidade: %s Estado %s\n", funcionario1.endFunc.cidade);
        printf("Cep: %s", funcionario1.endFunc.cep);
    }
}
