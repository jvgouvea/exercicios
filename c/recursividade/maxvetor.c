//0:Maior elemento de um vetor
#include <stdio.h>
#include <stdlib.h>


int maior_elemento(int *v, int s){
    if (s==1) 
        return (v[0]);

    else {
        int x;
        x=maior_elemento(v, s-1);

        if (x>v[s-1]) 
            return (x);

        else 
            return (v[s-1]);
    }
}

int main(){       
    int quantidade_elementos;
    int *vetor;

	printf("Insira o tamanho do vetor: ");
	scanf("%d",&quantidade_elementos);
	vetor = (int*) calloc(quantidade_elementos, sizeof(int));

	printf("\n");
        for (int i=0; i<quantidade_elementos; i++) {
            printf("Elemento[%d] = ",i+1);
            scanf("%d",&vetor[i]);
        }
        
    printf("\nMaior elemento do vetor = %d",maior_elemento(vetor,quantidade_elementos));

    free(vetor);
    return 0;
}