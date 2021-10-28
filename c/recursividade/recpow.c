#include <stdio.h>
#include <stdlib.h>

int pot (int x, int y){

    if (y == 0)
        return 1;
    if (y == 1)
        return x;
        return x*pot(x,y-1);
}

int main(){
    int numero, expoente;

    printf("\ninsira o numero: ");
    scanf("%d", &numero);

    printf("Insira o expoente: ");
    scanf("%d", &expoente);

    printf("\nResultado = %d", pot(numero,expoente));
}