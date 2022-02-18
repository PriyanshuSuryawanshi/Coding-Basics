package Java.ifelse;

import java.util.Scanner;

public class greaterorlessthan {
    public static void main(String[] args) {
        int num;
        Scanner sca=new Scanner(System.in);
        System.out.println("Enter a Number");
        num=sca.nextInt();
        if(num<10)
        {
            System.out.println("Number You have Entered is Less than 10");
        }
        else if(num>10)
        {
            System.out.println("Number You have Entered is Greater than 10");
        }
        else if(num==10)
        {
            System.out.println("Number You have Entered is Equal to 10");
        }
        sca.close();
    }
}
