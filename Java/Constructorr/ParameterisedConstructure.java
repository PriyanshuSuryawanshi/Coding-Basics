package Java.Constructorr;

import java.util.Scanner;

public class ParameterisedConstructure {// Name should have been Student
    int id;
    String name;
    ParameterisedConstructure(int i,String n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        System.out.println(id+" "+name);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ParameterisedConstructure s1 = new ParameterisedConstructure(1,"Ramesh"),s2 = new ParameterisedConstructure(2,"Suresh");
        s1.display();
        s2.display();
        sc.close();
    }
}
