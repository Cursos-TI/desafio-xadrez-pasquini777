#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

 char pecas[] = {'torre', 'bispo', 'rainha', 'cavalo'};
    int i;
    int movimentocompleto = 1;


    // Mostrar movimentos da torre 5 casas para a direita
    printf("torre :\n");
    for (i = 0; i < 5; i++)
    {
        printf("Direita\n"); // impreme a direção do movimento
    }
    printf("\n");
    // Mostrar movimentos do bispo 5 casas na diagonal superior direita
    printf("bispo :\n");
    i = 0;
    while (i < 5)
    {
        printf("Cima, direita\n"); // imprime a direção do movimento
        i++;
    }

    printf("\n");

    // Mostrar movimentos da rainha 8 casas para a esquerda
    printf("rainha :\n");
    i = 0;
    do
    {
        printf("Esquerda\n"); // imprime a direção do movimento
        i++;
    } while (i < 8);
       
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("cavalo :\n");
    while (movimentocompleto--)
    {

        for(int i = 0; i < 2; i++){
            printf("baixo\n");
        }
        printf("esquerda\n");
    }
    





    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
