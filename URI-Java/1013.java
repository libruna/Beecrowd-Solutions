import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner calculo = new Scanner(System.in);

        int a = calculo.nextInt();
        int b = calculo.nextInt();
        int c = calculo.nextInt();
        //
        int maior1 = (a+b+Math.abs(a-b))/2;
        int maior2 = (maior1+c+Math.abs(maior1-c))/2;
    
        System.out.printf("%d eh o maior%n", maior2);
    
        calculo.close();
    }
 
}