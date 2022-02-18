import java.util.Scanner;

abstract class salary
{
    abstract void showsalary();
}

class dailysalary extends salary
{
    Scanner sc = new Scanner(System.in);
    void showsalary()
    {
        int dailywage = 200;
        System.out.println("Daily wage = "+dailywage);
    }
}
class monthlysalary extends salary
{
    Scanner sc = new Scanner(System.in);
    void showsalary()
    {
        int attendance,totalwage;
        int dailywage = 200;
        System.out.println("Enter attendance");
        attendance = sc.nextInt();
        totalwage = dailywage*attendance;
        System.out.println("Monthly wage = "+totalwage);
    }
}

public class workersPay {
    public static void main(String[] args) {
        salary s1 = new monthlysalary();
        s1.showsalary();
    }
}