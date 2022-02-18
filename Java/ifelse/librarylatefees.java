package Java.ifelse;

import java.util.Scanner;

public class librarylatefees {
    public static void main(String[] args) {
        int days;
        double fees;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter The Days You Are Late to return the Book ");
        days=sc.nextInt();
        if (days<=5)
        {
            fees=(0.5)*days;
            System.out.println("Late Fees = Rs."+fees);
        }
        else if (days>5 && days<=10)
        {
            fees= 2.5+1*(days-5);
            System.out.println("Late Fees = Rs."+fees);
        }
        else if(days>10 && days <=30)
        {
            fees = 7.5+5*(days-10);
            System.out.println("Late Fees = Rs."+fees);
        }
        else 
        {
            System.out.println("Your Membership Has Been Cancelled");
        }
        sc.close();
    }
}
