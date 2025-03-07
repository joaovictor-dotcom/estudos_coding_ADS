#include <stdio.h>
#include <locale.h>

// definição de constantes
#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Bem vindo ao jogo de Batalha Naval!\n");
    printf("TABULEIRO DE BATALHA NAVAL\n");

    int matriz[LINHAS][COLUNAS];
    
    for (int i = 0; i < LINHAS; i++) // estrutura de repetição das linhas
    {
        for (int j = 0; j < COLUNAS; j++) // estrutura de repetição das colunas
        {
            matriz[i][j] = 0;

            //inclusão dos navios
            //navio vertical
            matriz[5][2] = NAVIO;
            matriz[6][2] = NAVIO;
            matriz[7][2] = NAVIO;

            //navio horizontal
            matriz[8][5] = NAVIO;
            matriz[8][6] = NAVIO;
            matriz[8][7] = NAVIO;

            //navio diagonal com estrutura de repetição
            for (int i = 0; i < 3; i++)
            {
                if(matriz[i] == matriz[j]) {
                    matriz[i][j] = NAVIO;
                }
            }
            
            //impressão do tabuleiro
            printf("%d ", matriz[i][j]);

        }
    printf("\n");
    }
    
    return 0;
}