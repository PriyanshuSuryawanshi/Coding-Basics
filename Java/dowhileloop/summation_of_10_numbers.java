package Java.dowhileloop;

import java.util.Scanner;

public class summation_of_10_numbers {
    public static void main(String[] args) {
        int num,sum=0,count=1;
        double average;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the 10 Numbers You want to add : ");
        do{
            num=sc.nextInt();
            sum=sum+num;
            count++;
        }while(count<=10);
        System.out.println("Sum of 10 Numbers is "+sum);
        average=(double)sum/10;
        System.out.println("Average of 10 Numbers is "+average);
        sc.close();
    }
}
