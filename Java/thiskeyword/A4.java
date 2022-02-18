// Passing this keyword as an Argument in constructor call
package Java.thiskeyword;

import java.util.Scanner;
class B
{
    A4 obj;
    B(A4 obj)
    {this.obj = obj;}
    void display()
    {System.out.println(obj.data);}
}

public class A4 {
    int data = 10;
    A4()
    {
        B b = new B(this);
        b.display(); 
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        A4 a = new A4();
        sc.close();
    }
}
