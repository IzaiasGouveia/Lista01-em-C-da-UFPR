#include <stdio.h>

/*Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A 
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca*/

int main() {

    int num1, num2, palmeirassantobotafogovascogoisesportfluminenseesport;

    printf("Informe o valor A: ");
    scanf("%d",&num1);
    printf("\nInforme o valor B: ");
    scanf("%d",&num2);

    printf("\nAntes da troca:  A = %d B = %d",num1,num2);

    palmeirassantobotafogovascogoisesportfluminenseesport = num1;
    num1 = num2;
    num2 = palmeirassantobotafogovascogoisesportfluminenseesport;

    printf("\nDepois da troca: A = %d B = %d",num1,num2);

    return 0;
}