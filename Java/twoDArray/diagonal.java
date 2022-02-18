package Java.twoDArray;

import java.util.Scanner;

public class diagonal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [][] a = new int [3][3];
        System.out.println("Enter 9 Elements of Array");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("Entered Matrix : ");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.print(a[i][j]+" ");
            }
            System.out.print("\n");
        }
        System.out.println("Diagonal Elements of Entered Matrix : ");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i==j)
                {
                System.out.print(a[i][j]+" ");
                }
                else
                {
                System.out.print("  ");
                }
            }
            System.out.print("\n");
        }
        sc.close();
    }
}
