#include <stdio.h> // Importa a biblioteca padrão de entrada e saída

int main() {
    int opcao;              // Guarda a opção escolhida pelo usuário
    float nota1, nota2;     // Notas dos alunos
    float media;            // Média calculada ou informada

    // Exibição do menu
    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Decisão com switch-case
    switch (opcao) {
        case 1:
            // Calcular Média
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);

            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            media = (nota1 + nota2) / 2.0;
            printf("A média do estudante é: %.2f\n", media);
            break;

        case 2:
            // Determinar Status
            printf("Digite a média do estudante: ");
            scanf("%f", &media);

            if (media >= 7.0) {
                printf("Status: Aprovado\n");
            } else if (media >= 5.0) {
                printf("Status: Recuperação\n");
            } else {
                printf("Status: Reprovado\n");
            }
            break;

        case 3:
            // Sair
            printf("Saindo...\n");
            break;

        default:
            // Opção inválida
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0; // Encerra o programa com sucesso
}
