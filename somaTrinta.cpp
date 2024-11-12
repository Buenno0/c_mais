#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int soma = 0;

    for (int i = 1; i < 31; i++)
    {
        soma += i;
        printf("%d \n",i);
    }
    printf("Soma dos números: %d\n", soma);
}