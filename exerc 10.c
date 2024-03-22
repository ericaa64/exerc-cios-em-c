#include <stdio.h>
int main()
{
float valorCompra;
float valorPrestacao;

printf("Informe o valor da compra R$:");
scanf("%f", &valorCompra);

valorPrestacao = valorCompra / 5;

printf("O valor de cada prestacao em 5 veses sem juros e R$: %.1f" , valorPrestacao);

return 0;
}