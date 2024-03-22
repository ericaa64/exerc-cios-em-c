#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float soma;
    float subtracao;
    float divisao;
    float multiplicacao;

    printf("Informe um numero: ");
    scanf("%f" ,&n1);

    printf("Informe o segundo numero: ");
    scanf("%f" ,&n2);

    soma = n1 + n2;
    printf("A soma e %f\n" ,soma);

    subtracao = n1 - n2;
    printf("A subtracao e %f\n" ,subtracao);

    divisao = n1 / n2;
    printf("A divisao e %f\n" ,divisao);

    multiplicacao = n1 * n2;
    printf("A multiplicacao e %F\n" ,multiplicacao);

}