import java.util.Scanner;

abstract class shape
{
    abstract void findarea();
}

class rectangle extends shape
{   
    void findarea()
    {
        Scanner sc = new Scanner(System.in);
        double area,length,breadth;
        System.out.println("Enter Length and Breadth of Rectangle");
        length = sc.nextDouble();
        breadth = sc.nextDouble();
        area = length*breadth;
        System.out.println("Area = "+area);
    }
}

class circle extends shape
{
    void findarea()
    {
        Scanner sc = new Scanner(System.in);
        double area,radius;
        System.out.println("Enter radius of Circle");
        radius = sc.nextDouble();
        area = 3.14*radius*radius;
        System.out.println("Area = "+area);
    }
}

public class Areaofshapes {
    public static void main(String[] args) {
        shape s1 = new circle();
        s1.findarea();
    }
}
