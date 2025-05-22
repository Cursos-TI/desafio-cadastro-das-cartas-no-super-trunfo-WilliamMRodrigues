#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[100], nomeCidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int opcao;

    // Leitura da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    getchar(); // Limpar buffer
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Leitura da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    getchar(); // Limpar buffer
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Menu Interativo
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR VENCE)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo para comparação (1 a 7): ");
    scanf("%d", &opcao);

    printf("\n=== COMPARAÇÃO ===\n");
    printf("Cidade 1: %s\n", nomeCidade1);
    printf("Cidade 2: %s\n", nomeCidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Cidade 1: %lu\n", populacao1);
            printf("Cidade 2: %lu\n", populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("Cidade 1: %.2f km²\n", area1);
            printf("Cidade 2: %.2f km²\n", area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Cidade 1: %.2f bilhões\n", pib1);
            printf("Cidade 2: %.2f bilhões\n", pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Cidade 1: %d\n", pontosTuristicos1);
            printf("Cidade 2: %d\n", pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR VENCE)\n");
            printf("Cidade 1: %.2f hab/km²\n", densidade1);
            printf("Cidade 2: %.2f hab/km²\n", densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("Cidade 1: %.2f reais\n", pibPerCapita1);
            printf("Cidade 2: %.2f reais\n", pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("Cidade 1: %.2f\n", superPoder1);
            printf("Cidade 2: %.2f\n", superPoder2);
            if (superPoder1 > superPoder2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (superPoder2 > superPoder1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 7.\n");
    }

    return 0;
}
