#include <stdlib.h>
#include <stdio.h>

float funcao(int n){
    if (n==1)
        return 1;
    else{
        if (n%2==0)
            return 1.0/n + funcao(--n);
        else
            return -1.0/n + funcao(--n);
    }
}

int main (){
    int x;
    
    printf("Insira a quantidade de termos: ");
    scanf("%d",&x);

    printf("\nResultado: %.2f", funcao(x));

}