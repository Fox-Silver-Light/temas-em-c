#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main(){
  
  int escolhadojogador, escolhadocomputador;
  srand (time (0));
  printf("jogo de jokenpo:\n");
  printf("escolha uma opção:\n");
  printf("1. pedra\n");
  printf("2. papel\n");
  printf("3. tesoura\n");
  printf("escolha: ");
  scanf("%d", &escolhadojogador);

  escolhadocomputador = rand () % 3 + 1;

  switch (escolhadojogador) {
    case 1: 
    printf("jogador: pedra -");
    break;
    case 2:
    printf("jogador: papel -");
    break;
    case 3: 
    printf("jogador: tesoura -");
    break;
    default: 
    printf("opção invalida\n");
    break;
  }
    switch (escolhadocomputador) {
    case 1: 
    printf("computador: pedra");
    break;
    case 2:
    printf("computador: papel");
    break;
    case 3: 
    printf("computador: tesoura");
    break;
 
   
  if (escolhadocomputador == escolhadojogador) 
    { printf("--- O jogo empatou! ---"); 
    }else if ((escolhadojogador == 1)&& (escolhadocomputador == 3) || (escolhadojogador == 2) && (escolhadocomputador == 1) || (escolhadojogador == 3) && (escolhadocomputador == 2) )
    { printf("--- parabens jogador ganhou---\n"); 
      }else printf("--- computador ganhou---\n"); } 

  return 0; 

}
