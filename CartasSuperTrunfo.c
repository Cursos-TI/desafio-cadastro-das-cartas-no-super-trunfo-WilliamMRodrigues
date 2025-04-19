#include <stdio.h>

int main() {
    // Dados da Carta 1 - Brasil
    char codigo1[4] = "A01";
    int pop1 = 213000; // em milhares
    float area1 = 8515767.0; // km²
    float pib1 = 1860.0; // bilhões de dólares
    int pt1 = 12;

    // Dados da Carta 2 - Japão
    char codigo2[4] = "B02";
    int pop2 = 126000; // em milhares
    float area2 = 377975.0; // km²
    float pib2 = 4937.0; // bilhões de dólares
    int pt2 = 18;

    int escolha;
    float valor1, valor2;

    printf("*** Jogo de Supertrunfo *** \n");
    printf("Escolha uma opção \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos\n");
    scanf("%d", &escolha);

    // Mostrar valor da carta 1 (Brasil)
    switch (escolha) {
        case 1:
            printf("Brasil: %d - ", pop1);
            valor1 = pop1;
            break;
        case 2:
            printf("Brasil: %.2f - ", area1);
            valor1 = area1;
            break;
        case 3:
            printf("Brasil: %.2f - ", pib1);
            valor1 = pib1;
            break;
        case 4:
            printf("Brasil: %d - ", pt1);
            valor1 = pt1;
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    // Mostrar valor da carta 2 (Japão)
    switch (escolha) {
        case 1:
            printf("Japão: %d\n", pop2);
            valor2 = pop2;
            break;
        case 2:
            printf("Japão: %.2f\n", area2);
            valor2 = area2;
            break;
        case 3:
            printf("Japão: %.2f\n", pib2);
            valor2 = pib2;
            break;
        case 4:
            printf("Japão: %d\n", pt2);
            valor2 = pt2;
            break;
    }

    // Determinar o vencedor
    if (valor1 == valor2) {
        printf("Empate!\n");
    } else if (valor1 > valor2) {
        printf("Você venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }

    return 0;
}
