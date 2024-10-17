#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

int main(){
	setlocale(LC_ALL, "Portuguese");
    
    float km, litros;
    char tipo;

    printf("Digite o tipo de carro: Carro C= 12km/l, Carro A= 8km/l, Carro B= 9km/l: ");
    scanf("%c", &tipo);

    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &km);

    switch (tipo)
    {
    case 'A':
        litros = km/8;
        printf("Consumo carro A %.2f", litros);
        break;

    case 'B':
        litros = km/9;
        printf("Consumo carro B %.2f", litros);
        break;

    case 'C':
        litros = km/12;
        printf("Consumo carro C %.2f", litros);
        break;

    default:
        printf("Tipo de carro inválido");
        break;
    }
}
