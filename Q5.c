#include <stdio.h>

/*Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de INSS e 
imposto de renda.*/

int main() {

    float salarioB, salarioL, inss, ir;

    printf("Informe o valor do salario bruto: ");
    scanf("%f",&salarioB);
    printf("Informe o percentual de INSS: ");
    scanf("%f",&inss);
    printf("Informe o percentual de IR: ");
    scanf("%f",&ir);

    salarioL = salarioB - (((inss/100)*salarioB) + ((ir/100)*salarioB));

    printf("Salario liquido: %.2f",salarioL);
    return 0;
}