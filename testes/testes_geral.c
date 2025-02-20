#include <stdio.h>

int main() {

    float temp, umid;
    unsigned int estoque;

    //coleta de dados
    printf("Coloque a temperatura: \n");
    scanf("%f", &temp);
    printf("Coloque a umidade: \n");
    scanf("%f", &umid);
    printf("Coloque o estoque: \n");
    scanf("%u", &estoque);

    //verificação de dados
    if (temp > 30){
        printf("Temperatura acima do recomendado\n");
    } else {
        printf("Temperatura dentro do recomendado\n");
    }

    if (umid > 70){
        printf("Umidade acima do recomendado\n");
    } else {
        printf("Umidade dentro do recomendado\n");
    }

    if (estoque < 100){
        printf("Estoque abaixo do recomendado\n");
    } else {
        printf("Estoque dentro do recomendado\n");
    }
    
    return 0;
}