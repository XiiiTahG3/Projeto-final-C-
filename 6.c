/*Faça um programa que leia um número n e imprima se ele é primo ou não. (um número
primo tem apenas 2 divisores: 1 e ele mesmo! O número 1 não é primo!!!)*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, count ;



printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 != 0)
    {
        printf("Esse numero e primo.\n");
    }
    else if (num == 2)
    {
        printf("Esse numero e primo.\n");
    }
    else 
    {
        printf("Esse numero nao e primo.\n");
    }


    return 0;
    system("pause");
}