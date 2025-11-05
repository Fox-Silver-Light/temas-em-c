#include <stdio.h>
int main(){
    int numero;
  printf("digite um numero: ");
  scanf("%d", &numero);


  if (numero > 0){
    if (numero % 2 == 0){
      printf("numero par");
    }else {
      printf("numero impar");
    }
    printf("numero positivo");
  }else if (numero == 0) {
    printf("numero zero");
  }else {
    printf("numero negativo");
  }





}
