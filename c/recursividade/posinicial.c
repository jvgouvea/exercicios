#include <stdio.h>
#include <stdlib.h>

int c=0;

int verifica(char *s, char *t, int i, int j){

    if (*(s + i) == '\0'){
        return 0;
    }
    if (*(t + j) == '\0'){
        printf("Posicao inicial da substring na string principal = [%d]",c);
        return 1;
    }

    else{
        if (*(s + i) != *(t + j)){
            i++;
            j=0;
            c++;
            return verifica(s, t, i, j);
        }

        if (*(s + i) == *(t + j)){
            i++;
            j++;
            return verifica(s, t, i, j);
        }
    }
}

int main(){
    char s[] = "PARALELEPIPEDO";
    char t[] = "LELE";
    int r=0;

    r = verifica(s, t, 0, 0);
    printf("\nA string %s eh substring da string %s? [%d]", t, s, r);
    printf(" (1 = Sim | 0 = Nao)");

    return 0;
}
