#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;
    
    printf("Entre com o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Entre com o segundo valor: ");
    scanf("%d", &numero2);
    
    // operação soma
    soma = numero1 + numero2;

    // operação subtração
    subtracao = numero1 - numero2;

    // operação multiplicação
    multiplicacao = numero1 * numero2;

    // operação divisão
    divisao = numero1 / numero2;


    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %.2f\n", divisao);

    return 0;
}