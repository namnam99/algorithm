import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class b_10093 {
    public static void main(String[] args) throws IOException {
//        Scanner scan = new Scanner(System.in);
//        long a, b;
//        a = scan.nextInt();
//        b = scan.nextInt();
//
//        if (a == b) {
//            System.out.println(0);
//            System.out.println("");
//        }
//        else if (a > b) {
//            System.out.println(a - b - 1);
//            for (long i = b+1; i < a; i++) {
//                System.out.print(i + " ");
//            }
//        }
//        else {
//            System.out.println(b - a - 1);
//            for (long i = a+1; i < b; i++) {
//                System.out.print(i + " ");
//            }
//        }
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st = new StringTokenizer(br.readLine());

        long a = Long.parseLong(st.nextToken());
        long b = Long.parseLong(st.nextToken());
        if(a > b){
            long tmp = a;
            a = b;
            b = tmp;
        }
        if(a == b)
            sb.append(b-a).append("\n");
        else sb.append(b-a-1).append("\n");

        for(long i = a+1; i < b; i++){
            sb.append(i).append(" ");
        }
        System.out.println(sb);
    }
}
