#include <stdio.h>
int main()
{
    float valorDepositado;
    float rendimento;
    float valorTotal;

    printf("Informe o valor depositado R$: ");
    scanf("%f", &valorDepositado);

    rendimento = valorDepositado * 0.007;

    valorTotal = valorDepositado + rendimento;

    printf("O valor total com rendimemnto apos um mes e de R$: %.1f" , valorTotal);

    return 0;
}