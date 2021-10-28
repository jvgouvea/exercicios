#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){

    if(n == 0)
        return 0;
    else
        return n + somatorio(n - 1);
}

int main () {

    int numero;

    printf("Digite o valor de N: ");
    scanf("%d", &numero);

    printf("\nResultado da funcao: %d", somatorio(numero));

    return 0;
}

//(b)Apresente também a definição recursiva matemática para essa função

//A soma se inicia em n e depois é decrementado o valor a ser somado. Dessa forma é possivel usar o 0 como caso base.
