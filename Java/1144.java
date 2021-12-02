import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
       Scanner entrada = new Scanner(System.in);

        int n = entrada.nextInt();

        for(int i = 1; i <= n; i++) {
            System.out.printf(i + " " + (i*i) + " " + (i*i*i) + "%n");
            System.out.printf(i + " " + ((i*i) + 1) + " " + ((i*i*i) + 1) + "%n");
        }
 
    }
}
