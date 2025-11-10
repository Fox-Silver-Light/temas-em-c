#include <stdio.h>
#include <stdlib.h>

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

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;
    int atributo1, atributo2;
  while (1) {
    printf("\n---Menu Principal---\n");
    printf("1. iniciar jogo\n");
    printf("2. regras do jogo\n");
    printf("3. sair\n");
    printf("escolha uma opção: ");
    scanf("%d", &opcao);
    switch (opcao){
      case 1: 
        // mostrar cartas disponiveis 
        printf("--- CARTAS ---\n");
        printf("carta 1: %s (%s)\n", cidade1, estado1);
        printf("carta 2: %s (%S)\n\n", cidade2, estado2);
        //opção para esccolher o primeiro atributo.
        printf("escolha o primeiro atributo para comparar\n");
        printf("1. população");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("---escolha---\n");
        scanf("%d", &atributo1);
        //validação da primeira escolha
        if (atributo1 < 1 || atributo1 > 5){
          printf("atributo invalido\n");
          break;
        }
          printf("escolha o segundo atributo (diferente do primeiro)\n");
          for (int i = 1; i >= 5; i++){
          if (i == atributo1) continue; 
          switch (i) {
          case 1: printf("1. População\n"); break;
          case 2: printf("2. Área\n"); break;
          case 3: printf("3. PIB\n"); break;
          case 4: printf("4. Pontos turísticos\n"); break;
          case 5: printf("5. Densidade demográfica\n"); break;
          }
        }
          printf("escolha: ");
          scanf("%d", &atributo2);
          if (atributo2 < 1 || atributo2 >5 || atributo2 == atributo1){
          printf("atributo invalido ou repetido\n");
          break;
        }
          float valor1_carta1 = 0, valor1_carta2 = 0;
          float valor2_carta1 = 0, valor2_carta2 = 0;
          
          switch (atributo1) {
          case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
          case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
          case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
          case 4: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
          case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
         }

                // Atribui valores do segundo atributo
          switch (atributo2) {
          case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
          case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
          case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
          case 4: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
          case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
         }
                        float pontos1 = 0, pontos2 = 0;

                if (atributo1 == 5) {
                    if (valor1_carta1 < valor1_carta2) pontos1++;
                    else if (valor1_carta2 < valor1_carta1) pontos2++;
                } else {
                    if (valor1_carta1 > valor1_carta2) pontos1++;
                    else if (valor1_carta2 > valor1_carta1) pontos2++;
                }

                if (atributo2 == 5) {
                    if (valor2_carta1 < valor2_carta2) pontos1++;
                    else if (valor2_carta2 < valor2_carta1) pontos2++;
                } else {
                    if (valor2_carta1 > valor2_carta2) pontos1++;
                    else if (valor2_carta2 > valor2_carta1) pontos2++;
                }

                // Soma dos atributos (para desempate)
                float soma1 = valor1_carta1 + valor2_carta1;
                float soma2 = valor1_carta2 + valor2_carta2;

                printf("\n===== RESULTADO =====\n");
                printf("Carta 1: %s (%s)\n", cidade1, estado1);
                printf("Carta 2: %s (%s)\n\n", cidade2, estado2);

                printf("Atributos escolhidos:\n");
                printf("1º: %d\n2º: %d\n\n", atributo1, atributo2);

                printf("Valores:\n");
                printf("%s -> %.2f | %.2f (soma: %.2f)\n", cidade1, valor1_carta1, valor2_carta1, soma1);
                printf("%s -> %.2f | %.2f (soma: %.2f)\n\n", cidade2, valor1_carta2, valor2_carta2, soma2);

                if (soma1 > soma2)
                    printf(">>> %s VENCEU!\n", cidade1);
                else if (soma2 > soma1)
                    printf(">>> %s VENCEU!\n", cidade2);
                else
                    printf(">>> EMPATE!\n");

                break;

            case 2:
                printf("\n=== REGRAS ===\n");
                printf("1. Escolha dois atributos numéricos diferentes.\n");
                printf("2. O maior valor vence (exceto densidade, onde o menor vence).\n");
                printf("3. Após comparar, os valores são somados.\n");
                printf("4. A carta com a maior soma vence.\n");
                printf("5. Se as somas forem iguais, é empate.\n");
                break;

            case 3:
                printf("\nSaindo do jogo... Até a próxima!\n");
                exit(0);

            default:
                printf("Opção inválida!\n");
              
    }
    }

  }
