package Java.forloop;

import java.util.Scanner;

public class reversenumber {
    public static void main(String[] args) {
        int input,num,rev,rem;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Number ");
        input=sc.nextInt();
        sc.close();
        num=input;
        for(rem=0,rev=0;num!=0;num=num/10)
        {
            rem = num%10;
            rev = rev*10 + rem;
        }
        System.out.println("Reverse of "+input+" is "+rev);
    }
}
