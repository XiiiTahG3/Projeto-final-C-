/*Escreva um programa em C que leia os coeficientes de uma equação de 2º Grau,
calcule e mostre suas raízes, caso existam. */

#include<stdio.h> //incluindo bibliotecas
#include<stdlib.h>
#include <locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL, "Português_Brasil");//definindo a linguagem

float a, b, c;//declarando as variáveis

printf("Digite o primeiro coeficiente da equação do 2º grau: \n");//obtendo os coeficientes da equação...
    scanf("%f", &a);
printf("Digite o segundo coeficiente da equação de 2º grau: \n");
    scanf("%f", &b);
printf("Digite o terceiro coeficiente da equação de 2º grau: \n");
    scanf("%f", &c);

if (a != 0 )//estrutura de decisão da equação
{
double del = pow(b,2) -4 * a * c;

double x1 = (-b + sqrt(del)) / (2 * a),
x2 = (-b - sqrt(del)) / (2 * a),
x3 = (-b - sqrt(-del)) / (2 * a),
x4 = (-b + sqrt(-del)) / (2 * a) ;

    if (del > 0)
    {
        printf("\nO delta é: %.2f", del);
        printf("\nx| linha é = %.2f", x1);
        printf("\nx|| linhas é = %.2f\n", x2);
    }
    else    
    {
        printf("\nO delta é: %.2f", del);
        printf("\nx| linha é = %.2f", x4);
        printf("\nx|| linhas é = %.2f\n", x3); 
    }
}
else//estrutura de decisão caso o termo 'a' seja 0
printf("\nO programa será encerrado, pois o primeiro termo precisa ser diferente de 0.\n");


    system("Pause");//fim do programa
    return 0;
 }
