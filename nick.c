#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.80;
    double saldoBancario = 12400.67;
    char inicial = 'A';
    char nome[20] = "André";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;
}
