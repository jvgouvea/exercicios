package com.company;
import java.util.Scanner;

/* Escreva uma função recursiva que calcule a sequencia dada por:
F(1) = 1
F(2) = 2
F(n) = 2 ∗ F(n − 1) + 3 ∗ F(n − 2)
*/

public class Main {

    public static int sequencia(int n){

        if(n == 1){
            return 1;
        }
        if(n == 2) {
            return 2;
        }
        else {
            return 2 * sequencia(n - 1) + 3 * sequencia(n - 2);
        }
    }

    public static void main(String[] args) {

	    Scanner scanf = new Scanner(System.in);
        int numero, resultado;

        System.out.println("Digite o valor de n");
        numero = scanf.nextInt();

        resultado = sequencia(numero);

        System.out.println("Resultado =" + " " + resultado);
    }
}