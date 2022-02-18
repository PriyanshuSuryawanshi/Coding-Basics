package Java.Switchcase;

import java.util.Scanner;

public class calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int operation;
        double num1,num2;
        System.out.println("Enter First number ");
        num1 = sc.nextInt();
        System.out.println("Enter Second Number ");
        num2 = sc.nextInt();
        System.out.println("Enter 1 for Addition");
        System.out.println("Enter 2 for Subtraction");
        System.out.println("Enter 3 for Multiplication");
        System.out.println("Enter 4 for Division");
        operation = sc.nextInt();
        sc.close();
        switch (operation) {
            case 1:
            System.out.println(num1+" + "+num2+" = "+(num1+num2));
                break;
            case 2:
            System.out.println(num1+" - "+num2+" = "+(num1-num2));
                break;
            case 3:
            System.out.println(num1+" * "+num2+" = "+(num1*num2));
                break;    
            case 4:
            System.out.println(num1+" / "+num2+" = "+(num1/num2));
                break;    
            default:
            System.out.println("Operation You Have Entered Is not Valid\n");
            break;
        }
    }
}
