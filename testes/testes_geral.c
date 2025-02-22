#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int atq1, atq2, def1, def2, hp1, hp2;
    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;

    srand(time(NULL));
    atq1 = rand() % 100;
    atq2 = rand() % 100;
    def1 = rand() % 100;
    def2 = rand() % 100;
    hp1 = rand() % 100;
    hp2 = rand() % 100;
    printf("Atributos do primeiro personagem: \n");
    printf("Ataque: %d\n", atq1);
    printf("Defesa: %d\n", def1);
    printf("HP: %d\n", hp1);
    
    printf("Escolha o primeiro atributo da batalha: ");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = atq1 > atq2 ?  1 : 0;
        break;
    case 2:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = def1 > def2 ?  1 : 0;
        break;
    case 3:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = hp1 > hp2 ?  1 : 0;
        break;
    
    default:
        printf("Atributo inválido\n");
        break;
    }

    printf("Escolha o segundo atributo da batalha: ");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("Atributo já escolhido\n");
    } else {
        switch (segundoAtributo)
        {
        case 1:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = atq1 > atq2 ?  1 : 0;
            break;
        case 2:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = def1 > def2 ?  1 : 0;
            break;
        case 3:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = hp1 > hp2 ?  1 : 0;
            break;
        
        default:
            printf("Atributo inválido\n");
            break;
        }
    }
    
    if (resultado1 == 1 && resultado2 == 1) {
        printf("Vitória do primeiro personagem\n");
    } else if (resultado1 == 0 && resultado2 == 0) {
        printf("Vitória do segundo personagem\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}