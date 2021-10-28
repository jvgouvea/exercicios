#include <stdio.h>
#include <string.h>

int main() {
  char nome_produto[15][100], exemplar;
  int codigo_produto[15];
  float preco_produto[15], porc_lucro[15], preco=0,soma=0;
  int i = 0, menor = 0, maior = 0;

  for (i = 0; i < 15; i++) {
    printf("Qual o nome do produto %d: ", i+1);
    fflush(stdin);
    scanf("%s", &nome_produto[i]);

    printf("Qual o codigo do produto %d: ", i+1);
    scanf("%d", &codigo_produto[i]);

    if (i == 0) {
        menor = codigo_produto[i];
    }
    
    if (codigo_produto[i] < menor) {
        menor = codigo_produto[i];
    }

    if (i == 0) {
        maior = codigo_produto[i];
    }
    
    if (codigo_produto[i] > maior) {
        maior = codigo_produto[i];
    }

    printf("Qual o preco do produto %d: ", i+1);
    scanf("%f", &preco_produto[i]);

    printf("Qual a porcentagem de lucro do produto %d: ",i+1);
    scanf("%f", &porc_lucro[i]);

    preco=preco_produto[i]*porc_lucro[i];
    soma += preco;
    printf("\n");
  }
  
  for(int i = 0; i < 15; i++) {
    printf("Produto: %s\nCodigo: %i \nPreco do produto:%2.f \n", 
    nome_produto[i], codigo_produto[i], preco_produto[i]);
    printf("\n");
  }

  printf("O codigo do produto que teve maior lucro foi %d \n", maior);
  printf("O codigo do produto que teve menor lucro foi %d \n", menor);

  printf("\nFoi vendido pelo menos um exemplar de cada produto? 'S' sim ou 'N' nao: ");
  fflush(stdin);
  scanf("%c",&exemplar);

  if (exemplar=='S')
    printf("O lucro total da loja foi: %.2f \n", soma);
  
  else
    system("\n\nPAUSE");
    return 0;
}