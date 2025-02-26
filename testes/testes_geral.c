#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;
    printf("Digite um número para descobrir se ele é primo: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        if (num % i == 0) {
            printf("O número %d não é primo.\n", num);
            break;
        } else {
            printf("O número %d é primo.\n", num);
            break;
        }
    }
    
    return 0;
}