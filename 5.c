/*Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e
mostra o resultado*/

#include <stdio.h>//Incluindo as Bibliotecas
#include <locale.h>
#include <stdlib.h>

int main ()
{
    setlocale(LC_ALL, "Português_Brasil");

int val1, count; // Definindo variáveis
int maior = 0;
int menor = 9999;

for ( count = 0;count < 15; count++) //laço de repetição que lê 15 valores
{

   
    printf("Digite um numero: ");
        scanf("%d", &val1);
    if (val1 > maior)//Verifica se o valor for maior e armazena ele na variável 'maior'
    {
        maior = val1;
    }
     else if (val1 < menor)//Verifica se o valor for menor e armazena ele na variável 'menor'
    {
            menor = val1;
    }
     
    
}
printf("O maior é %d\nE o menor é %d\n", maior, menor);//Declarando qual é o maior e o menor

    system("pause");//Fim do programa
    return 0;
}