package Java.whileloop;

import java.util.Scanner;

public class factorial {
    public static void main(String[] args) {
        int num,factorial=1,i=1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Number Whose Factorial You Want ");
        num=sc.nextInt();
        while(i<=num)
        {
            factorial=factorial*i;
            i++;
        }
        System.out.println("Factorial of "+num+" = "+factorial);
        sc.close();
    }
}
