//temp - Conversor de Temperatura em C
 #include <stdio.h>//incluindo bibliotecas
 #include <stdlib.h>
 #include <locale.h>
 
 int main ()
 {
	setlocale(LC_ALL, "Português_Brasil");//Definindo a linguagem
float	kelv, cel, fah;//Declarando variáveis
int temp;
char opcao;

printf("\n\t----Conversor de Temperatura em C----\n");//Menu inicial 
printf("\n'c' :    Converte de Celsius para Fahrenheit e Kelvin");
printf("\n'f' : Converte de Fahrenheit para Celsius e Kelvin");
printf("\n'k' :     Converte de Kelvin para Celsius e Fahrenheit");
printf("\n'h' :       Mostra a tela de ajuda\n");
scanf("\n%c", &opcao);


if (opcao != 'h')//estrutura de decisão
{
	printf("\t\nDigite uma temperatura para converte-la \n");
	scanf("\n%d", &temp);
}
else 
{
	printf("\n\n \tEsse é um programa para transformar temperaturas.\n\tBasta você colocar em qual temperatura você quer e em seguida colocar o valor da temperatura \n\n");
}

switch (opcao)//opções 	e decisões
{
case 'c':
case 'C':
	    fah = ((temp * 1.8) + 32);
		kelv = (temp + 273);
		printf("\nA temperatura em fahreinheit é: %.2f\n", fah);	
		printf("A temperatura em Kelvin é: %.2f\n", kelv);
	break;
case 'f':
case 'F':
		cel = (temp - 32)/ 1.8;
		kelv = (temp - 32) * 5 / 9 + 273;
		printf("\nA temperatura em Celsius é: %.2f ", cel);
		printf("\nA temperatura em Kelvin é: %.2f\n", kelv);
	break;
case 'k':
case 'K':
		cel = temp - 273;
		fah = (temp - 273) * 1.8 + 32;
		printf("\nA temperatura em Celsius é: %.2f ", cel);
		printf("\nA temperatura em Fahrenheit é: %.2f\n", fah);
	break;
case 'h':
case 'H':
	break;
default:
	printf("Opção inválida.\n");
	break;
}
	system("pause");//Pausa no sistema
	return 0;//retorno 0
 }