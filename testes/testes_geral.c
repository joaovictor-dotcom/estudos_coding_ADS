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
    printf("Que � o \n");
        printf("Esp�rito Santo");
        break;
    default:
        printf("N�o � um valor v�lido");
        break;
    }

    return 0;
}