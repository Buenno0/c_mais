#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, qtdPositivos = 0;

    while (num > 0)

    {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num > 0)
        {
            qtdPositivos++;
        }
    }
    printf("Quantidade de números positivos: %d\n", qtdPositivos);
}