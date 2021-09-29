import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner entrada = new Scanner(System.in);

        int soma = 0;
        int x = entrada.nextInt();
        int y = entrada.nextInt();

        if(x > y) {
            int aux = y;
            y = x;
            x = aux;
        }

        for(int i = x; i <= y; i++) {
            if(i % 13 != 0)
                soma += i;
        }
        System.out.println(soma);
    }
 
}