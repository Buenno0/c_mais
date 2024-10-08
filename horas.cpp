#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    int horasPermitidas, horasAcessadas;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite a quantidade de horas permitidas: ");
    scanf("%d", &horasPermitidas);

    printf("Digite a quantidade de horas acessadas: ");
    scanf("%d", &horasAcessadas);

    if (horasAcessadas > horasPermitidas) {
        printf("ultrapassou o limite. \n");
    } else if (horasAcessadas == horasPermitidas) {
        printf("No limite. \n");
    } else {
        printf("Abaixo do limite. \n");
    }
}