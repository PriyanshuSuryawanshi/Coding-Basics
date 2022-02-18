package Java.forloop;

import java.util.Scanner;

public class armstrongnumber {
    public static void main(String[] args) {
        int num,rem,armstrong=0,input;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Number ");
        input=sc.nextInt();
        sc.close();
        num=input;
        for(rem=0;num!=0;num=num/10)
        {
            rem = num%10;
            armstrong = armstrong + rem*rem*rem;
        }
        System.out.println("Sum of cube of Digits of "+input+" is "+armstrong);
    }
}
