#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // primeira carta
    char nome[16], estado[16], codigo[4], cidade[16];
    int populacao, turismo;
    float tamanho, pib;

    printf("Você está começando a jogar Super Trunfo!\n Inicie nos informando seu nome:\n");
    scanf(" %s", nome);
    printf("Bem-vindo ao jogo, %s!\n", nome);
    printf("Agora, qual é o Estado da sua carta?\n");
    scanf(" %s", estado);
    printf("Agora, qual é o código da sua carta?\n");
    scanf(" %s", codigo);
    printf("Agora, qual é o nome da sua carta?\n");
    scanf(" %s", cidade);
    printf("Agora, qual é a população da sua carta?\n");
    scanf("%d", &populacao);
    getchar();
    printf("Agora, qual é o tamanho da cidade da sua carta em km²?\n");
    scanf("%f", &tamanho);
    getchar();
    printf("Agora, qual é o PIB da cidade da sua carta?\n");
    scanf("%f", &pib);
    getchar();
    printf("Agora, quantos pontos turísticos tem a cidade da sua carta?\n");
    scanf("%d", &turismo);
    getchar();

    // segunda carta
    char estado2[16], codigo2[4], cidade2[16];
    int populacao2, turismo2;
    float tamanho2, pib2;
    
    printf("Agora que você já criou sua primeira carta, vamos criar a segunda!\n");
    printf("Concentre-se na segunda carta agora, %s!\n", nome);
    printf("Agora, qual é o Estado da sua carta?\n");
    scanf(" %s", estado2);
    printf("Agora, qual é o código da sua carta?\n");
    scanf(" %s", codigo2);
    printf("Agora, qual é o nome da sua carta?\n");
    scanf(" %s", cidade2);
    getchar();
    printf("Agora, qual é a população da sua carta?\n");
    scanf("%d", &populacao2);
    getchar();
    printf("Agora, qual é o tamanho da cidade da sua carta em km²?\n");
    scanf("%f", &tamanho2);
    getchar();
    printf("Agora, qual é o PIB da cidade da sua carta?\n");
    scanf("%f", &pib2);
    getchar();
    printf("Agora, quantos pontos turísticos tem a cidade da sua carta?\n");
    scanf("%d", &turismo2);
    getchar();
    
    // fim da entrada de dados
    //cálculo densidade populacional

    float densidade = (float) populacao / tamanho;
    float densidade2 = (float) populacao2 / tamanho2;

    //cálculo pib per capta
    
    float pib_per_capta = pib / populacao;
    float pib_per_capta2 = pib2 / populacao2;
    
    //cálculo do poder total
    float poder_total = (populacao + turismo + pib + densidade + pib_per_capta) / 5;
    float poder_total2 = (populacao2 + turismo2 + pib2 + densidade2 + pib_per_capta2) / 5;
    
    
    //resultado do jogo
    //decisão do atributo que será utilizado
    int decisao;
    printf("Agora, %s, escolha o atributo que será utilizado para decidir o vencedor do jogo:\n1 - População\n2 - Tamanho\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capta\n7 - Média Aritmética\n", nome);
    scanf("%d", &decisao);
    getchar();
    printf("\n\n");

    switch (decisao)
    {
    case 1:
        if ( (int) populacao > populacao2) {
            printf("Parabéns, %s! A carta Nº1 venceu o jogo!\n", nome);
        } else if (populacao2 > populacao) {
            printf("Que pena, %s! A carta Nº2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 2:
        if (tamanho > tamanho2) {
            printf("Parabéns, %s! A carta Nº1 venceu o jogo!\n", nome);
        } else if (tamanho2 > tamanho) {
            printf("Que pena, %s! A carta Nº2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 3:
        if (pib > pib2) {
            printf("Parabéns, %s! A carta Nº1 venceu o jogo!\n", nome);
        } else if (pib2 > pib) {
            printf("Que pena, %s! A carta Nº2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 4:
        if ((int) turismo > turismo2) {
            printf("Parabéns, %s! A carta Nº1 venceu o jogo!\n", nome);
        } else if (turismo2 > turismo) {
            printf("Que pena, %s! A carta Nº2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 5:
        if (densidade < densidade2) {
            printf("Parabéns, %s! A carta Nº1 venceu o jogo!\n", nome);
        } else if (densidade2 < densidade) {
            printf("Que pena, %s! A carta Nº2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 6:
        if (pib_per_capta > pib_per_capta2) {
            printf("Parabéns, %s! A carta Nº1 venceu o jogo!\n", nome);
        } else if (pib_per_capta2 > pib_per_capta) {
            printf("Que pena, %s! A carta Nº2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 7:
        if (poder_total > poder_total2) {
            printf("Parabéns, %s! A carta Nº1 venceu o jogo!\n", nome);
        } else if (poder_total2 > poder_total) {
            printf("Que pena, %s! A carta Nº2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
        
        default:
        printf("Opção inválida! Tente novamente!\n");
        break;
    }
    
    //fim do tempo de decisão

    
    // impressão das cartas
    printf("Agora eu vou mostrar os dados das cartas que você montou, %s!\n", nome);
    // CARTA 1 ---------------------------------------------------------------------------------------
    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %f\nPIB per Capta: %f\n\n\nPoder Total: %f", estado, codigo, cidade, populacao, tamanho, pib, turismo, densidade, pib_per_capta, poder_total);
    
    // CARTA 2 ---------------------------------------------------------------------------------------
    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %f\nPIB per Capta: %f\n\n\nPoder Total: %f\n", estado2, codigo2, cidade2, populacao2, tamanho2, pib2, turismo2, densidade2, pib_per_capta2, poder_total2);
    
    
    return 0;
}