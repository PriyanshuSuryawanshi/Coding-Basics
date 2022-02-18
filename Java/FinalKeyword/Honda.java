package Java.FinalKeyword;

class car
{
    final void run()
    {
        System.out.println("Running");
    }
}

public class Honda extends car {
    // void run()
    // {
    //     System.out.println("Running Safely at 100 kmph");
    //      // Should show error because we are tring to change final method i.e.run method
    // }
    public static void main(String[] args) {
        Honda civic = new Honda();
        civic.run();
    }
}
