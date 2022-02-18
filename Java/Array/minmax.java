package Java.Array;

import java.util.Scanner;

public class minmax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a [] = new int[5];
        int min,max;
        System.out.println("Enter 5 Elements of the Array 1");
        for(int i =0;i<5;i++)
        {
            a[i] = sc.nextInt();
        }
        min=max=a[0];
        for(int i =0;i<5;i++)
        {
            if(max<a[i])
            {
               max = a[i];
            }
            if(min>a[i])
            {
                min = a[i];
            }
        }
        System.out.println(max+" is the Maximum Number");
        System.out.println(min+" is the Minimum Number");
        sc.close();
    }
}
