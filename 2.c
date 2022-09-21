/*Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar
se estes valores podem formar os lados de um triângulo. Em caso afirmativo,
informar se o triângulo é eqüilátero, isósceles ou escaleno.*/

#include <stdio.h>//Incluindo bibliotecas
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Português_Brasil");//Definindo a linguagem

    float x, y, z;//Definindo as variáveis

    printf("Digite o primeiro lado do triângulo: "); //Obtendo os lados do triângulo...
        scanf("%f", &x);
    printf("Digite o segundo lado do triângulo: ");
        scanf("%f", &y);
    printf("Digite o terceiro lado do triângulo: ");
        scanf("%f", &z);

if((x + y) > z || (x + z ) > y || (y + z) > x )//estrutura para saber se os lados formam um triângulo 
{
    printf("Isso é um triângulo.\n");
    if (x != y && x != z && y != z)//Estrutura para saber se é um triângulo escaleno
    {
        printf("Esse é um triângulo escaleno.\n");
    }
    else if (x != z && x == y || x == z && x != y || z == y && z != x || z == y && y != x )//estrutura para saber se é um triângulo isóceles.
    {
        printf("Esse é um triângulo isóceles\n");
    }
    else if (x == y && x == z && z == y)// Estrutura para saber se é um triângulo equilátero 
    {
        printf("Esse é um triângulo equilátero\n");
    }
    
}
else//caso não for um triângulo 
printf("Não é um triângulo.\n");

system("Pause");
return 0;
}