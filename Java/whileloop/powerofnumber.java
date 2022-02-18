package Java.whileloop;

import java.util.Scanner;

public class powerofnumber {
    public static void main(String[] args) {
        int num,power,i=1,output=1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number ");
        num=sc.nextInt();
        System.out.println("Enter The Power You want to Give to that number ");
        power=sc.nextInt();
        while(i<=power)
        {
            output=num*output;
            i++;
        }
        System.out.println(num+" raise to "+power+" = "+output);
        sc.close();
    }
}
