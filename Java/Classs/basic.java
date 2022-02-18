package Java.Classs;

import java.util.Scanner;

class Student
{
    int id;
    String name;
    double percentage;

    public void input(int i,String n,double p)   //Method created
    {
        id = i;
        name = n;
        percentage = p;
    }

    public void  display()
    {
        System.out.println("ID = "+id);
        System.out.println("Name = "+name);
        System.out.println("Percentage = "+percentage);
    }
}

public class basic {
    public static void main(String[] args) {
        Scanner  sc = new Scanner(System.in);
        Student s1 = new Student();
        s1.input(12, "Ramesh", 67.89);
        s1.display();
        sc.close();
    }
}
