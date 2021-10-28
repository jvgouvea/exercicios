#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanho;

    int *vetorU;
    int *vetorV;

    int valor1;
    int valor2;
    int valor3;

    printf("Insira o tamanho dos vetores U e V: ");
    scanf("%d", &tamanho);

    vetorU = malloc(tamanho * sizeof(int));
    vetorV = malloc(tamanho * sizeof(int));
    
    for(int i=0; i<tamanho; i++){

        printf("\n");
        printf("Insira um valor para a posicao %d do vetor U: ", i+1);
        scanf("%d", &vetorU[i]);
        
        printf("Insira um valor para a posicao %d do vetor V: ", i+1);
        scanf("%d", &vetorV[i]);
    }

    for(int i=0; i<tamanho; i++){

        //Defini um valor qualquer para usar no alpha e testar a propriedade
        int alpha=2;

        valor1 = alpha * (vetorU[i] * vetorV[i]);
        valor2 = (alpha * vetorU[i]) * vetorV[i];
        valor3 = vetorU[i] * (alpha * vetorV[i]);
    }

    if (valor1=valor2=valor3){

        printf("\n");
        printf("A propriedade foi obedecida");
    }

    else {

        printf("\n");
        printf("A propriedade nao foi obedecida");
    }
    

    free(vetorU);
    free(vetorV);

    return 0;
}