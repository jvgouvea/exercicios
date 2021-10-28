#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, j, aux;
    float numero[10];

     for( i=0; i<3; i++ ){
          printf("Digite um valor: ");
          scanf("%f",&numero[i]);
          }

          for( i=0; i<3; i++ ){

                  for( j=i+1; j<3; j++ ){

                       if( numero[i] < numero[j] ){
                           aux = numero[i];
                           numero[i] = numero[j];
                           numero[j] = aux;
                       }
                  }
           }
            printf("\nVetor em ordem decrescente: ");
            for(i=0;i<3;i++)
           {
            printf("\n%.2f",numero[i]);
           }     

    return 0;
}