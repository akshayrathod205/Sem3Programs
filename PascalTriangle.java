import java.util.Scanner;
public class PascalTriangle {
    public static void main(String[] args) {
        int i, j, k, m, n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        n = sc.nextInt();
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= (n - i); j++) {
                System.out.print(" ");
            }
            for (k = 1; k <= i; k++) {
                System.out.print(k);
            }
            for (m = i -1; m > 0; m--) {
                System.out.print(m);
            }
            System.out.println();
        }
    }
}
