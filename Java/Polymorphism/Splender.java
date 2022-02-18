package Java.Polymorphism;

class Bike
{
    void run()
    {
        System.out.println("running");
    }
}

public class Splender extends Bike{
    void run()
    {
        System.out.println("running safely with 60KM");
    }
    public static void main(String[] args) {
        Bike b = new Splender();
        b.run();
    }
}
