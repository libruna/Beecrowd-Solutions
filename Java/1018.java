import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner entrada = new Scanner(System.in);

        int n = entrada.nextInt();
        entrada.close();

        System.out.println(n);

        int notas = n;
        
        int nota100 = notas / 100;
        System.out.printf("%d nota(s) de R$ 100,00%n", nota100);
        notas = notas % 100;

        int nota50 = (notas / 50);
        System.out.printf("%d nota(s) de R$ 50,00%n", nota50);
        notas = notas % 50;

        int nota20 = (notas / 20);
        System.out.printf("%d nota(s) de R$ 20,00%n", nota20);
        notas = notas % 20;

        int nota10 = (notas / 10);
        System.out.printf("%d nota(s) de R$ 10,00%n", nota10);
        notas = notas % 10;

        int nota5 = (notas / 5);
        System.out.printf("%d nota(s) de R$ 5,00%n", nota5);
        notas = notas % 5;

        int nota2 = (notas / 2);
        System.out.printf("%d nota(s) de R$ 2,00%n", nota2);
        notas = notas % 2;

        System.out.println(notas + " nota(s) de R$ 1,00");
    }
}
