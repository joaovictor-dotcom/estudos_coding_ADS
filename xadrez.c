#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Declara��o de vari�veis
    int torre1, rainha1, bispo1;
    // Rainha: 8 casas p/ esquerda
    // Torre: 5 casas p/ direita
    // Bispo: 5 casas p/ diagonal (cima e direita)

    // Decis�o de movimenta��o das pe�as
    printf("Qual pe�a voc� deseja movimentar?\n");
    printf("1 - Torre\n");
    printf("2 - Rainha\n");
    printf("3 - Bispo\n");
    printf("4 - Todas\n");
    int variavel;
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        /* Torre */
        for (torre1 = 1; torre1 <= 5; torre1++)
        {
            printf("Direita %d�.\n", torre1);
        }
        break;
    case 2:
        /* Rainha */
        for (rainha1 = 1; rainha1 <= 8; rainha1++)
        {
            printf("Esquerda %d�.\n", rainha1);
        }
        break;
    case 3:
        /* Bispo */
        for (bispo1 = 1; bispo1 <= 5; bispo1++)
        {
            printf("Cima %d�.\n", bispo1);
            printf("Direita %d�.\n", bispo1);
        }
        break;
    case 4:
        /* Todas */
        for (torre1 = 1; torre1 <= 5; torre1++)
        {
            printf("Direita %d�.\n", torre1);
        }
        for (rainha1 = 1; rainha1 <= 8; rainha1++)
        {
            printf("Esquerda %d�.\n", rainha1);
        }
        for (bispo1 = 1; bispo1 <= 5; bispo1++)
        {
            printf("Cima %d�.\n", bispo1);
            printf("Direita %d�.\n", bispo1);
        }
        break;
    
    default:
        printf("Op��o inv�lida.\n");
        break;
    }
    
    return 0;
}