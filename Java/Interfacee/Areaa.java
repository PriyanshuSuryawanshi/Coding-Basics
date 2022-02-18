package Java.Interfacee;

import java.util.Scanner;


interface shape
{
    void area();
}

class circle implements shape
{
    final double pi = 3.14;
    Scanner sc = new Scanner(System.in);
    public void area() 
    {
        double area,radius;
        // System.out.println("Enter the Radius of Circle");
        // radius = sc.nextInt();
        radius = 10;
        area = radius*radius*pi;
        System.out.println("Area of Circle = "+area);
        sc.close();
    }
}

class rectangle implements shape
{
    Scanner sc = new Scanner(System.in);
    public void area() 
    {
        double area,length,breadth;
        // System.out.println("Enter the Length of Rectangle");
        // length = sc.nextInt();
        // System.out.println("Enter the Breadth of Rectangle");
        // breadth = sc.nextInt();
        length = 10;
        breadth = 5;
        area = length*breadth;
        System.out.println("Area of Rectangle = "+area);
        sc.close();
    }
}

public class Areaa {
    
    Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        circle c1 = new circle();
        c1.area();
        rectangle r1 = new rectangle();
        r1.area();
    }
}