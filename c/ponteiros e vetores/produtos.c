#include <stdio.h>
#include <stdlib.h>

int main()
{

    char produtos[15][50] = {0};
    int codigo[50] = {0}, i;
    float preco[50] = {0}, novo_preco[50] = {0}, acrescimo[50] = {0};

    for (i = 0; i < 5; i++){
        printf("\n");

        printf("Insira o nome do produto: ");
        scanf("%s", &produtos[i]);

        printf("Insira o codigo do produto: ");
        scanf("%d", &codigo[i]);

        printf("Insira o preco do produto: ");
        scanf("%f", &preco[i]);

        if (codigo[i] % 2 == 0 && preco[i] > 1550)
        {
            acrescimo[i] = preco[i] * 0.20;
            novo_preco[i] = preco[i] + acrescimo[i];
        }

        else if (codigo[i] % 2 == 0)
        {
            acrescimo[i] = preco[i] * 0.10;
            novo_preco[i] = preco[i] + acrescimo[i];
        }

        else if (preco[i] > 1550)
        {
            acrescimo[i] = preco[i] * 0.15;
            novo_preco[i] = preco[i] + acrescimo[i];
        }
    }

    printf("\n\tRELATORIO\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n");

        printf("\nNome do produto: %s", produtos[i]);
        printf("\nCodigo: %d", codigo[i]);
        printf("\nPreco: %.2f", preco[i]);
        printf("\nNovo preco: %.2f", novo_preco[i]);
    }

    return 0;
}