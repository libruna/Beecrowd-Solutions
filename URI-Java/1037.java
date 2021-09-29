import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Locale.setDefault(Locale.US);
        Scanner entrada = new Scanner(System.in);

        double n = entrada.nextDouble();

        if (n >= 0 && n <= 25) {
            System.out.println("Intervalo [0,25]");
        }
        else if (n > 25 && n <= 50) {
            System.out.println("Intervalo (25,50]");
        }
        else if (n > 50 && n <= 75) {
            System.out.println("Intervalo (50,75]");
        }
        else if (n > 75 && n <= 100) {
            System.out.println("Intervalo (75,100]");
        }
        else {
            System.out.println("Fora de intervalo");
        }
     
    }
}
