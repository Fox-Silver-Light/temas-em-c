#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(){

    int opçao;
    int numerosecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch(opcao){

    case 1: 
    srand(time (0));
    numerosecreto = srand() % 10;
    printf("digite um numero de 0 a 9\n");
    scanf("%d", &palpite);
    
      if (numerosecreto == palpite){
        printf("voce acertou\n");
        printf("numero secreto %d\n", numerosecreto);
      }else {
        printf("voce errou\n");
        printf("numero secreto %d\n", numerosecreto);
      }
        printf("numero secreto %d\n");
      }
      break;
      case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;
      case 3:
      printf("Saindo...\n");
      break;
      default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;


  }










}
