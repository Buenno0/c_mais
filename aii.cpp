#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char descricao[20];
	printf("Digite a descrição \n");
	scanf("%s", &descricao);
	int quant;
	printf("Digite a quantidade vendida \n");
	scanf("%d", &quant);
	float valor;
	printf("Digite o valor em R$ \n");
	scanf("%f", &valor);
	float taxa;
	printf("Digite a taxa do euro \n");
	scanf("%f", &taxa);
	float totalvenda;
	totalvenda = quant*valor;
	printf("Total da venda: %.2f \n", totalvenda);
	float totaleuro;
	totaleuro = totalvenda * taxa;
	printf("Total convertido: %2f \n", totaleuro);
}