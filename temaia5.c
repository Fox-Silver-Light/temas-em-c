#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[30] = "Amazonas";
    char carta1[30] = "A01";
    char cidade1[30] = "Manaus";
    float populacao1 = 2303732;
    float area1 = 11401;
    float pib1 = 103281;
    int pontos_turisticos1 = 35;

    // Carta 2
    char estado2[30] = "Amapá";
    char carta2[30] = "A02";
    char cidade2[30] = "Macapá";
    float populacao2 = 442933;
    float area2 = 6407;
    float pib2 = 12000;
    int pontos_turisticos2 = 15;

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_percapta1 = pib1 / populacao1;
    float pib_percapta2 = pib2 / populacao2;

    int opcao, atributo;

    while (1) {
        printf("\n========== MENU PRINCIPAL ==========\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n=== CARTAS ===\n");
                printf("Carta 1: %s (%s)\n", cidade1, estado1);
                printf("Carta 2: %s (%s)\n\n", cidade2, estado2);

                printf("Escolha o atributo para comparar:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos turísticos\n");
                printf("5. Densidade demográfica\n");
                printf("Escolha: ");
                scanf("%d", &atributo);

                switch (atributo) {
                    case 1:
                        printf("\nComparando População...\n");
                        printf("%s: %.0f habitantes\n", cidade1, populacao1);
                        printf("%s: %.0f habitantes\n", cidade2, populacao2);
                        if (populacao1 > populacao2)
                            printf(">>> %s VENCEU!\n", cidade1);
                        else if (populacao2 > populacao1)
                            printf(">>> %s VENCEU!\n", cidade2);
                        else
                            printf("Empate!\n");
                        break;

                    case 2:
                        printf("\nComparando Área...\n");
                        printf("%s: %.2f km²\n", cidade1, area1);
                        printf("%s: %.2f km²\n", cidade2, area2);
                        if (area1 > area2)
                            printf(">>> %s VENCEU!\n", cidade1);
                        else if (area2 > area1)
                            printf(">>> %s VENCEU!\n", cidade2);
                        else
                            printf("Empate!\n");
                        break;

                    case 3:
                        printf("\nComparando PIB...\n");
                        printf("%s: %.2f bilhões\n", cidade1, pib1);
                        printf("%s: %.2f bilhões\n", cidade2, pib2);
                        if (pib1 > pib2)
                            printf(">>> %s VENCEU!\n", cidade1);
                        else if (pib2 > pib1)
                            printf(">>> %s VENCEU!\n", cidade2);
                        else
                            printf("Empate!\n");
                        break;

                    case 4:
                        printf("\nComparando Pontos Turísticos...\n");
                        printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
                        printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
                        if (pontos_turisticos1 > pontos_turisticos2)
                            printf(">>> %s VENCEU!\n", cidade1);
                        else if (pontos_turisticos2 > pontos_turisticos1)
                            printf(">>> %s VENCEU!\n", cidade2);
                        else
                            printf("Empate!\n");
                        break;

                    case 5:
                        printf("\nComparando Densidade Demográfica...\n");
                        printf("%s: %.2f hab/km²\n", cidade1, densidade1);
                        printf("%s: %.2f hab/km²\n", cidade2, densidade2);
                        // menor densidade vence (menor concentração de pessoas)
                        if (densidade1 < densidade2)
                            printf(">>> %s VENCEU!\n", cidade1);
                        else if (densidade2 < densidade1)
                            printf(">>> %s VENCEU!\n", cidade2);
                        else
                            printf("Empate!\n");
                        break;

                    default:
                        printf("Atributo inválido!\n");
                }
                break;

            case 2:
                printf("\n=== REGRAS DO JOGO ===\n");
                printf("1. Escolha um atributo para comparar entre duas cartas.\n");
                printf("2. O maior valor vence (exceto densidade demográfica, onde o menor vence).\n");
                printf("3. Atributos disponíveis: População, Área, PIB, Pontos turísticos e Densidade.\n");
                break;

            case 3:
                printf("\nSaindo do jogo... Até a próxima!\n");
                exit(0);

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}

