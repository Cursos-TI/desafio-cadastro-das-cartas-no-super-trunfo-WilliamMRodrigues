#include <stdio.h>


#include <stdio.h>

int main() {
    // Dados da Carta 1 - Brasil
    char codigo1[4] = "A01";
    int pop1 = 213000; // em milhares (213 milhões)
    float area1 = 8515767.0; // km²
    float pib1 = 1860.0; // bilhões de dólares (exemplo)
    int pt1 = 12;

    // Dados da Carta 2 - Japão
    char codigo2[4] = "B02";
    int pop2 = 126000; // em milhares (126 milhões)
    float area2 = 377975.0; // km²
    float pib2 = 4937.0; // bilhões de dólares (exemplo)
    int pt2 = 18;

    // Exibição dos dados
    printf("=== Cartas Super Trunfo - Países ===\n");

    printf("\n🔸 Carta 1 - Código: %s\n", codigo1);
    printf("País: Brasil\n");
    printf("População: %d mil habitantes\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de dólares\n", pib1);
    printf("Pontos turísticos: %d\n", pt1);

    printf("\n🔸 Carta 2 - Código: %s\n", codigo2);
    printf("País: Japão\n");
    printf("População: %d mil habitantes\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de dólares\n", pib2);
    printf("Pontos turísticos: %d\n", pt2);

    return 0;
}

