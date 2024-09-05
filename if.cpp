#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    float metade;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num > 20) 
        metade = num / 2.0f; 
        printf("O número é maior que 20. A divisão por 2 é: %.2f \n", metade);
}

