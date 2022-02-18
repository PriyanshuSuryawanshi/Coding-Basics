// Passing this as an argument to Constructor
package Java.thiskeyword;

import java.util.Scanner;

public class S2 {
    void m(S2 objS2)
    {
        System.out.println("Method is invoked");
    }
    void p()
    {
        m(this);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        S2 s = new S2();
        s.p();
        sc.close();
    }

}
