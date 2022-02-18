//Using this constructor call
package Java.thiskeyword;

import java.util.Scanner;

public class Student1 {
    int id;
    String name;
    String city;
    Student1(int i,String n)
    {
        this.id = i;
        this.name = n;
    }
    Student1(int i,String n,String city)
    {
        this(i, n);
        this.city = city;
    }


    void display()
    {
        System.out.println(id+" "+name+" "+city);        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student1 s2 = new Student1(22, "Suresh");
        Student1 s1 = new Student1(11, "Ramesh","Nsk");        
        s1.display();        
        s2.display();        
        sc.close();
    }
}
