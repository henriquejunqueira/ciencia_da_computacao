#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    // Sintaxe scanf
    // scanf("formato1 formato2", &variavel1, variavel2, ...);

    printf("Digite a sua idade: ");    
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

    printf("Digite uma opcao: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c\n", opcao);

    /* 
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3);

    %d: Imprime um inteiro no formato decimal
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão
    %e: Imprime um número de ponto flutuante na notação científica
    %c: Imprime um único caractere
    %s: Imprime uma cadeia (string) de caracteres
    */

    return 0;
}