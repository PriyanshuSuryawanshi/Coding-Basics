package Java.Classs;

import java.util.Scanner;

public class Anonymusobject {
    void factorial(int n)
    {
        int factorial = 1;
        for(int i=1;i<=n;i++)
        {
            factorial = factorial*i;
        }
        System.out.println("Factorial is "+factorial);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        new Anonymusobject().factorial(5);
        sc.close();
    }
}
