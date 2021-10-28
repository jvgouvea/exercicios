package com.company;
import java.util.Scanner;

/*Uma floricultura conhecedora de sua clientela gostaria de fazer um algoritmo que
pudesse controlar sempre um estoque mınimo de determinadas plantas, pois todos os dias, pela manha, o
dono faz novas aquisicoes. Criar um algoritmo que deixe cadastrar 50 tipos de plantas e nunca deixar
o estoque ficar abaixo do ideal. Para cada planta, o dono gostaria de cadastrar o nome, o estoque ideal
e a quantidade em estoque. Dessa forma o algoritmo pode calcular a quantidade que o dono da loja
precisa comprar no proximo dia. Essa quantidade a ser comprada deve ser impressa (quando maior que
zero) como uma lista para o dono da floricultura.
*/

public class Main {

    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);

        int i;
        String nome_planta[] = new String[100];
        int estoque_ideal[] = new int[100];
        int estoque_atual[] = new int[100];
        int reposicao[] = new int[100];

        System.out.println("Voce podera cadastrar ate 50 plantas!!!");

        for (i = 0; i < 50; i++) {

            System.out.println("Digite o nome da planta: ");
            nome_planta[i] = scanf.next();

            System.out.println("Digite a quantidade em estoque: ");
            estoque_atual[i] = scanf.nextInt();

            System.out.println("Digite o estoque ideal: ");
            estoque_ideal[i] = scanf.nextInt();

            reposicao[i] = estoque_ideal[i] - estoque_atual[i];
            System.out.println(" ");
        }

        for (i = 0; i < 50; i++) {

            if (reposicao[i] > 0) {

                System.out.println("Planta " + (i + 1));
                System.out.println("Nome: " + nome_planta[i]);
                System.out.println("Estoque atual: " + estoque_atual[i]);
                System.out.println("Estoque ideal: " + estoque_ideal[i]);
                System.out.println("Quantidade da reposição: " + reposicao[i]);
                System.out.println(" ");
            }
        }
    }
}