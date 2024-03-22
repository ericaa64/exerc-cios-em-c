#include  <stdio.h>
int main()
{
     char nome;
     float matricula;
     float classificacao;
     float notaSemestral;
     float notaExame;
     float notaFinal;
     float notaLaboratorio;

     printf("Relatar nome do aluno: \n");
     scanf("%s", nome);

     printf("Informar o numero de matricula do aluno: \n");
     scanf("%f", &matricula);

     printf("Relatar a nota de trabalho de laboratorio: \n");
     scanf("%f", &notaLaboratorio);

     printf("Informar a nota da avaliacao semestral: \n");
     scanf("%f", &notaSemestral);

     printf("Relatar nota do exame final: \n");
     scanf("%f", &notaExame);

     notaFinal = (notaLaboratorio * 2 + notaSemestral * 3 + notaExame * 5) / 10;

     switch
     {
        if(notaFinal >= 8 && notaFinal <= 10){
        printf("A");
        break;}

       else if(notaFinal >= 7 && notaFinal <8){
        printf("B");
        break;}

       else if (notaFinal >= 6 && notaFinal < 7){
        printf("C");
        break;}
        
        else if(notaFinal >= 5 && notaFinal < 6){
        printf("D");
        break;}

        else if(notaFinal >=0 && notaFinal < 5){
        printf("R");
        break;  }
        else{
        printf("Nota final invalida");
        break;
     }
     }
       printf("Nome do Aluno: %c " , nome);
       printf("Numero de Matricula: %f" , matricula);
       printf("Nota Final: %f" , notaFinal);
       printf("Classificacao: %f" , classificacao);
       
       return 0;
}