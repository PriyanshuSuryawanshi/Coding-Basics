package Java.Array;

import java.util.Scanner;

public class show_input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] a = new int [5];
        System.out.println("Enter 5 Elements of the Array");
        for(int i =0;i<5;i++)
        {
            a[i] = sc.nextInt();
        }
        System.out.println("You Entered These 5 Elements");
        for(int i =0;i<5;i++)
        {
            System.out.println(a[i]);
        }
        sc.close();
    }
}
