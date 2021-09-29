import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Locale.setDefault(Locale.US);
        Scanner entrada = new Scanner(System.in);

        int numero = entrada.nextInt();
        int horas = entrada.nextInt();
        double valor = entrada.nextDouble();

        double salario = horas * valor;

        System.out.printf("NUMBER = %d%n", numero);
        System.out.printf("SALARY = U$ %.2f%n", salario);
        
        entrada.close();
 
    }
}
