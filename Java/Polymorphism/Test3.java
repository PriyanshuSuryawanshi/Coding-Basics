package Java.Polymorphism;
// This is example of polymorphism
class Bank
{
    int getROI()
    {return 0;}
}
class SBI extends Bank
{
    int getROI()
    {return 8;}
}
class ICICI extends Bank
{
    int getROI()
    {return 7;}
}
class AXIS extends Bank
{
    int getROI()
    {return 9;}
}

public class Test3 {
    public static void main(String[] args) {
        Bank b1 = new SBI();       
        Bank b2 = new ICICI();
        Bank b3 = new AXIS();
        System.out.println("Rate of Interest of SBI = "+b1.getROI());
        System.out.println("Rate of Interest of ICICI = "+b2.getROI());
        System.out.println("Rate of Interest of AXIS = "+b3.getROI());
    }
    
}
