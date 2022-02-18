package Java.takinginputs;

import java.util.Scanner;

public class circlearea {
    public static void main(String[] args)
	{
		double radius,area,perimeter;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter The Radius Of Circle");
		radius=sc.nextInt();
		area=3.14*radius*radius;
		perimeter=2*3.14*radius;
		System.out.println("Area of Circle is "+area);
		System.out.println("Perimeter of Circle is "+perimeter);
        sc.close();
	}
}
