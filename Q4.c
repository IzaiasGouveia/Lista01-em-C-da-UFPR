#include <stdio.h>

/*Tendo como entrada dois valores inteiros, elaborar um programa para calcular e mostrar:
a1) A soma desses valores;
b2) A subtração do primeiro pelo segundo;
c3) A multiplicação entre eles;
d4) A divisão inteira do primeiro pelo segundo;
e5) A divisão float do primeiro pelo segundo;
f6) O resto da divisão do primeiro pelo segundo.*/

int main() {

    int num1, num2, result1, result2, result3, result4, result6;
    float result5;

    printf("Digite o primeiro valor: ");
    scanf("%d",&num1);
    printf("\nDigite o segundo valor: ");
    scanf("%d",&num2);

    result1 = num1 + num2;
    result2 = num1 - num2;
    result3 = num1 * num2;
    result4 = num1 / num2;
    result5 = (float)num1 / (float)num2;
    result6 = num1 % num2;

    printf("\n%d + %d = %d ",num1,num2,result1);
    printf("\n%d - %d = %d ",num1,num2,result2);
    printf("\n%d * %d = %d ",num1,num2,result3);
    printf("\n%d / %d = %d ",num1,num2,result4);
    printf("\n%d / %d = %.2f ",num1,num2,result5);
    printf("\n%d %% %d = %d ",num1,num2,result6);
  return 0;
}