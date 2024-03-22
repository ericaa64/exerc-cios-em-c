#include <stdio.h>
int main()
{
    float salario_final;
    float salario_fixo;
    int total_vendas;
    char nome_vendedor [10];
    float comissao ;

   printf("Informe o salario_fixo do vendedor: ");
   scanf("%f", &salario_fixo);

   printf("Informe o total_vendas: ");
   scanf("%d", &total_vendas);

   printf("Informe o nome do vendedor: ");
   scanf("%c", &nome_vendedor);

   comissao = 0.15 * total_vendas;
   salario_final = salario_fixo + comissao;

   
   printf("Nome do vendedor: %f\n" , nome_vendedor );
   printf("Salario fixo: R$ %f\n" , salario_fixo );
   printf("Comissao: %f\n" , comissao );
   printf("Salario final mes: R$ %f\n" , salario_final);
}