#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;
    printf("Digite um n�mero para descobrir se ele � primo: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        if (num % i == 0) {
            printf("O n�mero %d n�o � primo.\n", num);
            break;
        } else {
            printf("O n�mero %d � primo.\n", num);
            break;
        }
    }
    
    return 0;
}