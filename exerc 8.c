#include <stdio.h>
int main()
{
float cotacaoDolar;
float quantidadeDolar;
float valorEmReal;

printf("Informe a cotacao do dolar em reais (R$):\n ");
scanf("%f", &cotacaoDolar);

printf("Informe a quantidade de dolares disponiveis:\n ");
scanf("%f", &quantidadeDolar);

valorEmReal = quantidadeDolar * cotacaoDolar;

printf("O valor em reais (R$) correspondente aos dolares e de: r$ %.0f" , valorEmReal);




}