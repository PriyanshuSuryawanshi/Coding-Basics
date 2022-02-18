package Java.Array;

import java.util.Scanner;

public class addition_of_array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] a = new int [3];
        int [] b = new int [3];
        int [] c = new int [6];
        System.out.println("Enter 3 Elements of the Array 1");
        for(int i =0;i<3;i++)
        {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter 3 Elements of the Array 2");
        for(int i =0;i<3;i++)
        {
            b[i] = sc.nextInt();
        }
        for(int i =0;i<3;i++)
        {
            c[i] = a[i];
            c[i+3] = b[i];
        }
        System.out.println("These are 6 Elements of Array 3");
        for(int i =0;i<6;i++)
        {
            System.out.println(c[i]);
        }
        sc.close();
    }
}
