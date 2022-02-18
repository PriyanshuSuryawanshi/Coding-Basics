package Java.Classs;

import java.util.Scanner;

class Cubee
{
    int length,breadth,height,volume;
    public void setdata(int l,int b,int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    public void display()
    {
        volume=length*breadth*height;
        System.out.println("Volume of that Cube "+volume);
    }
}

public class cube {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l,b,h;
        System.out.println("Enter the Length of Cube");
        l = sc.nextInt();
        System.out.println("Enter the Breadth of Cube");
        b = sc.nextInt();
        System.out.println("Enter the Height of Cube");
        h = sc.nextInt();
        Cubee c = new Cubee();
        c.setdata(l, b, h);
        c.display();
        sc.close();
    }
}
