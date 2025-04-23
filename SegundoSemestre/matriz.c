// Exemplo de matriz 2D em C
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>


int main()
{
    const int ALUNOS = 5, PROVAS = 3;
    int i, j;
    float notas[ALUNOS][PROVAS], media[ALUNOS];
    for (i = 0; i < ALUNOS; i++)
    {
        for (j = 0; j < PROVAS; j++)
        {
            printf("\n Aluno %i - prova %i:", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
 
    printf("\n\n As notas são:\n"); 
    for (i = 0; i < ALUNOS; i++)
    {
        media[i] = 0;
        for (j = 0; j < PROVAS; j++)
        {
            media[i] = media[i] + notas[i][j];
        }
        media[i] = media[i] / PROVAS;
    }
    for (i = 0; i < ALUNOS; i++)
    {
        printf("\n Aluno %i - média %.2f", i + 1, media[i]);
    }
    return 0;
}
