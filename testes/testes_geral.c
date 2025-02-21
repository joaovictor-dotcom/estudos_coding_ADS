#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int valor;
    printf("Entre com um valor: \n");
    scanf("%d", &valor);

    switch (valor) {
    case 1:
        printf("Pai");
        break;
    case 2:
        printf("Filho");
        break;
    case 3:
    printf("Que é o \n");
        printf("Espírito Santo");
        break;
    default:
        printf("Não é um valor válido");
        break;
    }

    return 0;
}