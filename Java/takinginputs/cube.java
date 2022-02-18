package Java.takinginputs;

import java.util.Scanner;

public class cube {
    public static void main(String[] args) {
        int num,cube;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Number ");
        num = sc.nextInt();
        cube=num*num*num;
        System.out.println("Cube of "+num+" is "+cube);
        sc.close();
    }
}
