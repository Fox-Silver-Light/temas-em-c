#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[30] = "Amazonas";
    char carta1[30] = "A01";
    char cidade1[30] = "Manaus";
    int populacao1 = 2303732;
    float area1 = 11401;
    float pib1 = 103.281;
    int pontos_turisticos1 = 35;

    // Carta 2
    char estado2[30] = "Amapa";
    char carta2[30] = "A02";
    char cidade2[30] = "Macapa";
    int populacao2 = 442933;
    float area2 = 6407;
    float pib2 = 12.0;
    int pontos_turisticos2 = 15;

    // Escolher carta
    char codigo[10];
    printf("Digite o codigo da carta (A01 ou A02): ");
    scanf("%9s", codigo);

    // Mostrar apenas a carta escolhida
    if (strcmp(codigo, "A01") == 0) {
        printf("\n=== Carta %s ===\n", carta1);
        printf("Estado: %s\n", estado1);
        printf("Cidade: %s\n", cidade1);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f km²\n", area1);
        printf("PIB: %.3f Bilhoes\n", pib1);
        printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    } 
    else if (strcmp(codigo, "A02") == 0) {
        printf("\n=== Carta %s ===\n", carta2);
        printf("Estado: %s\n", estado2);
        printf("Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f km²\n", area2);
        printf("PIB: %.3f Bilhoes\n", pib2);
        printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    } 
    else {
        printf("Codigo invalido!\n");
    }

    return 0;
}

