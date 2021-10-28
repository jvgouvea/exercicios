#include <stdio.h>
#include <stdlib.h>

char string_contrario(char *s){

    if (s[0] != '\0'){
        string_contrario(&s[1]);
        printf("%c",s[0]);
    }
}

int main(){
    char s[]="JOAO";

    printf("String: %s",s);
    printf("\nString inversa: ");
    string_contrario(s);

    return 0;
}