#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, j;

    for ( i = 1 ; i <= 10; i++)
    {
        for ( j = 1 ; j <= i ; j++)
        {
            printf("! ");
        }
        printf("\n");
    }
    

    return 0;
}