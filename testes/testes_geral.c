#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numbers[3] = {10, 20, 40};
    for (int i = 0; i < 3; i++)
    {
        printf("O número é: %d", numbers);
    }
    
    return 0;
}