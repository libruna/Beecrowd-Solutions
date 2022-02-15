import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner entrada = new Scanner(System.in);

        while(true) {

            int x = entrada.nextInt();
            int y = entrada.nextInt();

            if(x == y) return;
            else if(x < y) System.out.println("Crescente");
            else System.out.println("Decrescente");
        }
    }
}