# include <stdio.h> 
int main()
{
char nome;
float sexo;
float contador;
float totalHomens;
float totalMulheres;

totalHomens = 0;
totalMulheres = 0;

  if(contador = 1, contador < 56, contador++){
    printf("Informe o nome da pessoa: \n");
    scanf("%c", nome);

    printf("Informe o sexo da pessoa (M para masculino, F para feminino)");
    scanf("%F", &sexo);

    if (sexo == "M" , sexo =="m"){
        prinft(nome + "," ,"e homem.");
        totalHomens++
    } if (sexo == "F" , sexo == "f"){
        prinft(nome + "," , "e mulher.");
        totalMulheres++
    } else {
        prinft("Opcao de sexo invalida. Tente novamente \n");
        contador--
    }
  }   


}