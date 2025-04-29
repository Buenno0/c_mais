#include <stdio.h>

int main() {
    int matriz[5][4];
    int soma_linhas[5];
    int i, j;

    // Preencher a matriz com números inteiros
    printf("Digite os elementos da matriz 5x4:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular a soma de cada linha
    for (i = 0; i < 5; i++) {
        soma_linhas[i] = 0;
        for (j = 0; j < 4; j++) {
            soma_linhas[i] += matriz[i][j];
        }
    }

    // Multiplicar cada elemento da matriz pela soma da linha correspondente
    printf("\nMatriz resultante após multiplicação:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] *= soma_linhas[i];
        }
    }

    // Mostrar a matriz resultante
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
