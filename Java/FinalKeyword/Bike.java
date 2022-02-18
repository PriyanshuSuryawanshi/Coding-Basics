//Final Variable
package Java.FinalKeyword;

import java.util.Scanner;

public class Bike {
    final int speedlimit = 90;
    void run()
    {
        // speedlimit = 400; // This line should give error coz we are changing value of final variable
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Bike b1 = new Bike();
        b1.run();
        System.out.println(b1.speedlimit);
        sc.close();
    }
}
