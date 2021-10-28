    #include <stdlib.h>
    #include <stdio.h>

    int main () {    
    
    int *vetor; 
    int maior=0, menor=0, i, tamanho;
    int indice_maior=0, indice_menor=0;

    printf("Insira a quantidade de numeros a ser inserido no vetor: ");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho * sizeof(int));

    for (i = 0; i < tamanho; ++i) {

        printf("\nVetor[%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }

        maior = vetor[0]; 
        menor = vetor[0];

    for (i = 0; i < tamanho; ++i) {

        if (vetor[i] > maior){

        maior = vetor[i];
        indice_maior=i;
        }

        else if (vetor[i] < menor){

         menor = vetor[i];
         indice_menor=i;
        }
    }

        printf("\nMaior valor digitado, vetor[%d] = %d\n",indice_maior+1, maior);
        printf("Menor valor digitado, vetor[%d] = %d\n", indice_menor+1, menor);


    return 0;
}