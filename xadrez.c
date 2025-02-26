#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Declaração de variáveis
    int torre1, rainha1, bispo1, cavalo1;
    
    // Rainha: 8 casas p/ esquerda
    // Torre: 5 casas p/ direita
    // Bispo: 5 casas p/ diagonal (cima e direita)

    // Decisão de movimentação das peças
    printf("Qual peça você deseja movimentar?\n");
    printf("1 - Torre\n");
    printf("2 - Rainha\n");
    printf("3 - Bispo\n");
    printf("4 - Cavalo\n");
    printf("5 - Todas\n");
    int variavel;
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        /* Torre */
        for (torre1 = 1; torre1 <= 5; torre1++)
        {
            printf("Direita %dª.\n", torre1);
        }
        break;
    case 2:
        /* Rainha */
        for (rainha1 = 1; rainha1 <= 8; rainha1++)
        {
            printf("Esquerda %dª.\n", rainha1);
        }
        break;
    case 3:
        /* Bispo */
        for (bispo1 = 1; bispo1 <= 5; bispo1++)
        {
            printf("Cima %dª.\n", bispo1);
            printf("Direita %dª.\n", bispo1);
        }
        break;
    case 4:
        /* Cavalo */
        // decisão cima ou baixo 
        printf("Escolha para qual lado você deseja movimentar o cavalo:\n");
        printf("1 - Cima\n");
        printf("2 - Baixo\n");
        int mov_cavalo;
        scanf("%d", &mov_cavalo);
        switch (mov_cavalo){
            case 1:
                //decisão esquerda ou direita (caso: cima)
                printf("Esquerda, ou direita?\n");
                printf("1 - Esquerda\n");
                printf("2 - Direita\n");
                int mov_cavalo2;
                scanf("%d", &mov_cavalo2);
                switch (mov_cavalo2)
                {
                case 1:
                    for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
                    {
                        for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
                        {
                            printf("Cima %dª.\n", cavalo1);
                        }
                        printf("Esquerda %dª.\n", cavalo1);
                    }
                    break;
                case 2:
                    for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
                    {
                        for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
                        {
                            printf("Cima %dª.\n", cavalo1);
                        }
                        printf("Direita %dª.\n", cavalo1);
                    }
                    break;
                
                default:
                    printf("Opção inválida.\n");
                    break;
                }
                break;
            case 2:
                //decisão esquerda ou direita (caso: baixo)
                printf("Esquerda, ou direita?\n");
                printf("1 - Esquerda\n");
                printf("2 - Direita\n");
                scanf("%d", &mov_cavalo2);
                switch (mov_cavalo2)
                {
                case 1:
                    for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
                    {
                        for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
                        {
                            printf("Baixo %dª.\n", cavalo1);
                        }
                        printf("Esquerda %dª.\n", cavalo1);
                    }
                    break;
                case 2:
                    for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
                    {
                        for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
                        {
                            printf("Baixo %dª.\n", cavalo1);
                        }
                        printf("Direita %dª.\n", cavalo1);
                    }
                    break;
                
                default:
                    printf("Opção inválida.\n");
                    break;
                }
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
        
        break;
    case 5:
        /* Todas */
        printf("Todas as peças.\n");
        printf("\nTorre:\n");
        for (torre1 = 1; torre1 <= 5; torre1++)
        {
            printf("Direita %dª.\n", torre1);
        }
        printf("\nRainha:\n");
        for (rainha1 = 1; rainha1 <= 8; rainha1++)
        {
            printf("Esquerda %dª.\n", rainha1);
        }
        printf("\nBispo:\n");
        for (bispo1 = 1; bispo1 <= 5; bispo1++)
        {
            printf("Cima %dª.\n", bispo1);
            printf("Direita %dª.\n", bispo1);
        }
        printf("\nCavalo:\n");
        for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
        {
            for (cavalo1 = 1; cavalo1 <= 3; cavalo1++)
            {
                printf("Cima %dª.\n", cavalo1);
            }
            printf("Direita %dª.\n", cavalo1);
        }
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    
    return 0;
}