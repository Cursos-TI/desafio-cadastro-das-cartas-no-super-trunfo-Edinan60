#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[6] = "A01";
    char codigo2[6] = "B02";
    char cidade1[100] = "SAO PAULO", cidade2[100] = "RIO DE JANEIRO";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000, resultadopopulacao;
    float area1 = 1521.11, area2 = 1200.25, pib1 = 699.28, pib2 = 300.50;
    int pontos1 = 50, pontos2 = 30;
    float densidade1, densidade2, pibper1, pibper2;
    float superpodercarta1, superpodercarta2;
    int resultadopontosturisticos, resultado, escolhausuario;
    float resultadoarea, resultadopib, resultadodensidadepopu, resultadoden1, resultadoden2, resultadopibperca, resultadosuperpoder;

    escolhausuario = rand() % 10 + 1;

    //cálculo da densidade populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    //cálculo do PIB per capita
    pibper1 =  pib1 / populacao1;
    pibper2 =  pib2 / populacao2;

    //cálculo do super poder
    superpodercarta1 = populacao1 + area1 + pib1 + pontos1 + pibper1;
    superpodercarta2 = populacao2 + area2 + pib2 + pontos2 + pibper2;


    // Exibir os dados das cartas uma embaixo da outra
    printf("\nPrimeira Carta:\n");
    printf("1.Estado: %c\n", estado1);
    printf("2.Codigo: %s\n", codigo1);
    printf("3.Cidade: %s\n", cidade1);
    printf("4.Populacao: %lu\n", populacao1);
    printf("5.Area: %.2f km²\n", area1);
    printf("6.PIB: %.2f bilhões de reais\n", pib1);
    printf("7.Pontos turisticos: %d\n", pontos1);
    printf("8.Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("9.PIB per Capita: %.11f reais\n", pibper1);
    printf("10.Super Poder: %.2f\n", superpodercarta1);

    printf("\nSegunda Carta:\n");
    printf("1.Estado: %c\n", estado2);
    printf("2.Codigo: %s\n", codigo2);
    printf("3.Cidade: %s\n", cidade2);
    printf("4.Populacao: %lu\n", populacao2);
    printf("5.Area: %.2f km²\n", area2);
    printf("6.PIB: %.2f bilhões de reais\n", pib2);
    printf("7.Pontos turisticos: %d\n", pontos2);
    printf("8.Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("9.PIB per Capita: %.11f reais\n", pibper2);
    printf("10.Super Poder: %.2f\n\n", superpodercarta2);
    
    //*comparação de dados da carta1 e carta2
           
        printf(" #*#*# Comparação de Dois Atributos entre as Cartas #*#*#\n");
        printf("Escolha a opção que você quer comparar: \n");
        printf("1.Estado\n");
        printf("2.Código\n");
        printf("3.Cidade\n");
        printf("4.População\n");
        printf("5.Área\n");
        printf("6.PIB\n");
        printf("7.Pontos turísticos\n");
        printf("8.Densidade Populacional\n");
        printf("9.PIB per Capita\n");
        printf("10.Super Poder\n");

        printf("Escolha o Primeiro Atributo de comparação: \n");
        scanf("%d", &escolhausuario);
        if (escolhausuario < 1 || escolhausuario > 10) {
            printf("Opção inválida\n");
            return 0;
        }
    
        switch (escolhausuario)
        {
        case 1:
            printf("1.Estado\n");
            printf("O estado da Carta 1 é: %c\n", estado1);
            printf("O estado da Carta 2 é: %c\n", estado2);         
            break;
            case 2:
            printf("O código da Carta 1 é: %s\n", codigo1);
            printf("O código da Carta 2 é: %s\n", codigo2);            
            break;
            case 3:
            printf("3.Cidade\n");
            printf("A cidade da Carta 1 é: %s\n", cidade1);
            printf("A cidade da Carta 2 é: %s\n", cidade2);            
            break;
            case 4:
            printf("4.População\n");
           resultado = populacao1 > populacao2 ? 1 : 0;
            break;
            case 5:
            printf("5.Área\n");
            resultado = area1 > area2 ? 1 : 0;
            break;
            case 6:
            printf("6.PIB\n");
            resultado = pib1 > pib2 ? 1 : 0;
            break;
            case 7:
            printf("7.Pontos turísticos\n");
            resultado = pontos1 > pontos2 ? 1 : 0;
            break;
            case 8:
            printf("8.Densidade Populacional\n");
            resultado = densidade1 < densidade2 ? 1 : 0;
            break;
            case 9:
            printf("9.PIB per Capita\n");
            resultado = pibper1 > pibper2 ? 1 : 0;
            break;
            case 10:
            printf("10.Super Poder\n");
            resultado = superpodercarta1 > superpodercarta2 ? 1 : 0;
        default:
            printf("Opção inválida\n");
            break;
        }
 
        printf("Escolha a opção que você quer comparar: \n");
        printf("1.Estado\n");
        printf("2.Código\n");
        printf("3.Cidade\n");
        printf("4.População\n");
        printf("5.Área\n");
        printf("6.PIB\n");
        printf("7.Pontos turísticos\n");
        printf("8.Densidade Populacional\n");
        printf("9.PIB per Capita\n");
        printf("10.Super Poder\n");

        if (resultado == 1)
        {
            printf("Carta 1 VENCEU!!\n");
        } else {
            printf("Carta 2 VENCEU!!\n");
        }

        printf("Escolha o Segundoo Atributo de comparação: \n");
        scanf("%d", &escolhausuario);
        if (escolhausuario < 1 || escolhausuario > 10) {
            printf("Opção inválida\n");
            return 0;
        }

            if (resultado == 1) {
                printf("Carta 1 VENCEU!!\n");
            } else {
                printf("Carta 2 VENCEU!!\n");
            }
        
    return 0;
}