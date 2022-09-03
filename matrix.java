import java.util.*;
public class matrix {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int r,c,i,j,k;
        int a[][]=new int [100][100];
        int b[][]=new int [100][100];
        int sum[][]=new int[100][100];
        int product[][]=new int[100][100];
        System.out.print("Enter the number of rows of both matrices: ");
        r=sc.nextInt();
        System.out.print("Enter the number of columns of both matrices: ");
        c= sc.nextInt();
        System.out.println("Enter the elements of 1st matrix:");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                a[i][j]=sc.nextInt();
        }
        System.out.println("Enter the elements of 2nd matrix:");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                b[i][j]=sc.nextInt();
        }
        System.out.println("1st Matrix");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                System.out.print(" "+a[i][j]);
            System.out.println();
        }
        System.out.println("2nd Matrix");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                System.out.print(" "+b[i][j]);
            System.out.println();
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
        System.out.println("Sum of the two matrices is ");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                System.out.print(" "+sum[i][j]);
            }
            System.out.println();
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                for(k=0;k<c;k++)
                    product[i][j]+=(a[i][k]*b[k][j]);
            }
        }
        System.out.println("Product of the two matrices is ");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                System.out.print(" "+product[i][j]);
            }
            System.out.println();
        }
    }
}
