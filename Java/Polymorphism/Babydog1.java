package Java.Polymorphism;

class Animal
{
    void eat(){System.out.println("eating");}
}

class Dog extends Animal
{
    void eat(){System.out.println("eating fruits");}
}

public class Babydog1 extends Dog {
    public static void main(String[] args) {
        Animal a = new Babydog1();
        a.eat();
    }
}
