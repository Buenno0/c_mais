# include <stdio.h>

int main() {
    float peso[10], altura[10];
    int idade[10], i, qtd50 = 0;

    for ( i = 0; i <10; i++)
    {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade[i]);

        printf("Digite o peso da pessoa %d: ", i+1);
        scanf("%f", &peso[i]);

        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &altura[i]);

        if (idade[i] > 50)
        {
            qtd50++;
        }



    }
    printf("Quantidade de pessoas com mais de 50 anos: %d\n", qtd50);    
}
    