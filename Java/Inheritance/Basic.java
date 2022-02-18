package Java.Inheritance;

import java.util.Scanner;


class Employee
{
    double salary = 40000; 
}

public class Basic extends Employee {
    int bonus = 10000;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Basic b = new Basic();
        System.out.println("Salary = "+b.salary);        
        System.out.println("Bonus = "+b.bonus);    
        sc.close();
        }
}
