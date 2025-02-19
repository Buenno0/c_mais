#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, somaMultiplosTres = 0, somaPares = 0, contPares = 0, menorNum = 0, qtdMultiplosCinco = 0;
    float mediaPar = 0;
    int primeiroNumero = 1;

    do {
        printf("Digite um número inteiro (0 ou negativo para sair): ");
        scanf("%d", &num);

        if (num <= 0) break;

        if (num % 3 == 0) {
            somaMultiplosTres += num;
        }

        if (num % 2 == 0) {
            somaPares += num;
            contPares++;
        }

        if (primeiroNumero || num < menorNum) {
            menorNum = num;
            primeiroNumero = 0;
        }

        if (num % 5 == 0 && num > 50) {
            qtdMultiplosCinco++;
        }

    } while (1);

    if (contPares > 0) {
        mediaPar = (float)somaPares / contPares;
    }

    printf("A soma dos números múltiplos de 3 é: %d\n", somaMultiplosTres);
    printf("A média dos números pares é: %.2f\n", mediaPar);
    printf("O menor número digitado é: %d\n", menorNum);
    printf("A quantidade de números múltiplos de 5 e maiores que 50 é: %d\n", qtdMultiplosCinco);

}
