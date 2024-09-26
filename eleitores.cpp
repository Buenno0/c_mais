#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

int main(){
	setlocale(LC_ALL, "Portuguese");

    char cidade[50];
    int quantMoradores;
    int eleitores;
    int candidatoMaisVotado;

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite o número de moradores: ");
    scanf("%d", &quantMoradores);

    printf("Digite o número de eleitores aptos: ");
    scanf("%d", &eleitores);

    printf("Digite o número de votos do candidato mais votado: ");
    scanf("%d", &candidatoMaisVotado);

    if ((quantMoradores <= 20000) || (candidatoMaisVotado > (eleitores/2))){
        printf("nao havera segundo turno");
    } else {
        printf("havera segundo turno");
    }
}