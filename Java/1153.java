import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);

        int n, fatorial = 1;
        n = sc.nextInt();
        for (int i = n; i > 0; i--){
            fatorial = fatorial * i;
        }
        System.out.println(fatorial);

        sc.close();
    }
}