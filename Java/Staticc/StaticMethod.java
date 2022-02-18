package Java.Staticc;

import java.util.Scanner;

public class StaticMethod {
    int rollno;
    String name;
    static String clg = "Its";
    static void changeclg()
    {
        clg = "NEWCLG";
    } 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StaticMethod s1 = new StaticMethod();
        s1.rollno = 10;
        s1.name = "Ramesh";
        StaticMethod.changeclg();
        System.out.println(s1.name);
        System.out.println(s1.rollno);
        System.out.println(StaticMethod.clg);
        sc.close();
    }
}