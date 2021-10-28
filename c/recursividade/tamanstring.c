#include <stdio.h>
#include <stdlib.h>

int tamanho_string(char *s){
    if (s[0] == '\0')
        return 0;
    else
        return 1+tamanho_string(&s[1]);
}

int main(){
    char *string="JOAO";

    printf("String: %s",string);
    printf("\nTamanho da string = %d", tamanho_string(string));

    free(string);
    return 0;
}