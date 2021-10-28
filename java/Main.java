package com.company;
import java.util.Scanner;

/*Criar um algoritmo que entre com valores inteiros para uma matriz m3×3 e imprima a matriz girada em 90°*/

public class Main {

    public static int[][] rotacionarMatriz(int[][] matriz) {

        int[][] rot = new int[3][3];

        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                rot[i][j] = matriz[3 - j - 1][i];
            }
        }
        return rot;
    }

    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);

        int matriz[][] = new int[3][3];
        int i, j;

        System.out.println("Entre com uma matriz 3x3");

        for (i = 0; i < 3; i++) {
            System.out.println(" ");
            System.out.println("Linha" + " " + (i + 1) + " ");

            for (j = 0; j < 3; j++) {
                System.out.println("coluna" + " " + (j + 1) + " ");
                matriz[i][j] = scanf.nextInt();
            }
        }

        matriz=rotacionarMatriz(matriz);

        System.out.println("Matriz Rotacionada");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                System.out.print(matriz[i][j] + " ");
            }
            System.out.println(" ");
        }
    }
}