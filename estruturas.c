#include <stdio.h>
  int main (){
    float temperatura, humidade;
    unsigned int estoque;
    
    printf ("entre com a temperatura: \n");
    scanf ("%f", &temperatura);
    printf ("entre com a humidade: \n");
    scanf ("%f", &humidade);
    printf ("entre com o estoque: \n");
    scanf("%u", &estoque );

    if (temperatura > 30) {
    printf ("temperatura alta\n");
  }else {
    printf ("temperatura aceitavel\n");
  }
    if (humidade > 50) {
    printf ("humidade alta\n");
  }else {
    printf ("humidade aceitavel\n");
  }
    if (estoque > 200) {
    printf("estoque aceitavel\n");
  }else {
    printf("estoque critico\n");
  }
  return 0;

}
