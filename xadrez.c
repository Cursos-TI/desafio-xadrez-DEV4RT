#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Definindo o número de casas para cada peça se mover
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    int casas_cavalo_vertical = 2;  // O Cavalo move 2 casas para baixo
    int casas_cavalo_horizontal = 1; // O Cavalo move 1 casa para a esquerda

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // A Torre move-se apenas na horizontal ou vertical, no caso, movendo-se 5 casas para a direita.

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n"); // A Torre se move apenas para a direita
    }

    printf("\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // O Bispo se move na diagonal para cima e à direita, simulando 5 casas.

    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= casas_bispo; i++) {
        printf("Cima Direita\n"); // O Bispo se move na diagonal para cima e à direita
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // A Rainha pode se mover em todas as direções, mas neste caso, vamos simular 8 casas para a esquerda.

    printf("Movimento da Rainha:\n");
    int j = 1;
    while (j <= casas_rainha) {
        printf("Esquerda\n"); // A Rainha se move para a esquerda
        j++;
    }

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Implementação de Movimentação do Cavalo

    printf("Movimento do Cavalo:\n");

    // Movendo 2 casas para baixo (vertical)
    for (int i = 1; i <= casas_cavalo_vertical; i++) {
        printf("Baixo\n");  // Movendo para baixo
    }

    // Movendo 1 casa para a esquerda (horizontal)
    int k = 1;
    while (k <= casas_cavalo_horizontal) {
        printf("Esquerda\n");  // Movendo para a esquerda
        k++;
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops

    return 0;
}