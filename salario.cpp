#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario;
    float aumento;
    float novoSalario;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);

    if (salario < 1500) {
        aumento = salario * 0.15;
        novoSalario = salario + aumento;
        printf("O novo salário é: R$%.2f\n", novoSalario);
    } else if (salario >= 1500 && salario <= 3000) {
        aumento = salario * 0.10;
        novoSalario = salario + aumento;
        printf("O novo salário é: R$%.2f\n", novoSalario);
    } else {
        aumento = salario * 0.05;
        novoSalario = salario + aumento;
        printf("O novo salário é: R$%.2f\n", novoSalario);
    }
}
