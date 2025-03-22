#include <stdio.h>

// Definição do número de movimentos de cada peça
int MT = 5;  // Movimento da Torre
int MB = 5;  // Movimento do Bispo
int MR = 8;  // Movimento da Rainha
int MC = 1;  // Movimento do Cavalo (apenas uma vez para cima, cima e direita)

// Funções de movimentação básica (cima, baixo, esquerda, direita)
void moverCima(int n) {
    for (int i = 0; i < n; i++) {
        printf("cima");
        if (i < n - 1) printf(", ");
    }
}

void moverBaixo(int n) {
    for (int i = 0; i < n; i++) {
        printf("baixo");
        if (i < n - 1) printf(", ");
    }
}

void moverEsquerda(int n) {
    for (int i = 0; i < n; i++) {
        printf("esquerda");
        if (i < n - 1) printf(", ");
    }
}

void moverDireita(int n) {
    for (int i = 0; i < n; i++) {
        printf("direita");
        if (i < n - 1) printf(", ");
    }
}

// Funções de movimentação diagonal
void moverCimaDireita(int n) {
    for (int i = 0; i < n; i++) {
        printf("cima direita");
        if (i < n - 1) printf(", ");
    }
}

void moverCimaEsquerda(int n) {
    for (int i = 0; i < n; i++) {
        printf("cima esquerda");
        if (i < n - 1) printf(", ");
    }
}

void moverBaixoDireita(int n) {
    for (int i = 0; i < n; i++) {
        printf("baixo direita");
        if (i < n - 1) printf(", ");
    }
}

void moverBaixoEsquerda(int n) {
    for (int i = 0; i < n; i++) {
        printf("baixo esquerda");
        if (i < n - 1) printf(", ");
    }
}

// Funções para a movimentação específica do Cavalo
void moverCavaloCimaCimaDireita() {
    printf("cima, cima, direita");
}

// Funções para movimentação das peças
void moverTorre() {
    printf("Torre: ");
    moverDireita(MT);  // Mover n casas para a direita
    printf(" (%d x)\n", MT);  // Mostrar o número de movimentos
}

void moverBispo() {
    printf("Bispo: ");
    moverCimaDireita(MB);  // Movimento diagonal para cima direita
    printf(" (%d x)\n", MB);  // Mostrar o número de movimentos
}

void moverRainha() {
    printf("Rainha: ");
    moverCimaDireita(MR);  // Movimento diagonal para cima direita
    printf(" (%d x)\n", MR);  // Mostrar o número de movimentos
}

void moverCavalo() {
    printf("Cavalo: ");
    moverCavaloCimaCimaDireita();  // Movimento específico para o cavalo
    printf(" (%d x)\n", MC);  // Mostrar o número de movimentos
}

int main() {
    // Chamadas das funções para cada peça com o número de movimentos
    moverTorre();
    moverBispo();
    moverRainha();
    moverCavalo();

    return 0;
}
