package Java.Superr;

import java.util.Scanner;

class superclass
{
    int age;
    superclass(int age)
    {this.age=age;}
    public void getage()
    {
        System.out.println("Age = "+age);
    }
}

public class Subclass extends superclass{
    Subclass(int age) {
        super(age);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Subclass s = new Subclass(55);
        s.getage();
        sc.close();
    }
}
