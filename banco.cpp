#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

    float saldoMedio;
    float credito;

    printf("Digite o saldo médio: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio <=500){
        printf("Não há crédito disponível \n");
    } else if (saldoMedio > 500 && saldoMedio <= 1000){
        credito = saldoMedio * 0.3;
        printf("O crédito é: R$%.2f \n", credito);
    } else if (saldoMedio > 1000 && saldoMedio <= 3000){
        credito = saldoMedio * 0.4;
        printf("O crédito é: R$%.2f \n", credito);
    } else {
        credito = saldoMedio * 0.5;
        printf("O crédito é: R$%.2f \n", credito);
    }
    printf("Seu saldo médio é: R$%.2f", saldoMedio);
}