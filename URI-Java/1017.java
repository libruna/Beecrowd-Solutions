import java.io.IOException;
 
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner entrada = new Scanner(System.in);

        int tempo = entrada.nextInt();
        int velocidade = entrada.nextInt();
        double consumo =  (tempo*velocidade) / 12.0;

        System.out.printf("%.3f%n", consumo);

        entrada.close();
 
    }
 
}