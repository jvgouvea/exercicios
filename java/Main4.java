package com.company;
import java.util.Scanner;

/* Criar um algoritmo que carregue uma matriz 12 × 4 com os valores das vendas de uma
loja, em que cada linha represente um mes do ano, e cada coluna, uma semana do mes. Para simplificar,
considere que cada mes possui somente 4 semanas. Calcule e imprima:

(a) Total vendido em cada mes do ano;
(b) Total vendido em cada semana durante o ano;
(c) Total vendido no ano.
*/

public class Main {

    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);

        float total_ano=0;
        float vendas[][] = new float [12][4];
        float total_mes[]= new float [12];
        int i,j;

        for (i=0; i< 12; i++) {
            System.out.println(" ");
            System.out.println("Insira a renda do mes" + " " + (i + 1));
            System.out.println(" ");

            for (j = 0; j < 4; j++) {
                System.out.println("Semana" + " " + (j + 1));
                vendas[i][j] = scanf.nextFloat();
                total_mes[i] += vendas[i][j];
                total_ano += vendas[i][j];
            }
        }
                for (i=0; i<12; i++){
                    System.out.println("Rendimento do mes" + " " + (i+1) + " = " + total_mes[i]);
                }

                    for (i=0; i<12; i++){
                        System.out.println(" ");
                        System.out.println("Mes" + " "  + (i+1));

                        for (j=0; j<4; j++){
                            System.out.println("Rendimento da semana" + " " + (j+1) + " = " + vendas[i][j]);
                        }
                    }

                    System.out.println(" ");
                    System.out.println("Total vendido no ano:");
                    System.out.println(total_ano);
    }
}

