package com.company;
import java.util.Scanner;

/* A gerente do cabeleireiro Sempre Bela tem uma tabela em que registra os
”pés”, as ”mãos" e o serviço de podologia das cinco manicures. Sabendo-se que cada uma ganha 50% do
que faturou ao mes, criar um algoritmo que possa calcular e imprimir quanto cada um vai receber, uma
vez que não têm carteiras */

public class Main {

    public static void main(String[] args) {

        Scanner scanf = new Scanner(System.in);

        int i;
        double pes, maos, podologia;
        double faturamento [] = new double[5];

        for (i = 0; i < 5; i++) {

            System.out.println("Digite o ganho com 'pés' da manicure" + " " + (i+1));
            pes = scanf.nextFloat();
            System.out.println("Digite o ganho com 'mãos' da manicure" + " " + (i+1));
            maos = scanf.nextFloat();
            System.out.println("Digite o ganho com podologia da manicure" + " " + (i+1));
            podologia = scanf.nextFloat();

            faturamento[i]=(pes+maos+podologia)/2;

            System.out.println(" ");
        }

        for (i = 0; i < 5; i++){

            System.out.println("A manicure" + " " + (i+1) + " " + "ira receber: " +faturamento[i]);
        }
    }
}