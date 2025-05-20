#include <stdio.h>   // Biblioteca padrão para entrada e saída
#include <string.h>  // Para manipulação de strings

int main() {
    // Declaração de variáveis para a Carta 1 e Carta 2
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer antes do fgets
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remove o '\n'

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; // Remove o '\n'

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
