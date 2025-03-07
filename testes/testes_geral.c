#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10  // Tamanho do tabuleiro
#define NAVIO 3  // Valor que representa os navios
#define QUANT_NAVIOS 4  // Total de navios (2 normais e 2 diagonais)
#define TAM_NAVIO 3  // Tamanho fixo dos navios

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[SIZE][SIZE]) {
    printf("\n   ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d  ", i);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%d  ", i);
        for (int j = 0; j < SIZE; j++) {
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se um navio pode ser colocado sem sobreposição
int podePosicionar(int tabuleiro[SIZE][SIZE], int x, int y, int direcao) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        int novoX = x, novoY = y;

        if (direcao == 0) novoY += i;  // Horizontal
        else if (direcao == 1) novoX += i;  // Vertical
        else if (direcao == 2) { novoX += i; novoY += i; }  // Diagonal Principal
        else if (direcao == 3) { novoX += i; novoY -= i; }  // Diagonal Secundária

        if (novoX >= SIZE || novoY >= SIZE || novoY < 0 || tabuleiro[novoX][novoY] == NAVIO) {
            return 0;  // Não pode posicionar
        }
    }
    return 1;
}

// Função para posicionar os navios aleatoriamente
void posicionarNavios(int tabuleiro[SIZE][SIZE]) {
    srand(time(NULL));
    int naviosColocados = 0;

    while (naviosColocados < QUANT_NAVIOS) {
        int x = rand() % SIZE;
        int y = rand() % SIZE;
        int direcao;

        if (naviosColocados < 2) {
            direcao = rand() % 2;  // Apenas horizontal (0) ou vertical (1)
        } else {
            direcao = 2 + (rand() % 2);  // Apenas diagonal principal (2) ou secundária (3)
        }

        if (podePosicionar(tabuleiro, x, y, direcao)) {
            for (int i = 0; i < TAM_NAVIO; i++) {
                if (direcao == 0) tabuleiro[x][y + i] = NAVIO;  // Horizontal
                else if (direcao == 1) tabuleiro[x + i][y] = NAVIO;  // Vertical
                else if (direcao == 2) tabuleiro[x + i][y + i] = NAVIO;  // Diagonal Principal
                else if (direcao == 3) tabuleiro[x + i][y - i] = NAVIO;  // Diagonal Secundária
            }
            naviosColocados++;
        }
    }
}

int main() {
    int tabuleiro[SIZE][SIZE];

    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}
