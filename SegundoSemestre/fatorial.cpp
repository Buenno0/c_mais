#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        int fatorial = 1;
        for (int j = 1; j <= num; j++) {
            fatorial *= j;
        }

        printf("O fatorial de %d é %d\n", num, fatorial);
    }


}