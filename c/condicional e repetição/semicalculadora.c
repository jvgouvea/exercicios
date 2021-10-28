#include <stdio.h>

int main (){
    float num1,num2,codigo,media=0,dif=0,produto=0,div=0;
    int i=1,j;

    while (i>=1){

        printf("Escolha uma alternativa de 1 a 4\n\n");
        printf("\n1 - Media entre dois numeros\n2 - Diferenca entre dois numeros\n");
        printf("3 - Produto entre 2 numeros\n4 - Divisao entre dois numeros \n\n");
        scanf("%f",&codigo);

    if (codigo<1 || codigo>4){
        printf("\nCodigo invalido\n\n");
        return 0;
}
        printf("\nDigite dois numeros: \n\n");
        scanf("%f %f", &num1,&num2);

    if (codigo==1){
        
        media=(num1+num2)/2;
        printf("\nO resultado da media entre os numeros e: %.2f\n\n", media);
    }
    else if (codigo==2){

        dif=num1-num2;
        printf("\nA diferenca entre os dois numeros e: %.2f\n\n", dif);
    }
    else if (codigo==3){

        produto=num1*num2;
        printf("\nO produto entre os dois numeros e: %.2f\n\n", produto);
    }
    else if (codigo==4) {
        if (num2==0){
            printf("\nDivisao invalida, segundo numero nao pode ser 0\n\n");
        }
        else{
            div=num1/num2;
            printf("\nA divisao entre os dois numeros e: %.2f\n\n",div);
        }
    }   
            printf("Digite 1 para realizar outro procedimento ou -1 para finalizar o programa\n\n ");
            scanf("%d",&j);
            i=i*j;
    }

system ("PAUSE");
return 0;
}