#include <stdlib.h>
#include <stdio.h>

int funcao(int n){
    if (n==0)
    return 0;

    if (n>4)
    return n;

    if (n<=4) 
    funcao(2 + funcao(2 * n));
}

int main(){
    int numero;

    printf("Insira um numero para a funcao: ");
    scanf("%d",&numero);

    printf("Resultado = %d", funcao(numero));
    return 0;
}