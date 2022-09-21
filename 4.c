/*Fazer um programa no qual o usuário vai entrando sucessivamente com valores
positivos. Quando o usuário entrar com um valor negativo o programa pára de pedir
valores e calcula a média dos valores já fornecidos. */

#include <stdio.h>//incluindo bibliotecas
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Português_Brasil");//Definindo linguagem

    float i = 0, soma = 0, media, cont;//Declarando Variáveis
   
    while (i >= 0) //laço de repetição
    {
        soma += i;
        printf("Digite seu valor ou Digite algum número negativo para descobrir a média dos números já digitados: ");
            scanf("%f", &i);
        if (i >= 0)
        {
            cont++;
        }
                
    }

media =  soma/ cont;//definindo a média
    
 printf("a média é: %.2f\n", media );

    system("pause");//Fim do Programa
    return 0; // retorno 0
}