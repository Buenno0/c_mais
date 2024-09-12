#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numA, numB, resultado, soma;

        printf("Digite um número: ");
        scanf("%d", &numA);

        printf("Digite outro número: ");
        scanf("%d", &numB);

        soma = numA + numB;

        if (soma >= 10){
            resultado = soma + 5;
            printf("A soma dos números é maior que 10. A soma mais 5 é: %d \n", resultado);
        } else {
            resultado = soma + 7;
            printf("A soma dos números é menor que 10. A soma mais 7 é: %d \n", resultado);
        }
    }
