#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "henrique";

    // printf("A idade do %s é: %d\n", nome, idade);
    // printf("A idade é: ", idade); //? não vai aparecer nada pois precisa do especificador de formato
    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    // printf("A altura é: %e\n", altura);
    // printf("A altura é: %f\n", altura);
    printf("A altura é: %.2f\n", altura); //? exibe com duas casas decimais
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