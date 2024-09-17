#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorCompra, valorVenda, valorLucro;
    int lucro;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    if (valorCompra < 20) {
        lucro = 45;
    } else {
        lucro = 30;
    }

    valorVenda = valorCompra + (valorCompra * lucro / 100);
    valorLucro = valorVenda - valorCompra;

    printf("O valor da compra foi de R$ %.2f\n", valorCompra);
    printf("O valor da venda será de R$ %.2f\n", valorVenda);
    printf("O lucro será de R$ %.2f\n", valorLucro);

}

    