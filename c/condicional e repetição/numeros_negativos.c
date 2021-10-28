#include <stdio.h>
#include <stdlib.h>

int main (){
    int qtd_num,num,negativo=0,i;

        printf("Digite a quantidade de numeros a ser lida: ");
        scanf("%d",&qtd_num);

    for (i=1; i<=qtd_num; i++){

        printf("\nDigite um numero inteiro: ");
        scanf("%d",&num);

    if (num<0){
    negativo++;
    }
    }

    printf("\nVoce digitou %d numeros, e %d deles sao negativos\n\n",qtd_num,negativo);

    system ("PAUSE");
    return 0;
}