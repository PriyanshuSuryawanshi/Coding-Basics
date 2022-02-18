package Java.takinginputs;

import java.util.Scanner;

public class rectanglearea {
    public static void main(String[] args) {
        int length,breadth,area,perimeter;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter The Length");
		length=sc.nextInt();
		System.out.println("Enter The First Number");
		breadth=sc.nextInt();	
		area=length*breadth;
		perimeter=2*(length+breadth);
		System.out.println("Area of Rectangle is "+area);
		System.out.println("Perimeter of Rectangle is "+perimeter);
        sc.close();
    }
}
