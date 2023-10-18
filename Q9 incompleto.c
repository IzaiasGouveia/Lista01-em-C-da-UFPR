#include <stdio.h>
#include <math.h>

/*Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:
a) Quantas vezes foi necessário abastecer o carro (use a função ceil() da biblioteca math.h para arredondar o 
valor para cima).
b) Quantos litros foram consumidos para percorrer a distância indicada.
c) Quantos litros restaram no tanque após a chegada ao destino.
Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio 
do veículo, calcule e mostre as informações solicitadas*/

int main() {

  float distancia, capacidade, consumoM, resultadoA, resultadoC;
  int resultadoB;

  printf("Informe a distancia (em km) percorrida entre as cidades: "); //800
  scanf("%d",&distancia);
  printf("Informe a capacidade maxima do tanque de combustivel do veiculo: "); //40
  scanf("%d",&capacidade);
  printf("Informe o consumo medio (em km por litro) do veiculo: ");  //10
  scanf("%d",&consumoM);

  resultadoA = distancia/consumoM;

  resultadoB = ceil(resultadoA/capacidade);

  resultadoC = (resultadoB * capacidade) - resultadoA;

  printf("foram necessarios %.2f litros de combustivel para percorrer o trajeto\n",resultadoA);
  printf("foi necessario abastecer o veiculo %d\n",resultadoB);
  printf("restou no tanque %.2f de combustivel\n",resultadoC);

  return 0;
}