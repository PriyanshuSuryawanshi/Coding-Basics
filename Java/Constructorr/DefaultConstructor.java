package Java.Constructorr;

import java.util.Scanner;

public class DefaultConstructor {
    DefaultConstructor()
    {
        System.out.println("Object is Created");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        DefaultConstructor d1 = new DefaultConstructor();
        sc.close();
    }
}
