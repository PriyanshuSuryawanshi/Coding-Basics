package Java.Array;

import java.util.Scanner;

public class summation_of_elements {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] a = new int [5];
        int summation=0;
        System.out.println("Enter 5 Elements of the Array");
        for(int i =0;i<5;i++)
        {
            a[i] = sc.nextInt();
        }
        for(int i =0;i<5;i++)
        {
            summation = summation + a[i];
        }
        System.out.println("Summation of These 5 Elements is "+summation);
        sc.close();
    }
}
