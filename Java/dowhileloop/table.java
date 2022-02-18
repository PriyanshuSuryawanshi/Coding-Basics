package Java.dowhileloop;

import java.util.Scanner;

public class table {
    public static void main(String[] args) {
        int num,i=1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Number Whose Table You Want ");
        num=sc.nextInt();
        do{
            System.out.println(num+" x "+i+" = "+num*i);
            i++;
        }while(i<=10);
        sc.close();
    }
}
