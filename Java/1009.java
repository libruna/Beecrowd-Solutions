import java.io.IOException;
 
import java.util.Locale;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Locale.setDefault(Locale.US);
        Scanner entrada = new Scanner(System.in);
        
        String nome = entrada.next();
        double salarioFixo = entrada.nextDouble();
        double montante = entrada.nextDouble();
        
        double total = (0.15 * montante) + salarioFixo;

        System.out.printf("TOTAL = R$ %.2f%n", total);
        entrada.close();
    }
}
