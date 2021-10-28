package suprimentos;

public class Invoice {

    private int numeroDoItem;
    private String descricao;
    private int quantidadeComprada;
    private double precoUnitario;

    public Invoice(int num_item, String descr, int quant_comprada, double prec_unit){

        this.numeroDoItem=num_item;
        this.descricao=descr;

        if (quant_comprada<0) {
            this.quantidadeComprada = 0;
        }
        else {
            this.quantidadeComprada = quant_comprada;
        }

        if (prec_unit<0) {
            this.precoUnitario = 0;
        }
        else {
            this.precoUnitario = prec_unit;
        }

    }

    public double getInvoiceAmount(){
        return this.quantidadeComprada * this.precoUnitario;
    }

    public int getNumeroDoItem() {
        return numeroDoItem;
    }

    public void setNumeroDoItem(int numeroDoItem) {
        this.numeroDoItem = numeroDoItem;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public int getQuantidadeComprada() {
        return quantidadeComprada;
    }

    public void setQuantidadeComprada(int quant_comprada) {
        if (quant_comprada<0) {
            this.quantidadeComprada = 0;
        }
        else {
            this.quantidadeComprada = quant_comprada;
        }
    }

    public double getPrecoUnit() {
        return precoUnitario;
    }

    public void setPrecoUnit(double prec_unit) {
        if (prec_unit<0) {
            this.precoUnitario = 0;
        }
        else {
            this.precoUnitario = prec_unit;
        }
    }

}

package suprimentos;
import java.util.Scanner;
import suprimentos.Invoice;

public class Main{
    public static void main(String args[]){
        Scanner scanf = new Scanner(System.in);
        double total_fatura = 0;

        System.out.println("Insira o número de produtos que deseja inserir na fatura: ");
        int numeroDeProdutos=scanf.nextInt();

        Invoice fatura[] = new Invoice[numeroDeProdutos];

        for(int i=0;i<fatura.length;i++){
            fatura[i] = new Invoice(0,"-", 0,0.0);

            System.out.println("\nInsira o numero do produto " + (i+1));
            fatura[i].setNumeroDoItem(scanf.nextInt());

            System.out.println("Insira a descrição do produto " + (i+1));
            fatura[i].setDescricao(scanf.next());

            System.out.println("Insira o preço do produto " + (i+1));
            fatura[i].setPrecoUnit(scanf.nextDouble());

            System.out.println("Insira a quantidade que se encontra do produto " + (i+1));
            fatura[i].setQuantidadeComprada(scanf.nextInt());

            total_fatura += fatura[i].getInvoiceAmount();
        }

        for(int i=0; i<numeroDeProdutos; i++){
            System.out.println("\nProduto " + (i+1));
            System.out.println("Numero do produto: " + fatura[i].getNumeroDoItem());
            System.out.println("Descrição: " + fatura[i].getDescricao());
            System.out.println("Quantidade: " + fatura[i].getQuantidadeComprada());
            System.out.println("Preço: " + fatura[i].getPrecoUnit());
            System.out.println("Faturamento do produto " + (i+1) + " = " + fatura[i].getInvoiceAmount());

        }

        System.out.println("\nFaturamento total: " + total_fatura);
    }
}
