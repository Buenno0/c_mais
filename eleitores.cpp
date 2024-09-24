#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

    char cidade[50];
    int eleitores;
    int candidatoMaisVotado;

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);


    printf("Digite o número de eleitores aptos: ");
    scanf("%d", &eleitores);

    printf("Digite o número de votos do candidato mais votado: ");
    scanf("%d", &candidatoMaisVotado);

    if (candidatoMaisVotado > (eleitores/2)){
        printf("Não haverá segundo turno.");
    } else {
        printf("Haverá segundo turno.");
    }
}