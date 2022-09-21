  /*  OlaMundo - Programa de Saudação 'Avançado'!*/


  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

 int main(){

  int opcao;//declarando varíaveis

  setlocale(LC_ALL, "português_Brasil");// Definindo a linguagem 
  printf("\n\nPrograma de Saudação Avançado\n\n");//menu inicial
  printf("-----Saudações:-----\n\n");
  printf("'0': Informação completa sobre o nosso programa.");
  printf("\n'1': Saudação em português.");
  printf("\n'2': Saudação em inglês.");
  printf("\n'3': Saudação em espanhol.");
  printf("\n'4': Saudação em francês.");
  printf("\n'5': Saudação em italiano.");
  printf("\n'6': Saudação em alemão.");
  printf("\n'7': Saudação em japonês.");
  printf("\n'8': Saudação em chinês tradicional.");
  printf("\n'9': Saudação em russo.");
  printf("\n'10': Mostra a versão atual do programa.\n");
    scanf("%d", &opcao);//escaneando a opção digitada


      
switch (opcao)//rodando o switch para a decisão
{
case 0:
  printf("O nosso programa é ideal para as pessoas saberem como se fala 'Ola mundo' em outras línguas");
  break;
case 1:
  printf("Olá Mundo");
  break;
case 2:
  printf("Hello world");
  break;
case 3:
  printf("Hola mundo");
  break;
case 4:
  printf("Bonjour le monde");
  break;
case 5:
  printf("Ciao mondo");
  break;
case 6:
  printf("Hallo Welt");
  break;
case 7:
  printf("こんにちは世界 ou Kon'nichiwa sekai");
  break;
case 8: 
  printf("你好世界 ou Nǐ hǎo shìjiè");
  break;
case 9:
  printf("Привет, мир ou Privet, mir");
  break;
case 10:
  printf("Essa é a primeira versão do programa :)");
  break;

default:
  printf("Insira uma opção válida.");
  break;
}

  return 0;//retorno true
  system("pause");
  }
