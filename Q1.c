#include <stdio.h>
/* Escreva um programa que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular 
e calcule o seu volume (cm3
), cuja fórmula é: Volume = Comprimento * Largura * Altura.*/
int main()
{
    float   volume, comprimento, largura, altura;

    printf("Informe o comprimento do retangulo: ");
    scanf("%f",&comprimento);
    printf("\nInforme a largura do retangulo: ");
    scanf("%f",&largura);
    printf("\nInforme a altura do retangulo: ");
    scanf("%f",&altura);

    volume = comprimento * largura * altura;

    printf("\nO volume do retangulo é: %.2f",volume," :D");
}