#include <stdio.h>
#include <stdlib.h>

int main (){

    int tamanho, multi_escalar[50], produto_escalar=0;
    int i;

    int *vetorX;
    int *vetorY;

    printf("Insira o tamanho dos vetores X e Y: ");
    scanf("%d", &tamanho);

    vetorX = malloc(tamanho * sizeof(int));
    vetorY = malloc(tamanho * sizeof(int));

    printf("\n");

    for(i=0; i<tamanho; i++){

        printf("Insira um valor para a posicao %d do vetor X: ", i+1);
        scanf("%d", &vetorX[i]);
    }

        printf("\n");

    for(i=0; i<tamanho; i++){

        printf("Insira um valor para a posicao %d do vetor Y: ", i+1);
        scanf("%d", &vetorY[i]);
    }

    for(i=0; i<tamanho; i++){

        multi_escalar[i] = vetorX[i] * vetorY[i];
        produto_escalar += multi_escalar[i];
    }

        printf("\nO produto escalar desses dois vetores eh igual a: %d ", produto_escalar);

        free(vetorX);
        free(vetorY);

        return 0;
}
