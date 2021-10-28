#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,j;
    float nota1[100], nota2[100], media[200];

    //nota 1 e 2 do aluno + calculo da media
    for (j=0; j<10; j++){
    
    printf("Ola Aluno %d\n",j+1);

    printf("Digite sua nota 1: ");
    scanf("%f",&nota1[j]);

    printf("Digite sua nota 2: ");
    scanf("%f",&nota2[j]);

    media[j]=(nota1[j]+nota2[j])/2;
    printf("\n");
    }

    //exibição das informações obtidas no for anterior
    for (i=0; i<10; i++){
    printf("\n");

    printf("Aluno %d\n", i+1);
    printf("Nota 1: %.2f\n", nota1[i]);
    printf("Nota 2: %.2f\n", nota2[i]);
    printf("Media: %.2f\n",media[i]);
    printf("\n\n");
    }

    system("PAUSE");
    return 0;
}