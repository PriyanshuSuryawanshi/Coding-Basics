package Java.Constructorr;

import java.util.Scanner;

public class CopyConstructor { // Name should be Student
    int id;
    String name;
    CopyConstructor(int i,String n)
    {
        id = i;
        name = n;
    }
    CopyConstructor(CopyConstructor c1)
    {
        id=c1.id;
        name=c1.name;
    }
    void display()
    {
        System.out.println(id+" "+name);
    }
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        CopyConstructor c1 = new CopyConstructor(11,"Ramesh");
        CopyConstructor c2 = new CopyConstructor(c1);
        c1.display();
        c2.display();
        sc.close();
    }
}
