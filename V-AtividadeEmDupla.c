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
    //Declarando Variáveis
    struct produto entrada[TAM];
    struct produto saida[TAM];
    struct produto atual[TAM];
    
    int quantidade;
    int code,contador,i;

    setlocale(LC_ALL,"portuguese");
    do
    {
    printf("Sistema de gerenciamento.\n");
    printf("1- Entrada de produtos. \n");
    printf("2- Saída de produtos. \n");
    printf("3- Inventário. \n");
    printf("4- Funcionários presentes no site. \n");
    printf("Resposta: ");
    scanf("%i",&code);
    system("cls || clear");
    

    switch (code)
    {
    case 1:
        printf("Digite a quantidade de produtos: ");
        scanf("%i",&quantidade);

        for ( i = 0; i < quantidade; i++)
        {
            fflush(stdin);
            printf("Digite o %iº produto: ",i+1);
            gets(entrada[i].nome);
            strcpy(atual[i].nome,entrada[i].nome);
            contador++;

            printf("Digite o preço do %iº produto: ",i+1);
            scanf("%f",&entrada[i].preco);
            atual[i].preco = entrada[i].preco;

            printf("Digite a quantidade do %iº produto: ",i+1);
            scanf("%i",&entrada[i].estoque);
            atual[i].estoque = entrada[i].estoque;
            system("cls || clear");
        }
        break;

    case 3:
        for ( i = 0; i < contador; i++)
        {
            printf("Produto: %s\n",atual[i].nome);
            printf("Preço: %.2f\n",atual[i].preco);
            printf("Em estoque: %.i\n\n",atual[i].estoque);
        }
        
        break;
    
    default:
        break;
    }
    } while (code != 4);

    return 0;
}
