/*

AA 4.2 - Melhor desempenho
Apresenta��o
Em um evento de computa��o foi proposta uma "codifica��o rel�mpago", na qual os 
participantes se inscreviam na competi��o e ganhavam um c�digo num�rico 
inteiro positivo) de participa��o, al�m de terem acesso a uma sala com 
computador para realizar a programa��o.
Na prova, era apresentado um problema e cada competidor realizava sua implementa��o. 
Quando terminavam, o programa escrito era entregue para corre��o.
Cada programa era avaliado por um comit�, recebendo notas de 0 a 10.
Como incentivo, houve um pr�mio para o melhor colocado, que era o que tinha 
recebido a melhor nota. Em caso de empate de notas, o vencedor seria o que tivesse 
entregue sua solu��o antes.
Informa��es
O controle das entregas foi feito em uma planilha em papel, na qual eram registrados, 
na hora da entrega do programa, os c�digos de inscri��o dos candidatos. Desta forma, 
necessariamente a lista definia a ordem de entrega (que poderia, se necess�rio, 
ser usada para desempate).
Depois de avaliados os programas, na mesma planilha eram escritas as notas.
Um programa deve ser elaborado para permitir digitar os dados da planilha 
c�digo de inscri��o e nota obtida) para todos os inscritos, o que se dar� na 
ordem da planilha e, portanto, na ordem de entrega. Ao final, deve ser apresentado 
o c�digo de inscri��o do vencedor da competi��o, juntamente com sua nota.
Especifica��o
Escreva um algoritmo que resolva o problema proposto e implemente uma vers�o 
deste algoritmo em C. N�o s�o necess�rias verifica��es de consist�ncia (ou seja, 
n�o � preciso verificar se os c�digos s�o v�lidos nem se as notas est�o realmente 
no intervalo v�lido).

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
