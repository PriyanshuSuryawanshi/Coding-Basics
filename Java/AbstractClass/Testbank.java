abstract class Bank
{
    abstract int rateofinterest();
}

class SBI extends Bank
{
    int rateofinterest()
    {
        return 7;
    }
}
class PNB extends Bank
{
    int rateofinterest()
    {
        return 8;
    }
}

public class Testbank {
    public static void main(String[] args) {
        Bank b = new SBI();
        int ROI = b.rateofinterest();
        System.out.println("ROI = "+ROI);
    }
}
