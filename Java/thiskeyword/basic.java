package Java.thiskeyword;

import java.util.Scanner;

public class basic {
    int id;
    String name;
    basic(int i,String n)
    {
        this.id = i;
        this.name = n;
    }
    void display()
    {
        System.out.println(id+" "+name);        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        basic b1 = new basic(11, "Ramesh");        
        basic b2 = new basic(22, "Suresh");
        b1.display();        
        b2.display();        
        sc.close();
    }
}
