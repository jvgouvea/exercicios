#include <stdio.h>
#include <stdlib.h>

int B(int n, int k){
    if (k==0 || k==n)
        return 1;
    else
        return B(n-1, k-1) + B(n-1, k);
}

int main (){
    int n,k,r=0;

    printf("Insira os valores de 'n' e 'k', respectivamente: \n");
    scanf("%d",&n);
    scanf("%d",&k);

    printf("Resultado %d",B(n,k));

    return 0;
}