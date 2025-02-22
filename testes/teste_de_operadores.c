#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char nome[] = "Julia";
    char estado2[16], codigo2[4], cidade2[16];
    int populacao2, turismo2;
    float tamanho2, pib2;
    
    printf("Agora que você já criou sua primeira carta, vamos criar a segunda!\n");
    printf("Concentre-se na segunda carta agora, %s!\n", nome);
    printf("Para que o jogo seja justo, os valores da segunda carta serão randomizados aleatoriamente.\n");
    printf("Agora, qual é o Estado da sua carta?\n");
    scanf(" %s", estado2);
    printf("Agora, qual é o código da sua carta?\n");
    scanf(" %s", codigo2);
    printf("Agora, qual é o nome da cidade da sua carta?\n");
    scanf(" %s", cidade2);
    getchar();
    // randomização de valores
    srand(time(NULL));
    populacao2 = rand() % 1000000;
    turismo2 = rand() % 1000000;
    tamanho2 = rand() % 1000;
    pib2 = rand() % 1000000;
    printf("Agora que as duas cartas estão prontas, vamos começar o jogo!\n");
    
    return 0;
}
