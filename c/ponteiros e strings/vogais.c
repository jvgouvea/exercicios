#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int conta_vogais(char * str) {
	int num = 0;
	char vogais[10] = "AaEeIiOoUu";

	while (*str){
		for (int i = 0; i < 10; i++)
			if (*str == vogais[i])
				num++;
		    str++;
	}
	return num;
}

int main() {
  char palavra[30];

  printf("Digite uma palavra: ");
  gets(palavra);

  printf("\nA palavra %s possui %d vogais",palavra,conta_vogais(palavra));
  return 0;
}