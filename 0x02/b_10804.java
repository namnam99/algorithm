import java.util.Scanner;

public class b_10804 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] card = new int[20];
        for (int i = 0; i < 20; i++){
            card[i] = i+1;
        }
        for (int i = 0; i < 10; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            a--;
            b--;
            while (a < b) {
                int tmp = card[a];
                card[a] = card[b];
                card[b] = tmp;
                a++;
                b--;
            }
        }
        for (int i = 0; i < 20; i++) {
            System.out.print(card[i] + " ");
        }
    }
}
