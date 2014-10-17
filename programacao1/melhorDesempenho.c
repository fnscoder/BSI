/*

AA 4.2 - Melhor desempenho
Apresentação
Em um evento de computação foi proposta uma "codificação relâmpago", na qual os 
participantes se inscreviam na competição e ganhavam um código numérico 
inteiro positivo) de participação, além de terem acesso a uma sala com 
computador para realizar a programação.
Na prova, era apresentado um problema e cada competidor realizava sua implementação. 
Quando terminavam, o programa escrito era entregue para correção.
Cada programa era avaliado por um comitê, recebendo notas de 0 a 10.
Como incentivo, houve um prêmio para o melhor colocado, que era o que tinha 
recebido a melhor nota. Em caso de empate de notas, o vencedor seria o que tivesse 
entregue sua solução antes.
Informações
O controle das entregas foi feito em uma planilha em papel, na qual eram registrados, 
na hora da entrega do programa, os códigos de inscrição dos candidatos. Desta forma, 
necessariamente a lista definia a ordem de entrega (que poderia, se necessário, 
ser usada para desempate).
Depois de avaliados os programas, na mesma planilha eram escritas as notas.
Um programa deve ser elaborado para permitir digitar os dados da planilha 
código de inscrição e nota obtida) para todos os inscritos, o que se dará na 
ordem da planilha e, portanto, na ordem de entrega. Ao final, deve ser apresentado 
o código de inscrição do vencedor da competição, juntamente com sua nota.
Especificação
Escreva um algoritmo que resolva o problema proposto e implemente uma versão 
deste algoritmo em C. Não são necessárias verificações de consistência (ou seja, 
não é preciso verificar se os códigos são válidos nem se as notas estão realmente 
no intervalo válido).

Autor: FELIPE NOGUEIRA DE SOUZA 19/05/2014

*/

#include <stdio.h>

int main(int argc, char *argv[])
{    
    
    int id, nota, qtdeInscritos, i, vencedorNota, vencedorId;
    vencedorNota = 0;
    vencedorId = 0;
    id = 0;
    nota = 0;
    qtdeInscritos = 0;
    
    printf("\n********************************************************************************");
    printf("\n\n****************************** MELHOR DESEMPENHO ***********************+*******");
    printf("\n\n********************************************************************************");
    
    printf("\n\n\nInforme a quantidade de participantes: ");
    scanf("%d", & qtdeInscritos);
    
    for (i = 0; i < qtdeInscritos; i++){
        
        printf("\n\nDigite o codigo de inscricao do %d participante: ", i + 1);
        scanf("%d", &id);
        
        printf("\n\nDigite a nota do %d participante: ", i + 1);
        scanf("%d", &nota);
        
        if (nota > vencedorNota){
            
            vencedorNota = nota;
            vencedorId = id;
        }               
    }
    
    printf("\n\nO vencedor foi o participante de incricao %d e sua nota foi %d", vencedorId, vencedorNota);  
    
    printf("\n\n\n");
    system("PAUSE");	
    return 0;    
}
