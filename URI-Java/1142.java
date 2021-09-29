import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);

        int linha = 1;
        int n = entrada.nextInt();

        for(int i = 1; i <= n*4; i++) {
            if(linha == 4) {
                System.out.println("PUM");
                linha = 1;
            }
            else {
                System.out.print(i + " ");
                linha += 1;
            }
        }
    }
 
}