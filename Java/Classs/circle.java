package Java.Classs;

import java.util.Scanner;

class Circlee
{
    double radius;
    public void setradius(double r)
    {
        radius = r;
    }
    
    public void display()
    {
        double area = 3.14*radius*radius;
        double perimeter = 2*3.14*radius;
        System.out.println("Area of Circle is "+area);
        System.out.println("Perimenter of Circle is "+perimeter);
    }
}

public class circle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double r;
        System.out.println("Enter The Radius ");
        r = sc.nextInt();
        Circlee c = new Circlee();
        c.setradius(r);
        c.display();
        sc.close();
    }
}
