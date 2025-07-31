#include <stdio.h>

int main(){

    //? Declaração de variáveis da carta 01
    char estado1;
    char codigo_carta1[3];
    char nome_cidade1[20];
    int numero_habitantes1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //? Declaração de variáveis da carta 02
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[20];
    int numero_habitantes2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //? Entrada de dados carta 02
    printf("Digite o código do estado 1 de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1 de 01 a 04: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome_cidade1);

    printf("Digite o número de habitantes da cidade 1: ");
    scanf("%d", &numero_habitantes1);

    printf("Digite a área da cidade 1 em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade 1: ");
    scanf("%d", &pontos_turisticos1);

    //? Entrada de dados carta 02
    printf("Digite o código do estado 2 de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 de 01 a 04: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome_cidade2);

    printf("Digite o número de habitantes da cidade 2: ");
    scanf("%d", &numero_habitantes2);

    printf("Digite a área da cidade 2 em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade 2: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n\n");

    //? Saída dos dados da carta 01
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", numero_habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n\n");

    //? Saída dos dados da carta 02
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", numero_habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}