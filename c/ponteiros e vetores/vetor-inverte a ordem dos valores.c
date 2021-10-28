#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[15];
   
    for(int i=0; i<15; i++){

        printf("Informe o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
   
        printf("\nVETOR ORIGINAL: ");

    for(int i=0; i<15; i++){

        printf("[%d] ", vetor[i]);
    }
   
    //TROCA AS POSIÇÕES
    for(int i=0; i<7; i++){

        fflush(stdin);
        int aux;
        aux = vetor[i];
        vetor[i] = vetor[14-i];
        vetor[14-i] = aux;
    }
        printf("\nVETOR MODIFICADO: ");

    for(int i=0; i<15; i++){

        printf("[%d] ", vetor[i]);
    }

    return 0;
}
