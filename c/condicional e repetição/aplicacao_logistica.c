#include <stdio.h>
#include <stdlib.h>

int main (){

    float preco_unitario, custo_total=0;
    int num_produto,i;
    char refrigerado,categoria;

    printf("\tAplicacao para calcular os custos com logistica\n\n");

    printf("Digite o numero de produtos a serem inseridos no progama: ");
    scanf("%d",&num_produto);

    for (i=1; i<=num_produto; i++){

        printf("Insira o preco unitario: ");
        scanf("%f",&preco_unitario);

        printf("Insira o tipo de armazenamento se refrigerado ou nao sendo 'S' sim e 'N' para nao: ");
        fflush(stdin);
        scanf("%c",&refrigerado);

        printf("\nDigite a categoria na qual o produto se encaixa:\n");
        printf("\nA - alimentacao\nL - Limpeza \nV - vestuario\n\n");
        fflush(stdin);
        scanf("%c",&categoria);

        //Alem de informar o custo do produto para seu armazenamento
        //resolvi informar o custo total de estocagem

        //A tabela no moodle estava má formatada, Condicionei os IFs com base na minha visão sobre a mesma


        //Preço unitario ate 20
        if ((preco_unitario<=20 && categoria=='A')){
            
            custo_total+=0.20;
            printf("\nO custo de armazenagem do produto %d e R$ 0.20\n",i);
            printf("\n---------------------------------------------\n\n");
        }

        else if ((preco_unitario<=20 && categoria=='L')){

            custo_total+=0.30;
            printf("\nO custo de armazenagem do produto %d e R$ 0.30\n",i);
            printf("\n---------------------------------------------\n\n");
        }

        else if ((preco_unitario<=20 && categoria=='V')){

            custo_total+=0.40;
            printf("\nO custo de armazenagem do produto %d e R$ 0.40\n",i);
            printf("\n---------------------------------------------\n\n");
        }

        //preço unitario entre 20 e 50
        else if ((preco_unitario>20 && preco_unitario<=50 && refrigerado=='S')){

            custo_total+=0.60;
            printf("\nO custo de armazenagem do produto %d e R$ 0.60\n",i);
            printf("\n---------------------------------------------\n\n");
        }

        else if ((preco_unitario>20 && preco_unitario<=50 && refrigerado=='N')){

            custo_total+=0;
            printf("\nO custo de armazenagem do produto %d e R$ 0\n",i);
            printf("\n---------------------------------------------\n\n");
        }  

        //Preço unitario maior que 50 
        else if ((preco_unitario>50 && refrigerado=='S' && categoria=='A')){

            custo_total+=0.50;
            printf("\nO custo de armazenagem do produto %d e R$ 0.50\n",i);
            printf("\n---------------------------------------------\n\n");
        }  

        else if ((preco_unitario>50 && refrigerado=='S' && categoria=='L')){

            custo_total+=0.20;
            printf("\nO custo de armazenagem do produto %d e R$ 0.20\n",i);
            printf("\n---------------------------------------------\n\n");
        }  

        else if ((preco_unitario>50 && refrigerado=='S' && categoria=='V')){

            custo_total+=0.40;
            printf("\nO custo de armazenagem do produto %d e R$ 0.40\n",i);
            printf("\n---------------------------------------------\n\n");
        }  
        else if ((preco_unitario>50 && refrigerado=='N' && categoria=='A'|| categoria== 'V')){

            custo_total+=0;
            printf("\nO custo de armazenagem do produto %d e R$ 0\n",i);
            printf("\n---------------------------------------------\n\n");
        }  
        else if ((preco_unitario>50 && refrigerado=='N' && categoria=='L')){

            custo_total+=0.10;
            printf("\nO custo de armazenagem do produto %d e R$ 0.10\n",i);
            printf("\n---------------------------------------------\n\n");
        }  
    }
            printf("\nO custo total de armazenagem e: R$ %.2f\n\n",custo_total);

    system("pause");
    return 0;
}