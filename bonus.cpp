#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int tempo_servico;
    float bonus, salario;

    printf("Digite o tempo de serviço: ");
    scanf("%d", &tempo_servico);

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (tempo_servico >= 5) {
        bonus = salario * 0.2f;
        printf("O bônus é de R$ %.2f \n", bonus);
    }else {
        bonus = salario * 0.1f;
        printf("O bônus é de R$ %.2f \n", bonus);
    }
}
