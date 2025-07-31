#include <stdio.h>

int main(){
    //* Declaração de variáveis
    //! o C é case sensitive (diferencia maiúsculas de minúsculas)
    // int idade = 25; //? tipo inteiro (armazena números sem ponto flutuante)
    int idade;
    // int Idade;
    // int IDADE;
    // int idadE;

    int quantidade = 1;

    float altura = 1.75; //? tipo flutuante (armazena números com vírgula)
    double peso = 60.8; //? tipo flutuante (armazena números com vírgula de maior valor que o float)

    char letra = 'A'; //? tipo caracter (armazena apenas uma letra por vez)

    //? tipo string (armazena uma cadeia de caracteres definindo o tamanho dentro de [])
    char nome[20] = "henrique";

    // int _teste; // ! permitido criar variáveis que começem com underline

    // ! não é permitido criar variáveis com nomes iniciando com números ou alguns símbolos
    // int 2teste;
    // int teste_2;

    // ! não é permitido criar variáveis com nomes de palavras reservadas
    // int int;
    // int return;

    idade = 25; //? inicialização de variável

    quantidade = 10; //? reatribuição de valor

    return 0;
}