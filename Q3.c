#include <stdio.h>
/* Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um programa
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.
Média Ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3) / (1 + 2 + 3) */
int main() {

    float nota1, nota2, nota3, mediaponderada;

  printf("Informe a primeira nota: ");
  scanf("%f",&nota1);
  printf("Informe a segunda nota: ");
  scanf("%f",&nota2);
  printf("Informe a terceira nota: ");
  scanf("%f",&nota3);

  mediaponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3) / ( 1 + 2 + 3 );

    printf("O resultado da sua media ponderada foi: %.1f",mediaponderada);

  return 0;
}