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
    printf("Para que o jogo seja justo, os valores da segunda carta ser�o randomizados aleatoriamente.\n");
    printf("Agora, qual � o Estado da sua carta?\n");
    scanf(" %s", estado2);
    printf("Agora, qual � o c�digo da sua carta?\n");
    scanf(" %s", codigo2);
    printf("Agora, qual � o nome da cidade da sua carta?\n");
    scanf(" %s", cidade2);
    getchar();
    // randomiza��o de valores
    srand(time(NULL));
    populacao2 = rand() % 1000000;
    turismo2 = rand() % 1000000;
    tamanho2 = rand() % 1000;
    pib2 = rand() % 1000000;
    printf("Agora que as duas cartas est�o prontas, vamos come�ar o jogo!\n");
    
    // fim da entrada de dados
    //c�lculo densidade populacional

    float densidade = (float) populacao / tamanho;
    float densidade2 = (float) populacao2 / tamanho2;

    //c�lculo pib per capta
    
    float pib_per_capta = pib / populacao;
    float pib_per_capta2 = pib2 / populacao2;
    
    //c�lculo do poder total
    float poder_total = ((populacao + turismo + pib + pib_per_capta) - densidade) / 5;
    float poder_total2 = ((populacao2 + turismo2 + pib2 + pib_per_capta2) - densidade2) / 5;
    
    
    //resultado do jogo
    //decis�o do primeiro atributo que ser� utilizado
    int primeiroAtributo, resultado1;
    printf("Agora, %s, escolha o atributo que ser� utilizado para decidir o vencedor do jogo:\n1 - Popula��o\n2 - Tamanho\n3 - PIB\n4 - Pontos Tur�sticos\n5 - Densidade Populacional\n6 - PIB per Capta\n7 - M�dia Aritm�tica\n", nome);
    scanf("%d", &primeiroAtributo);
    getchar();

    switch (primeiroAtributo)
    {
    case 1:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = tamanho > tamanho2 ? 1 : 0;
        break;
    case 3:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = pib > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = turismo > turismo2 ? 1 : 0;
        break;
    case 5:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = densidade < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = pib_per_capta > pib_per_capta2 ? 1 : 0;
        break;
    case 7:
        printf("Atributo escolhido: %d\n", primeiroAtributo);
        resultado1 = poder_total > poder_total2 ? 1 : 0;
        break;
        
        default:
        printf("Op��o inv�lida! Tente novamente!\n");
        break;
    }

    //decis�o do segundo atributo

    printf("Agora vamos decidir o segundo atributo que ser� utilizado para decidir o vencedor do jogo:\n1 - Popula��o\n2 - Tamanho\n3 - PIB\n4 - Pontos Tur�sticos\n5 - Densidade Populacional\n6 - PIB per Capta\n7 - M�dia Aritm�tica\n");
    int segundoAtributo, resultado2;
    scanf("%d", &segundoAtributo);
    getchar();
    if (segundoAtributo == primeiroAtributo) {
        printf("Voc� escolheu o mesmo atributo que o anterior! Tente novamente!\n");
    } else {
        switch (primeiroAtributo)
        {
        case 1:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = tamanho > tamanho2 ? 1 : 0;
            break;
        case 3:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = pib > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = turismo > turismo2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = densidade < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = pib_per_capta > pib_per_capta2 ? 1 : 0;
            break;
        case 7:
            printf("Atributo escolhido: %d\n", segundoAtributo);
            resultado2 = poder_total > poder_total2 ? 1 : 0;
            break;
            
            default:
            printf("Op��o inv�lida! Tente novamente!\n");
            break;
        }
    }
    
    //fim do tempo de decis�o

    //resultado do jogo
    if (resultado1 == 1 && resultado2 == 1) {
        printf("Parab�ns, %s! Voc� venceu o jogo!\n", nome);
    } else if (resultado1 == 0 && resultado2 == 0) {
        printf("Que pena, %s! Voc� perdeu o jogo!\n", nome);
    } else {
        printf("Empate! Vamos jogar novamente!\n");
    }
    

    
    // impress�o das cartas
    printf("\nAgora eu vou mostrar os dados das cartas que voc� montou, %s!\n", nome);
    // CARTA 1 ---------------------------------------------------------------------------------------
    printf("Carta 1:\nEstado: %s\nC�digo: %s\nNome da Cidade: %s\nPopula��o: %d\n�rea: %.2f km�\nPIB: %.2f\nPontos Tur�sticos: %d\nDensidade Populacional: %f\nPIB per Capta: %f\nPoder Total: %f\n\n", estado, codigo, cidade, populacao, tamanho, pib, turismo, densidade, pib_per_capta, poder_total);
    
    // CARTA 2 ---------------------------------------------------------------------------------------
    printf("Carta 2:\nEstado: %s\nC�digo: %s\nNome da Cidade: %s\nPopula��o: %d\n�rea: %.2f km�\nPIB: %.2f\nPontos Tur�sticos: %d\nDensidade Populacional: %f\nPIB per Capta: %f\nPoder Total: %f\n\n", estado2, codigo2, cidade2, populacao2, tamanho2, pib2, turismo2, densidade2, pib_per_capta2, poder_total2);
    
    
    return 0;
}