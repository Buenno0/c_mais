#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    float divisao;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num > 20) 
        divisao = num / 2.0f; 
        printf("O número é maior que 20. A divisão por 2 é: %.2f \n", divisao);
}