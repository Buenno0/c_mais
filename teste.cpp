#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i;
    i = 1;
    printf("Digite um número: ");
    scanf("%d", &n);
    

    while (i <= n)
    {
        printf("%d\n", i);
        i++;

    }

    printf("Fim do programa\n");
    
}