import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
       Scanner entrada = new Scanner(System.in);

        int n, maior = 0, posicao = 0;

        for(int i = 0; i < 100; i++) {
            n = entrada.nextInt();
            if(n > maior) {
                maior = n;
                posicao = i + 1;
            }
        }

        System.out.println(maior);
        System.out.println(posicao);
    }
}
