#include <stdio.h>

int main(){
    int codCliente, numDias;
    char nome[50];
    float ganhos=0;
    do{
        printf("Informe o código do cliente:\n");
        scanf("%d", &codCliente);

        printf("Informe o nome do cliente:\n");
        scanf("%s", &nome);

        printf("Informe o número de dias:\n");
        scanf("%d", &numDias);
        
        if(numDias <10 && numDias > 0){
            ganhos += 45*numDias;
        }else if(numDias >=10 && numDias >0){
            ganhos += 38*numDias;
        }
    } while(codCliente != 0);
    printf("\n\nO total ganho pela pousada é: %.2f",ganhos);
}