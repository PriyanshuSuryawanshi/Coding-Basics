package Java.Superr;

import java.util.Scanner;

class Super_class
{
    int num = 20;
    public void display()
    {
        System.out.println("This is the display method of superclass");
    }
}

public class Sub_class extends Super_class {
    int num = 10;
    public void display()
    {
        System.out.println("This is display method of subclass");
    }

    public void my_method() {
        Sub_class sub = new Sub_class();
        sub.display();
        super.display();
        System.out.println("Sub Class : "+sub.num);
        System.out.println("Super Class : "+super.num);        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Sub_class Obj = new Sub_class();
        Obj.my_method();
        sc.close();
    }
}
