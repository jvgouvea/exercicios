#include <stdio.h>
#include <stdlib.h>

int MDC(int n, int m){

    if(m<=n && n%m==0)
        return m;

    if (n<m)
        return MDC(m,n);

    else
        return MDC(m,n % m);
}

int main(){

    int x;
    int y;

    printf("Insira o valor de n: ");
    scanf("%d", &x);
    printf("Insira o valor de m: ");
    scanf("%d", &y);

    printf("Resultado = %d", MDC(x,y));

    return 0;
}  