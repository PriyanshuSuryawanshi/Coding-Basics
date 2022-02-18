package Java.twoDArray;

import java.util.Scanner;

public class sumofcolumn {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [][] a = new int [3][2];
        int sum=0;
        System.out.println("Enter 6 Digits of The Array");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                a[i][j] = sc.nextInt();
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                System.out.print(a[i][j]+" ");
            }
            System.out.print("\n");
        }

        for(int j=0;j<2;j++)
        {
            for(int i=0;i<3;i++)
            {
                sum = sum + a[i][j];
            }
            System.out.print(sum+" ");
            sum=0;
        }

        sc.close();
    }
}
