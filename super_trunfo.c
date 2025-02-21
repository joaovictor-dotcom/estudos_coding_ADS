#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // primeira carta
    char nome[16], estado[16], codigo[4], cidade[16];
    int populacao, turismo;
    float tamanho, pib;

    printf("Voc� est� come�ando a jogar Super Trunfo!\n Inicie nos informando seu nome:\n");
    scanf(" %s", nome);
    printf("Bem-vindo ao jogo, %s!\n", nome);
    printf("Agora, qual � o Estado da sua carta?\n");
    scanf(" %s", estado);
    printf("Agora, qual � o c�digo da sua carta?\n");
    scanf(" %s", codigo);
    printf("Agora, qual � o nome da sua carta?\n");
    scanf(" %s", cidade);
    printf("Agora, qual � a popula��o da sua carta?\n");
    scanf("%d", &populacao);
    getchar();
    printf("Agora, qual � o tamanho da cidade da sua carta em km�?\n");
    scanf("%f", &tamanho);
    getchar();
    printf("Agora, qual � o PIB da cidade da sua carta?\n");
    scanf("%f", &pib);
    getchar();
    printf("Agora, quantos pontos tur�sticos tem a cidade da sua carta?\n");
    scanf("%d", &turismo);
    getchar();

    // segunda carta
    char estado2[16], codigo2[4], cidade2[16];
    int populacao2, turismo2;
    float tamanho2, pib2;
    
    printf("Agora que voc� j� criou sua primeira carta, vamos criar a segunda!\n");
    printf("Concentre-se na segunda carta agora, %s!\n", nome);
    printf("Agora, qual � o Estado da sua carta?\n");
    scanf(" %s", estado2);
    printf("Agora, qual � o c�digo da sua carta?\n");
    scanf(" %s", codigo2);
    printf("Agora, qual � o nome da sua carta?\n");
    scanf(" %s", cidade2);
    getchar();
    printf("Agora, qual � a popula��o da sua carta?\n");
    scanf("%d", &populacao2);
    getchar();
    printf("Agora, qual � o tamanho da cidade da sua carta em km�?\n");
    scanf("%f", &tamanho2);
    getchar();
    printf("Agora, qual � o PIB da cidade da sua carta?\n");
    scanf("%f", &pib2);
    getchar();
    printf("Agora, quantos pontos tur�sticos tem a cidade da sua carta?\n");
    scanf("%d", &turismo2);
    getchar();
    
    // fim da entrada de dados
    //c�lculo densidade populacional

    float densidade = (float) populacao / tamanho;
    float densidade2 = (float) populacao2 / tamanho2;

    //c�lculo pib per capta
    
    float pib_per_capta = pib / populacao;
    float pib_per_capta2 = pib2 / populacao2;
    
    //c�lculo do poder total
    float poder_total = (populacao + turismo + pib + densidade + pib_per_capta) / 5;
    float poder_total2 = (populacao2 + turismo2 + pib2 + densidade2 + pib_per_capta2) / 5;
    
    
    //resultado do jogo
    //decis�o do atributo que ser� utilizado
    int decisao;
    printf("Agora, %s, escolha o atributo que ser� utilizado para decidir o vencedor do jogo:\n1 - Popula��o\n2 - Tamanho\n3 - PIB\n4 - Pontos Tur�sticos\n5 - Densidade Populacional\n6 - PIB per Capta\n7 - M�dia Aritm�tica\n", nome);
    scanf("%d", &decisao);
    getchar();
    printf("\n\n");

    switch (decisao)
    {
    case 1:
        if ( (int) populacao > populacao2) {
            printf("Parab�ns, %s! A carta N�1 venceu o jogo!\n", nome);
        } else if (populacao2 > populacao) {
            printf("Que pena, %s! A carta N�2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 2:
        if (tamanho > tamanho2) {
            printf("Parab�ns, %s! A carta N�1 venceu o jogo!\n", nome);
        } else if (tamanho2 > tamanho) {
            printf("Que pena, %s! A carta N�2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 3:
        if (pib > pib2) {
            printf("Parab�ns, %s! A carta N�1 venceu o jogo!\n", nome);
        } else if (pib2 > pib) {
            printf("Que pena, %s! A carta N�2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 4:
        if ((int) turismo > turismo2) {
            printf("Parab�ns, %s! A carta N�1 venceu o jogo!\n", nome);
        } else if (turismo2 > turismo) {
            printf("Que pena, %s! A carta N�2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 5:
        if (densidade < densidade2) {
            printf("Parab�ns, %s! A carta N�1 venceu o jogo!\n", nome);
        } else if (densidade2 < densidade) {
            printf("Que pena, %s! A carta N�2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 6:
        if (pib_per_capta > pib_per_capta2) {
            printf("Parab�ns, %s! A carta N�1 venceu o jogo!\n", nome);
        } else if (pib_per_capta2 > pib_per_capta) {
            printf("Que pena, %s! A carta N�2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
    case 7:
        if (poder_total > poder_total2) {
            printf("Parab�ns, %s! A carta N�1 venceu o jogo!\n", nome);
        } else if (poder_total2 > poder_total) {
            printf("Que pena, %s! A carta N�2 venceu o jogo!\n", nome);
        } else {
            printf("Empate! %s, ambas as cartas empataram o jogo!\n", nome);
        }
        break;
        
        default:
        printf("Op��o inv�lida! Tente novamente!\n");
        break;
    }
    
    //fim do tempo de decis�o

    
    // impress�o das cartas
    printf("Agora eu vou mostrar os dados das cartas que voc� montou, %s!\n", nome);
    // CARTA 1 ---------------------------------------------------------------------------------------
    printf("Carta 1:\nEstado: %s\nC�digo: %s\nNome da Cidade: %s\nPopula��o: %d\n�rea: %.2f km�\nPIB: %.2f\nPontos Tur�sticos: %d\nDensidade Populacional: %f\nPIB per Capta: %f\n\n\nPoder Total: %f", estado, codigo, cidade, populacao, tamanho, pib, turismo, densidade, pib_per_capta, poder_total);
    
    // CARTA 2 ---------------------------------------------------------------------------------------
    printf("Carta 2:\nEstado: %s\nC�digo: %s\nNome da Cidade: %s\nPopula��o: %d\n�rea: %.2f km�\nPIB: %.2f\nPontos Tur�sticos: %d\nDensidade Populacional: %f\nPIB per Capta: %f\n\n\nPoder Total: %f\n", estado2, codigo2, cidade2, populacao2, tamanho2, pib2, turismo2, densidade2, pib_per_capta2, poder_total2);
    
    
    return 0;
}