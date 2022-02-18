//usint 'this' to invoke class constructor
package Java.thiskeyword;

import java.util.Scanner;

public class student {
    int id;
    String name;
    student()
    {
        System.out.println("Default Connstructor Invoked");
    }
    student(int i,String n)
    {
        this();
        this.id = i;
        this.name = n;
    }
    void display()
    {
        System.out.println(id+" "+name);        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        student s1 = new student(11, "Ramesh");        
        student s2 = new student(22, "Suresh");
        s1.display();        
        s2.display();        
        sc.close();
    }
}
