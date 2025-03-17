#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1, estado2; 
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pibper1, pibper2;


    // Solicitar os dados da primeira carta
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (letra de A a H): "); // Digitar a letra do estado
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01 ou B02): "); // Digitar o código da carta
    scanf("%s", codigo1);

    printf("Nome da cidade: "); // Digitar o nome da cidade com espaço
    scanf(" %[^\n]", cidade1);

    printf("População da cidade: "); // Digitar a população da cidade
    scanf("%d", &populacao1);

    printf("Área da cidade (em km²): "); // Digitar a área da cidade
    scanf("%f", &area1);

    printf("PIB da cidade: "); // Digitar o PIB da cidade
    scanf("%f", &pib1);

    printf("Números de pontos turísticos: "); // Digitar o números dos pontos turísticos
    scanf("%d", &pontos1);

    // Solicitar os dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (letra de A a H): "); // Digitar a letra do estado
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01 ou B02): "); // Diitar o código da carta
    scanf("%s", codigo2);

    printf("Nome da cidade: "); // Digitar o nome da cidade
    scanf(" %[^\n]", cidade2);

    printf("Populacão da cidade: "); // Digitar a população da cidade
    scanf("%d", &populacao2);

    printf("Área da cidade (em km²): "); // Digitar área da cidade
    scanf("%f", &area2);

    printf("PIB da cidade: "); // Digitar o PIB da cidade
    scanf("%f", &pib2);

    printf("Números de pontos turísticos: "); // Digitar o num. dos p. turísticos
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibper1 =  pib1 / populacao1;
    pibper2 =  pib2 / populacao2;

    // Exibir os dados das cartas uma embaixo da outra
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacão: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.11f reais\n", pibper1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacão: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.11f reais\n", pibper2);

    return 0;
}