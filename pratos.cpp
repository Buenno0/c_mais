#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int calorias;
    char prato, sobremesa, bebida;

    calorias = 0;

    printf("Digite o prato escolhido: A = Vegetariano (180 calorias), B = Peixe (230 calorias), C = Frango (250 calorias), D = Carne (350 calorias): ");
    scanf("%s", &prato);

    switch (prato)
    {
    case 'A':
        calorias += 180;
        break;

    case 'B':
        calorias += 230;
        break;

    case 'C':
        calorias += 250;
        break;

    case 'D':
        calorias += 350;
        break;

    default:
        printf("Prato inválido");
        break;
    }

    printf("Digite a sobremesa escolhida: A = Abacaxi (75 calorias), B = Sorvete (110 calorias), C = Mouse (170 calorias), D = Torta (200 calorias): ");
    scanf("%s", &sobremesa);

    switch (sobremesa)
    {
    case 'A':
        calorias += 75;
        break;

    case 'B':  
        calorias += 110;
        break;

    case 'C':
        calorias += 170;
        break;

    case 'D':
        calorias += 200;
        break;

    default:
        printf("Sobremesa inválida");
        break;
    }

    printf("Digite a bebida escolhida: A = Chá (200 calorias), B = Suco de laranja (70 calorias), C = Suco de melão (100 calorias), D = Refrigerante (150 calorias): ");
    scanf("%s", &bebida);

    switch (bebida)
    {
    case 'A':
        calorias += 200;
        break;  

    case 'B':
        calorias += 70;
        break;

    case 'C':
        calorias += 100;
        break;

    case 'D':   
        calorias += 150;
        break;

    default:    
        printf("Bebida inválida");
        break;
    }

    printf("O total de calorias é de %d", calorias);

}