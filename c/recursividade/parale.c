#include <stdio.h>
#include <stdlib.h>

int verifica(char *s, char *t, int i, int j){

    if (*(s + i) == '\0'){
        return 0;
    }
    if (*(t + j) == '\0'){
        return 1;
    }

    else{
        if (*(s + i) != *(t + j)){
            i++;
            j=0;
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
    char t2[] = "JOAO";
    int r = 0;

    r = verifica(s, t, 0, 0);
    printf("\nA string %s eh substring da string %s? [%d]", t, s, r);

    r = verifica(s, t2, 0, 0);
    printf("\nA string %s eh substring da string %s? [%d]", t2, s, r);
    printf("\n\n[1] = Sim | [0] = Nao");

    return 0;
}
