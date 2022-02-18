package Java.Classs;

import java.util.Scanner;

public class CreatingMultipleObjects {//name of class should have been Rectangle 

    int length;
    int breadth;

    void setdata(int l,int b)
    {
        length = l;
        breadth = b;
    }
    void calcarea()
    {
        System.out.println(length*breadth);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        CreatingMultipleObjects c1 = new CreatingMultipleObjects(),c2 = new CreatingMultipleObjects();
        c1.setdata(5,10);
        c2.setdata(3,5);

        c1.calcarea();
        c2.calcarea();
        sc.close();
    }
}
