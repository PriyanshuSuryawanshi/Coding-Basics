package Java.ifelse;

import java.util.Scanner;

public class salarybasic {
    public static void main(String[] args) {
        double salary,hra,da,gs;
		gs=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter The Salary");
		salary=sc.nextInt();
		if(salary<1500)
		{
			hra=0.1*salary;
			da=0.9*salary;
			gs=salary+hra+da;
//			System.out.println("Gross Salary Is "+gs);
		}
		else if(salary>=1500)
		{
			hra=500;
			da=0.98*salary;
			gs=salary+hra+da;
//			System.out.println("Gross Salary Is "+gs);
		}
		System.out.println("Gross Salary Is "+gs);
        sc.close();
    }
}
