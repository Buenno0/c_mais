#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

    int numA;
    int numB;
    int numC;

    printf("Digite um número: ");
    scanf("%d", &numA);

    printf("Digite outro número: ");
    scanf("%d", &numB);

    if (numA > numB){
        numC = numA - numB;
        printf("A diferença entre os números é: %d \n", numC);
    } else {
        numC = numB - numA;
        printf("A diferença entre os números é: %d \n", numC);
    }

}
    