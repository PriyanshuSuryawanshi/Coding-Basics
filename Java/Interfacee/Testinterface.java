//Interface Inheritance
package Java.Interfacee;

interface Printable
{
    void print();
}

interface Showable extends Printable
{
    void show();
}

public class Testinterface implements Showable {

    @Override
    public void show() {
        System.out.println("Hello");
    }

    @Override
    public void print() {
        System.out.println("Welcome");
    }

    public static void main(String[] args) {
        Testinterface obj = new Testinterface();
        obj.show();
        obj.print();        
    }   
}
