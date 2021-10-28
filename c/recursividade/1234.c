#include <stdio.h>
#include <stdlib.h>

int retorno = 0;
int i = 0;

int converter(char *string){
    if (string[i] != '\0'){
        if (string[i] < '0' || string[i] > '9'){
            return 0;
        }
        else{
            retorno *= 10;
            retorno += string[i] - '0';
            converter(&string[i + 1]);
        }
    }
    return retorno;
}

int main(){
    char str[]="1234";

    printf("String convertida pra inteiro: %d\n", (converter(str)));
    return 0;
}