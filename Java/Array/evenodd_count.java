package Java.Array;

import java.util.Scanner;

public class evenodd_count {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a [] = new int[5];
        int evencount=0,oddcount=0;
        System.out.println("Enter 5 Elements of the Array 1");
        for(int i =0;i<5;i++)
        {
            a[i] = sc.nextInt();
        }
        for(int i =0;i<5;i++)
        {
            if(a[i]%2==0)
            {
                evencount++;
            }
            else
            {
                oddcount++;
            }
        }
        System.out.println("You have Entered "+evencount+" Even Numbers");
        System.out.println("You have Entered "+oddcount+" Odd Numbers");
        sc.close();
    }
}
