#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int codProduto, i, quantidade;
    float precoUnitario, valorCompra, desconto;
    char descricao[50];
    i = 1;
   
    while (i <= 3)
    {
        valorCompra = 0;
        printf("Digite o código do produto: ");
        scanf("%d", &codProduto);
        printf("Digite a descrição do produto: ");
        scanf("%s", descricao);
        printf("Digite o preço unitário do produto: ");
        scanf("%f", &precoUnitario);
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &quantidade);
        valorCompra = valorCompra + precoUnitario * quantidade;
        i++;

        if (valorCompra > 100)
        {
            desconto = valorCompra * 0.10;
        }
        else
        {
            desconto = valorCompra * 0.05;
        }

        printf("seu desconto é de: %.2f\n", desconto);
        printf("O valor da compra é: %.2f\n", valorCompra-desconto);


    }
    
}
    