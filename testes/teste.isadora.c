#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int atq, hp, def, stm, burrice;
    int atq2, hp2, def2, stm2, burrice2;
    printf("Digite o ataque, HP, defesa e estamina do seu personagem na respectiva ordem: \n");
    scanf("%d\n %d\n %d\n %d\n", &atq, &hp, &def, &stm);
    burrice = rand() % 100;
    printf("A sua burrice é um número definido aleatoriamente: %d\n", burrice);
    int poder_total = (atq + hp + def + stm) - burrice;
    printf("Seu poder total é: %d\n", poder_total);
    srand(time(NULL));
    atq2 = rand() % 100;
    hp2 = rand() % 100;
    def2 = rand() % 100;
    stm2 = rand() % 100;
    burrice2 = rand() % 100;
    printf("Ataque do oponente: %d\n", atq);
    printf("HP do oponente: %d\n", hp);
    printf("Defesa do oponente: %d\n", def);
    printf("Estamina do oponente: %d\n", stm);
    printf("A burrice do oponente é um número aleatório entre 0 e 100 que só poderá ser revelado ao final da batalha\n");
    int poder_total2 = (atq2 + hp2 + def2 + stm2) - burrice2;
    printf("Poder Total do oponente: %d\n", poder_total2);
    int resultado = poder_total > poder_total2;
    printf("O resultado da batalha é: %d\n", resultado);
    return 0;
}