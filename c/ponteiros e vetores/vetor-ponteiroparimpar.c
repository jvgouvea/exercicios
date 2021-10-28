#include <stdio.h>
#include <stdlib.h>

int main (){

    int *vetor;
    int tamanho;
    int i;

    int par[100]={0};
    int impar[100]={0};

    int quantidade_par=0, quantidade_impar=0;

    printf("\t Esse progama vai identificar se o numero digitado e par ou impar\n\n");
    printf("Insira a quantidade de numeros a ser inserido no progama: ");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho * sizeof(int));

    printf("\ninsira os numeros: ");

    for (i=0; i<tamanho; i++){

        scanf("%d",&vetor[i]);

        if (vetor[i] % 2 == 0){

            vetor[i] = par[i];
            quantidade_par=quantidade_par+1;
        }

            else if (vetor[i] % 2 != 0){

                vetor[i] = impar[i];
                quantidade_impar=quantidade_par+1;
            }
    }
                printf("\n");

                for (i = 0; i<tamanho; i++){

                    printf("\nNumeros pares digitados: %d\n", par[i]);
                }

                printf("\n");

                for (i = 0; i<tamanho; i++){

                    printf("\nNumeros impares digitados: %d\n", impar[i]);

                }

                    printf("\nQuantidade de numeros pares:%d",quantidade_par);
                    printf("\nQuantiade de numeros impares:%d", quantidade_impar);

    return 0;
}