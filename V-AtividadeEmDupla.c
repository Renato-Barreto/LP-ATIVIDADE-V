#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#define TAM 100

struct produto
{
    char nome[200];
    float preco;
    int estoque;
};

int main(){
    //Declarando Vari�veis
    struct produto entrada[TAM];
    struct produto saida[TAM];
    
    int quantidade;
    int code,i;

    setlocale(LC_ALL,"portuguese");
    printf("Sistema de gerenciamento.\n");
    printf("1- Entrada de produtos. \n");
    printf("2- Sa�da de produtos. \n");
    printf("3- Invent�rio. \n");
    printf("4- Funcion�rios presentes no site. \n");
    printf("Resposta: ");
    scanf("%i",&code);

    switch (code)
    {
    case 1:
        printf("Digite a quantidade de produtos: ");
        scanf("%i",&quantidade);

        for ( i = 0; i < quantidade; i++)
        {
            printf("Digite o %i� produto: ",i+1);
            gets(produto.)
        }
        

        
        break;
    
    default:
        break;
    }


    return 0;
}