#include <stdio.h>

/*Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e 
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar 
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já 
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser 
valores float e para a prioridade dos operadores.*/

int main() {
    
    float x, y, result1, result2, result3, result4, e1, e2, e3;
    
    printf("Informe o valor para x: ");
    scanf("%f",&x);
    printf("\nInforme o valor para y: ");
    scanf("%f",&y);

    result1 = ((x + y) / y ) * (x * x);
    printf("\na) %f",result1);

    result2 = (x + y) / (x - y);
    printf("\nb) %f",result2);

    result3 = ((x * x) + (y * y * y)) / 2;
    printf("\nc) %f",result3);

    result4 = (x * x * x) / (x * x);
    printf("\nd) %f",result4);

    e1 = (int)x % (int)y;
    printf("\ne1) %.f",e1);
    
    e2 = (int)x % 3;    
    printf("\ne2) %.f",e2);

    e3 = (int)y % 5;
    printf("\ne3) %.f",e3);

    return 0;
}