/*Escreva uma função para comparar duas strings informadas pelo usuário*/

#include <stdio.h>//Incluindo Bibliotecas
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ()
{
   setlocale(LC_ALL, "Português_Brasil");//definindo a linguagem

    char str1[100], str2[100];//Declarando variáveis
    int retorno;

    printf("Digite a sua primeira string: ");
    fgets(str1, 100, stdin);

    printf("Digite a sua segundas string: ");
    fgets(str2,100, stdin);

    retorno = strncmp(str1, str2, 100);



 if (retorno > 0 )//Estrutura de decisão se caso a primeira string for maior 
 {
    printf("As duas strings são diferentes e a primeira string é maior\n ");
 }
 else if(retorno < 0)//Estrutura de decisão se caso a segunda string for maior
 {
    printf("As duas strings são diferentes e a segunda string é maior\n");
 }
 else if(retorno == 0 )//Estrutura de decisão se caso as duas strings forem iguais
 {
    printf("As duas strings são iguais\n");
 }
 
    system("pause");
    return 0;//Final do programa
   }