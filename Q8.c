#include <stdio.h>

/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor 
e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a 
partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor*/

int main() {

    float CustoFabrica, distribuido, imposto, custoConsumidor;

    printf("Informe o custo de fabrica de um automovel: R$");
    scanf("%f",&CustoFabrica);
    printf("Informe a porcentagem do distribuidor (0 a 100): ");
    scanf("%f",&distribuido);
    printf("Informe a porcentagem de impostos (0 a 100): ");
    scanf("%f",&imposto);

    custoConsumidor = CustoFabrica + ((distribuido/100 * CustoFabrica) + (imposto/100 * CustoFabrica));

    printf("O custo do veiculo ao consumidor eh: R$%.2f",custoConsumidor);

    return 0;
}