#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int vetorV[100];
    int tamanho;
    float propriedade;

    printf("Insira o tamanho do vetor V: ");
    scanf("%d", &tamanho);

    for(int i=0; i<tamanho; i++){
    printf("\n");
    printf("Insira o tamanho do elemento %d:  ",i+1);
    scanf("%f",&vetorV[i]);
    }

    propriedade=(vetorV[100]*vetorV[100]);

    if(propriedade>=0){
        printf("\nA propriedade e valida para este vetor");
    }
    else{
        printf("\nA propriedade e invalida para este vetor");
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
}