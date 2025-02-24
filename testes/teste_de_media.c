#include <stdio.h>

int main() {

    printf("Digite um valor: ");
    int valor;
    valor = 0;

    while (valor <= 10)
    {
        printf("\n%d", valor);
        valor++;
    }

    return 0;
}