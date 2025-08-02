#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("Média das notas: %.1f\n", media);

    return 0;
}