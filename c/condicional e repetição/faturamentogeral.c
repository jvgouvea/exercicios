#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorkw,sal_min,kw,valor_consumidor=0,valor_consumidorparcial=0,acrescimo=0,faturamentogeral=0;
    int tipo,i,qtd_pessoas,entre1e5mil=0;

    printf("Digite o salario minimo: ");
    scanf("%f",&sal_min);
    valorkw=sal_min*1/4;
    printf("Cada kW equivale a 1/4 do salario minimo: %.2f R$\n\n",valorkw);
    
    for (i=1;i!=0;){

            
        printf("\n---------------------------------------------------------\n\n");


        printf("\n\tDigite qual o seu tipo de consumidor\n");
        printf("\n1 - comercial\n2 - residencial\n3 - industrial\n\n");
        scanf("%d",&tipo);

        printf("\nDigite a quantidade de quilowatts gasto: ");
        scanf("%f",&kw);
        i*=kw;

        if (tipo==1){
        
        valor_consumidorparcial=kw*valorkw;
        acrescimo=valor_consumidorparcial*0.10;
        valor_consumidor=valor_consumidorparcial+acrescimo;
        faturamentogeral=faturamentogeral+valor_consumidor;

                if (valor_consumidor>=1000 && valor_consumidor<=1500){
                entre1e5mil++;
                }

                    printf("O seu valor a ser pago ja com o acrescimo e: %.2f R$\n\n",valor_consumidor);
        }
        
        if (tipo==2){

        valor_consumidorparcial=kw*valorkw;
        acrescimo=valor_consumidorparcial*0.15;
        valor_consumidor=valor_consumidorparcial+acrescimo;
        faturamentogeral=faturamentogeral+valor_consumidor;

                if (valor_consumidor>=1000 && valor_consumidor<=1500){
                entre1e5mil++;
                }
        
                    printf("O seu valor a ser pago ja com o acrescimo e: %.2f R$\n\n",valor_consumidor);
        }

        if (tipo==3){

        valor_consumidorparcial=kw*valorkw;
        acrescimo=valor_consumidorparcial*0.20;
        valor_consumidor=valor_consumidorparcial+acrescimo;
        faturamentogeral=faturamentogeral+valor_consumidor;

                if (valor_consumidor>=1000 && valor_consumidor<=1500){
                entre1e5mil++;
                }

                    printf("O seu valor a ser pago ja com o acrescimo e: %.2f R$\n\n",valor_consumidor);
        }

    }
    
        printf("\n---------------------------------------------------------\n\n");

        printf("O faturamento geral da empresa e: %.2f R$\n",faturamentogeral);
        printf("A quantidade de consumidores que vao pagar entre R$1.000,00 e R$1.500,00 e: %d\n\n",entre1e5mil);


    system("PAUSE");
    return 0;
}
