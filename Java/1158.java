import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner entrada = new Scanner(System.in);

        int n = entrada.nextInt();
        while(n != 0) {

            int x = entrada.nextInt();
            int y = entrada.nextInt();

            int soma = 0;
            for(int i = x, j = 0; j < y ; i++) {
                if(i % 2 != 0) {
                    j++;
                    soma += i;
                }
            }
            System.out.println(soma);
            n--;
        }
    }
}