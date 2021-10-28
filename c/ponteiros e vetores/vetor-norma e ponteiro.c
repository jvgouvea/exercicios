#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int somatorio= 0;
    int tamanho;
    float norma,somatoriototal, somatorioparcial;

    float *vetorV;

    printf("Insira o tamanho do vetor V: ");
    scanf("%d", &tamanho);

    vetorV = malloc(tamanho * sizeof(float));
    
    for(int i=0; i<tamanho; i++){
        printf("\n");
        printf("Insira um valor para a posicao %d do vetor V: ", i+1);
        scanf("%f", &vetorV[i]);
        
    }
    
    for(int i=0; i<tamanho; i++){
        somatorioparcial=pow(vetorV[i],2);
        somatoriototal+=somatorioparcial;
        norma=sqrt(somatoriototal);
    }   
        printf("A norma do vetor informado e: %f",norma);

    free(vetorV);

    return 0;
}