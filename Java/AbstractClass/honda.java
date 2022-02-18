
abstract class bike
{abstract void run();}

public class honda extends bike{
    void run()
    {System.out.println("Running");}
    public static void main(String[] args) {
        bike b1 = new honda();
        b1.run();
    }
}
