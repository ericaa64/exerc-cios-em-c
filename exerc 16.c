# include <stdio.h>
int main()
{
  float nota1;
  float nota2;
  float nota3;
  float media;

  printf("Digite a primeira nota: \n");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: \n");
  scanf("%f", &nota2);

  printf("Digite a terceira nota: \n");
  scanf("%f", &nota3);

  media = (nota1,nota2,nota3) /3;

  if(media>=7){
  printf("Aluno Aprovado");
  }
  if(media<=5){
  printf("Aluno Reprovado");
  }
  else{
  printf("Aluno Recuperacao");

  return 0;
  }

}