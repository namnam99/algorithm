import java.util.Arrays;
import java.util.Scanner;

public class b_2587 {
    public static void main(String[] args) {
        int avg = 0;
        int[] arr = new int[5]; 
        Scanner scan = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            int n = scan.nextInt();
            avg += n;
            arr[i] = n;
        }
        Arrays.sort(arr);
        System.out.println(avg/5);
        System.out.println(arr[2]);
    }
}