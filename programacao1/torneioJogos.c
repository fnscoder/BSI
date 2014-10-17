/*

AA 3.2 - Torneio de jogos
Contexto
Em um torneio de jogos na Internet, as partidas são disputadas até que haja um 
vencedor ou até uma duração máxima de 2 horas, quando é decretado empate. 
É preciso saber a duração de uma partida, depois de registrados seu horário 
de início e de término.
As partidas podem começar em qualquer horário, incluindo partidas noturnas. 
Assim um confronto pode começar em um dia e terminar no dia seguinte.
Especificação
É preciso que, dados os horários de início e de término de uma partida, seja 
escrita sua duração em horas e minutos.
Os horários serão digitados dando os valores em horas e minutos, variando de 0 
hora e 0 minuto até 23 horas e 59 minutos.
Caso haja algum erro no horário digitado (16h72min, por exemplo), a saída, 
necessariamente, deverá ser o valor de 99 horas e 99 minutos, indicando que 
houve algum erro. Nenhuma outra mensagem deve ser escrita.
Se os horários indicados indicarem uma duração maior que 2h, o valor 99 horas e 
99 minutos também deve ser a saída.
O que fazer
Deve ser desenvolvido um algoritmo que proponha uma solução para o problema, 
de forma a fazer o cálculo da duração de uma partida por execução.
Também um programa em C deve ser codificado a partir do algoritmo, para o qual a 
única saída deve ser no formato "xhymin" exemplos: "1h10min", "0h7min", 
"0h58min"). Opcionalmente as saídas podem ser "01h10min", 00h07min" ou "00h58min". 
Somente a duração deve ser escrita, sem qualquer outra mensagem 
(exceto as apresentadas para a leitura).
Importante: Orientações para entrega.
Importante
A especificação do comportamento do algoritmo/programa é importante e deve ser 
seguida à risca. Por exemplo, saídas como as seguintes são consideradas incorretas:
A duração foi de 1 hora e 10 minutos
1:33
1:33 horas
Horas: 1; Minutos: 33

AUTOR: FELIPE NOGUEIRA DE SOUZA 04/05/2014

*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    
    //declarando variaveis
    int horaInicio, minInicio, horaTerm, minTerm, minSoma, horaTotal, minTotal, horaInv;
        
    //inicializando as variaveis
    horaInicio = 0;
    minInicio = 0;
    horaTerm = 0;
    minTerm = 0;
    minSoma = 0;        
    horaTotal = 0;
    minTotal = 0;
    horaInv = 0;
         
    //solicitando e recebendo os horarios de inicio e termino do jogo
    printf("\n\n********************************************************"); 
    printf("\n\nDigite o horario de inicio do jogo: ");
    scanf("%d", &horaInicio);
      
    printf("\n\nDigite os minutos de inicio do jogo: ");
    scanf("%d", &minInicio); 
       
    printf("\n\nInicio do jogo: %d horas %d minutos", horaInicio, minInicio);
    
    printf("\n\n********************************************************");  
    printf("\n\nDigite o horario de termino do jogo: ");
    scanf("%d", &horaTerm);
      
    printf("\n\nDigite os minutos de termino do jogo: ");
    scanf("%d", &minTerm); 
       
    printf("\n\nTermino do jogo %d horas e %d minutos", horaTerm, minTerm);

    printf("\n\n********************************************************"); 
      
    //verifica validade dos horarios
    if (horaInicio >= 0 && horaInicio <= 23 && horaTerm >= 0 && horaTerm <= 23 && 
            minInicio >= 0 && minInicio <= 59 && minTerm >= 0 && minTerm <= 59)
        {        
            if (horaInicio == horaTerm)
                {             
                    if (minInicio < minTerm)
                        {                    
                            horaTotal = 0;
                            minSoma = minTerm - minInicio;
                        }
                    else if (minInicio > minTerm)
                        {                    
                            horaInv = 1; 
                        }
                }
            else 
                {            
                    minSoma = 60 - minInicio;
                    minSoma = minSoma + minTerm;
                    
                    if (horaInicio > horaTerm)
                        {                
                            horaInicio = horaInicio + 1;
                            horaTotal = (24 - horaInicio) + horaTerm;
                        }
                    else
                        {                                             
                            horaInicio = horaInicio + 1;           
                            horaTotal =  horaTerm - horaInicio;                                    
                        }
                }

            minSoma = (minSoma + (horaTotal * 60));

            if (minSoma <= 120)
                {
                    horaTotal = minSoma / 60;
                    minTotal = minSoma % 60;      
                }
                
            else
                {
                    horaInv = 1;
                }                                    
        }        
    else 
        {                 
            horaInv = 1;        
        }           
            
    //exibe o resultado 
    
    if (horaInv == 1)
    {
        printf("\n\n99 horas e 99 minutos");
    }
    else 
    {                 
        printf("\n\n%dh%dmin ", horaTotal, minTotal);
    }
    printf("\n\n\n");
    system("PAUSE");	
    return 0;
}
