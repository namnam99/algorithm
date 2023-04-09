import java.util.Scanner;

public class b_10093 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long a, b;
        a = scan.nextInt();
        b = scan.nextInt();

        if (a == b) {
            System.out.println(0);
            System.out.println("");
        }
        if (a > b) {
            System.out.println(a - b - 1);
            for (long i = b+1; i < a; i++) {
                System.out.print(i + " ");
            }
        }
        else {
            System.out.println(b - a - 1);
            for (long i = a+1; i < b; i++) {
                System.out.print(i + " ");
            }
        }
    }
}
