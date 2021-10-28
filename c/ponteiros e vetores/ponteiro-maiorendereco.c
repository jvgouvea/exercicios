#include <stdio.h>
#include <stdlib.h>

int main (){

    int A, B;
    int *EndA = &A, *EndB = &B;

    printf("Digite o valor de A: ");
    scanf("%d",&A);

    printf("\nDigite o valor de B: ");
    scanf("%d",&B);

    printf("\nValor de A = %i\nValor de B = %i\n\n",A, B);
    printf("Endereco de A = %i\nEndereco de B = %i\n\n",EndA, EndB);

    if(EndA > EndB){
    printf("\n\nEndereco de A eh maior que o de B"); 
    }

    else{
    printf("\n\nEndereco de B eh maior que o de A");
    }

    printf("\n");

    return 0;
}