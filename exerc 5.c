#include <stdio.h>
int main()
{
float nota2;
float nota3;
float nota1;
float media;
char nomealuno [100];

printf("Digite o nome do aluno:\n");
scanf("%s", nomealuno);

printf("Informe sua primeira nota:\n");
scanf("%f", &nota1);

printf("Informe sua segunda nota:\n");
scanf("%f", &nota2);

printf("Informe sua terceira nota:\n");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) /3 ;

printf("Nome: %s\n", nomealuno);

printf("Media do aluno: era de: %.1f\n", media);

return 0;
}