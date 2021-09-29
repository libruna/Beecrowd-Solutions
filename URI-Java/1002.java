import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Locale.setDefault(Locale.US);
        Scanner entrada = new Scanner(System.in); 

        double pi = 3.14159;
        double raio = entrada.nextDouble();

        double area = pi * raio * raio;

        System.out.printf("A=%.4f%n", area);
        entrada.close();
    }
}
