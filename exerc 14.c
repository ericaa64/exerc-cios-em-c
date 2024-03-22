#include <stdio.h>
int main()
{
    float num1;
    float num2;

    printf("Informe o primeiro valor: \n");
    scanf("%f", &num1);

    printf("Informe o segundo valor (distinto do primeiro): \n");
    scanf("%f", &num2);

    if(num1>num2){

    printf("O maior valor e: %1.f" , num1);
    }
    else{
    printf("O maior valor e: %1.f" , num2);
    }

    return 0;
 }











