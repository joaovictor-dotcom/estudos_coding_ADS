#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    float media = (nota1 + nota2 + nota3) / 3;
    printf("A media das notas e: %.2f\n", media);

    //teste de casting

    int a = 5;
    int b = 2;
    float quociente = (float) a / b;

    printf("O quociente de %d por %d e: %.2f\n", a, b, quociente);
return 0;
}