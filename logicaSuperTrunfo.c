#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[30];
    char codigo[10];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;
    int opcao; // guarda a escolha do menu

    // ===== CADASTRO DAS CARTAS =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (ex: RJ): ");
    fgets(carta1.estado, 30, stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = '\0';

    printf("Digite o código da carta (ex: B02): ");
    fgets(carta1.codigo, 10, stdin);
    carta1.codigo[strcspn(carta1.codigo, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(carta1.nome, 30, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    while (getchar() != '\n');

    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    while (getchar() != '\n');

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    while (getchar() != '\n');

    // Calcula densidade e PIB per capita da carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao; // PIB em reais

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (ex: RJ): ");
    fgets(carta2.estado, 30, stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = '\0';

    printf("Digite o código da carta (ex: B02): ");
    fgets(carta2.codigo, 10, stdin);
    carta2.codigo[strcspn(carta2.codigo, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(carta2.nome, 30, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    while (getchar() != '\n');

    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    while (getchar() != '\n');

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    while (getchar() != '\n');

    // Calcula densidade e PIB per capita da carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

    // ===== MENU INTERATIVO =====
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta1.populacao < carta2.populacao)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta1.area < carta2.area)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", carta1.nome, carta1.pib);
            printf("%s: %.2f bilhões de reais\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta1.pib < carta2.pib)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", carta1.nome, carta1.pontos_turisticos);
            printf("%s: %d pontos\n", carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta1.pontos_turisticos < carta2.pontos_turisticos)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade);
            if (carta1.densidade < carta2.densidade)
                printf("Resultado: %s venceu! (menor densidade)\n", carta1.nome);
            else if (carta1.densidade > carta2.densidade)
                printf("Resultado: %s venceu! (menor densidade)\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f reais\n", carta1.nome, carta1.pib_per_capita);
            printf("%s: %.2f reais\n", carta2.nome, carta2.pib_per_capita);
            if (carta1.pib_per_capita > carta2.pib_per_capita)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta1.pib_per_capita < carta2.pib_per_capita)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}