#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1;
    char estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2, resultadopopulacao;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pibper1, pibper2;
    float superpodercarta1, superpodercarta2;
    int resultadopontosturisticos;
    float resultadoarea, resultadopib, resultadodensidadepopu, resultadoden1, resultadoden2, resultadopibperca, resultadosuperpoder;



    // Solicitar os dados da primeira carta
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01, B02): ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", &cidade1);

    printf("Populacao da cidade: ");
    scanf("%lu", &populacao1);

    printf("Area da cidade (em km²): ");
    scanf("%f", &area1);

    printf("PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Solicitar os dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A01, B02): ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", &cidade2);

    printf("Populacao da cidade: ");
    scanf("%lu", &populacao2);

    printf("Area da cidade (em km²): ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibper1 =  pib1 / populacao1;
    pibper2 =  pib2 / populacao2;

    superpodercarta1 = populacao1 + area1 + pib1 + pontos1 + pibper1;
    superpodercarta2 = populacao2 + area2 + pib2 + pontos2 + pibper2;


    // Exibir os dados das cartas uma embaixo da outra
    printf("\nPrimeira Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.11f reais\n", pibper1);
    printf("Super Poder: %.2f\n", superpodercarta1);

    printf("\nSegunda Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.11f reais\n", pibper2);
    printf("Super Poder: %.2f\n", superpodercarta2);

    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopontosturisticos = pontos1 > pontos2;
    resultadodensidadepopu = densidade1 < densidade2;
    resultadopibperca = pibper1 > pibper2;
    resultadoden1 = densidade1 / 1;
    resultadoden2 = densidade2 / 1;
    resultadosuperpoder = superpodercarta1 > superpodercarta2;

    printf("\n*** Comparação de Cartas (Resultado 1 Carta 1 venceu / Resultado 0 Carta 2 venceu) ***\n");
    printf("População: %lu\n", resultadopopulacao);
    printf("Área: %.0f\n", resultadoarea);
    printf("PIB: %.0f\n", resultadopib);
    printf("Pontos: %d\n", resultadopontosturisticos);
    printf("Densidade Populacional: %.0f\n", resultadodensidadepopu);
    printf("PIB per Capita: %.0f\n", resultadopibperca);
    printf("Super Poder: %.0f\n", resultadosuperpoder);




    return 0;
}