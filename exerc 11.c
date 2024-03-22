#include <stdio.h>
int main()
{
float precoCusto;
float percentualAumento;
float precoVenda;

printf("Informe o preco de custo do produto R$: ");
scanf("%f", &precoCusto);

printf("Informe o percentual de aumento desejado: ");
scanf("%f", &percentualAumento);

precoVenda = precoCusto , (precoCusto*(percentualAumento / 100));

printf("O valor de venda com acressimo e de: %f" , percentualAumento , precoVenda);

return 0;
}