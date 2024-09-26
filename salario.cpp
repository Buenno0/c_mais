#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

    int salario;
    int aumento;
    int novoSalario;

    printf("Digite o salário atual: ");
    scanf("%d", &salario);

    if (salario < 1500){
        aumento = salario * 0.15;
        novoSalario = salario + aumento;
        printf("O novo salário é: %d \n", novoSalario);
    } else if (salario >= 1500 && salario <= 3000){
        aumento = salario * 0.10;
        novoSalario = salario + aumento;
        printf("O novo salário é: %d \n", novoSalario);
    } else {
        aumento = salario * 0.05;
        novoSalario = salario + aumento;
        printf("O novo salário é: %d \n", novoSalario);
    }

}