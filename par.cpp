#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O número %d é par\n", n);
    } else {
        printf("O número %d é ímpar\n", n);
    }
}