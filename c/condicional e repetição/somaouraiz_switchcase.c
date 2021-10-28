#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int codigo;
    float num1, num2, raiz1, raiz2, soma;

    printf("\tMenu de opcoes\n\n");
    printf("1 - Somar dois numeros\n2 - Raiz quadrada de cada numero\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &codigo);

    printf("\nDigite dois numeros:  ");
    scanf("%f", &num1);
    scanf("%f", &num2);

    soma = num1 + num2;
    raiz1 = sqrt(num1);
    raiz2 = sqrt(num2);

    switch (codigo)
    {

    case 1:
        printf("\nA soma entre os 2 numeros e: %.2f\n\n", soma);
        break;

    case 2:
        printf("\nA raiz do numero %f e igual a: %.2f\n\n", num1, raiz1);
        printf("A raiz do numero %f e igual a: %.2f\n\n", num2, raiz2);
        break;

    default:
        printf("Codigo invalido\n");
    }

    system("\nPAUSE");
    return 0;
}