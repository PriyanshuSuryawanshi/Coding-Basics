package Java.Inheritance;

import java.util.Scanner;

class Calculation
{
    int z;
    public void addition(int x,int y)
    {
        z = x + y;
        System.out.println("Sum = "+z);
    }

    public void subtraction(int x,int y)
    {
        z = x - y;
        System.out.println("Difference = "+z);
    }
}

public class My_calculations extends Calculation {
    public void multiplication(int x,int y)
    {
        z = x * y;
        System.out.println("Multiplication = "+z);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a=20,b=10;
        My_calculations demo = new My_calculations();
        demo.addition(a, b);
        demo.subtraction(a, b);        
        demo.multiplication(a, b);        
        sc.close();
    }
}
