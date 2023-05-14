import java.util.Scanner;

public class b_1267 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int Y = 0;
        int M = 0;

        for (int i = 0; i < N; i++) {
            int time = scan.nextInt();
            Y += (time/30 + 1) * 10;
            M += (time/60 + 1) * 15;
        }

        if (Y > M) System.out.println("M " + M);
        else if (M > Y) System.out.println("Y " + Y);
        else System.out.println("Y M " + Y);
    }
}
