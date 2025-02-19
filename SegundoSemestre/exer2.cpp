#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  // Alterado para 5 pessoas

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;
    float salario;
    int contador = 0;
    
    // Variáveis para cálculos
    int somaIdadesSalarioAlto = 0;
    int contSalarioAlto = 0;
    int qtdSalarioMaior2000 = 0;
    float somaSalarioIdadeMaior40 = 0;
    int contIdadeMaior40 = 0;
    int maiorIdade = 0;
    float salarioPessoaMaiorIdade = 0;

    // Entrada de dados
    do {
        printf("\nPessoa %d:\n", contador + 1);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        printf("Digite o salário: R$ ");
        scanf("%f", &salario);
        
        // Pessoas que ganham mais que R$ 5000
        if(salario > 5000) {
            somaIdadesSalarioAlto += idade;
            contSalarioAlto++;
        }
        
        // Pessoas com salário superior a R$ 2000
        if(salario > 2000) {
            qtdSalarioMaior2000++;
        }
        
        // Pessoas com mais de 40 anos
        if(idade > 40) {
            somaSalarioIdadeMaior40 += salario;
            contIdadeMaior40++;
        }
        
        // Verificar maior idade
        if(idade > maiorIdade) {
            maiorIdade = idade;
            salarioPessoaMaiorIdade = salario;
        }

        contador++;
        
    } while(contador < 5);


    if(contSalarioAlto > 0) {
        float mediaIdadesSalarioAlto = (float)somaIdadesSalarioAlto / contSalarioAlto;
        printf("Média das idades das pessoas que ganham mais que R$ 5000: %.2f anos\n", 
               mediaIdadesSalarioAlto);
    } else {
        printf("Não há pessoas que ganham mais que R$ 5000\n");
    }
    
    printf("Quantidade de pessoas com salário superior a R$ 2000: %d\n", 
           qtdSalarioMaior2000);
    
    if(contIdadeMaior40 > 0) {
        float mediaSalarioIdadeMaior40 = somaSalarioIdadeMaior40 / contIdadeMaior40;
        printf("Média do salário das pessoas com mais de 40 anos: R$ %.2f\n", 
               mediaSalarioIdadeMaior40);
    } else {
        printf("Não há pessoas com mais de 40 anos\n");
    }
 
    printf("Maior idade: %d anos\n", maiorIdade);
    printf("Salário da pessoa com maior idade: R$ %.2f\n", salarioPessoaMaiorIdade);


}
