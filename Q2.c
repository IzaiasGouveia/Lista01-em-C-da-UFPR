#include <stdio.h>
/* Escreva um programa que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da 
prestação e forneça o valor atualizado. */
int main() {
    float valor, juros, valorf;

    printf("Informe o valor: ");
    scanf("%f",&valor);
    printf("\nInforme o valor da taxa (10 para 10%): ");
    scanf("%f",&juros);

    valorf = valor + ((juros/100) * valor);

    printf("\nValor total: %.2f",valorf);
  return 0;
}