package Java.twoDArray;

import java.util.Scanner;

public class additionoftwomatrices {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [][]a = new int[3][2];
        int [][]b = new int[3][2];
        int [][]c = new int[3][2];

        System.out.println("Enter 6 Digits of The Array 1");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                a[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter 6 Digits of The Array 2");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                b[i][j] = sc.nextInt();
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        System.out.println("Sum of Two Matrices is : ");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                System.out.print(c[i][j]+" ");
            }
            System.out.print("\n");
        }
        sc.close();
    }
}
