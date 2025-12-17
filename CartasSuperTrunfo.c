#include <stdio.h>

// declarando variáveis da primeira carta

int main(){
    char estado1;
    char codigo1[5];
    char cidade1[35];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_percapta1;


    printf("=== CADASTRO CARTA 1 ===\n");

    printf("Estado (Letras de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex.: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %34[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // calculando densidade e pib per capita carta1

    densidade1 = (float) populacao1 / area1;
    pib_percapta1 = (float) (pib1 * 1000000000) / populacao1;
    // PIB informado em bilhoes de reais e convertido para reais no calculo do PIB per capita


// declarando variáveis da segunda carta

    char estado2;
    char codigo2[5];
    char cidade2[35];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_percapta2;

    printf("\n=== CADASTRO CARTA 2 ===\n");

    printf("Estado (Letras de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex.: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %34[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // calculando densidade e pib per capita carta2

    densidade2 = (float) populacao2 / area2;
    pib_percapta2 = (float) (pib2 * 1000000000) / populacao2;
    // PIB informado em bilhoes de reais e convertido para reais no calculo do PIB per capita

// imprimir os dados na tela

    printf("\n===CARTA 1===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per capita: R$ %.2f por pessoa\n", pib_percapta1);

    printf("\n===CARTA 2===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per capita: R$ %.2f por pessoa\n", pib_percapta2);

    printf("\n\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}