#include <stdio.h>
int main()
{
float custoFabrica;
float porcentagemDistribuidor;
float impostos;
float custoConsumidor;

printf("Informe o custo de fabrica de carro: ");
scanf("%f", &custoFabrica);

porcentagemDistribuidor = 0.28;
impostos = 0.45;

custoConsumidor = custoFabrica + (custoFabrica * impostos) + (custoFabrica * porcentagemDistribuidor);

printf("O custo ao consumidor do carro e R$: %.1f", custoConsumidor);

return 0;
}