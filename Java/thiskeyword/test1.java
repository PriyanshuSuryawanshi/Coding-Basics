//Using this keyword to return current class instance
package Java.thiskeyword;

class A
{
    A getA()
    {
        return this;
    }
    void msg()
    {System.out.println("Hello Java!");}
}

public class test1 {
    public static void main(String[] args) {
        test1 t = new test1();
        new A().getA().msg();
    }
}
