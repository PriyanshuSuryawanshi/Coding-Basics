abstract class shape
{
    abstract void draw();
}

class rectangle extends shape
{   
    void draw()
    {
        System.out.println("Drawing rectangle");
    }
}

class circle extends shape
{
    void draw()
    {
        System.out.println("Drawing Circle");
    }
}

public class Testabstraction 
{
    public static void main(String[] args) {
        shape s = new circle();
        s.draw();
    }    
}
