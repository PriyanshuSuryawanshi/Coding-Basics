package Java.Interfacee;

interface printable
{ void print();}

interface showable
{void show();}

public class A7 implements printable,showable {

    public void show() 
    {
        System.out.println("Hello");        
    }

    public void print()
    {
        System.out.println("Welcome");        
    }

    public static void main(String[] args) {
        A7 obj = new A7();
        obj.print();
        obj.show();        
    }
    
}
