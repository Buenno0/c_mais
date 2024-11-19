#include <stdio.h>

int main() {
    int idade=1, estadoCivil=0, quantCasadas = 0, quantSolteiras = 0, quantViuvas = 0, quantDivorciadas = 0,somaIdadesViuvas = 0;

    while(idade > 0) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade <= 0) {
            break;
        }

        printf("Digite o estado civil (1 para casado, 2 para solteiro, 3 para viúvo ou 4 para divorciado): ");
        scanf("%d", &estadoCivil);
        while (estadoCivil < 1 || estadoCivil > 4) {
            printf("Estado civil inválido. Digite novamente: ");
            scanf("%d", &estadoCivil);
        }

        if(estadoCivil == 1){
            quantCasadas++;
        }else if(estadoCivil == 2){
            quantSolteiras++;
        }else if(estadoCivil == 3){
            quantViuvas++;
            somaIdadesViuvas += idade;
        }else if(estadoCivil == 4){
            quantDivorciadas++;
        }
        
    }
    int quantTotal = quantCasadas + quantSolteiras + quantViuvas + quantDivorciadas;

    printf("Quantidade de casadas: %d\n", quantCasadas);

    printf("Quantidade de solteiras: %d\n", quantSolteiras);

    if (quantViuvas > 0) {
        float mediaIdadeViuvas = somaIdadesViuvas / quantViuvas;
        printf("A média de idade das pessoas viúvas é: %.2f\n", mediaIdadeViuvas);
    } else {
        printf("Não há pessoas viúvas.\n");
    }

    if (quantTotal > 0) {
        // regra de 3 para descobrir a porcentagem
        float percentualDivorciadas = (quantDivorciadas * 100.0) / quantTotal;
        printf("O percentual de pessoas divorciadas é: %.2f%%\n", percentualDivorciadas);
    } else {
        printf("Não há dados para análise.\n");
    }
    
}