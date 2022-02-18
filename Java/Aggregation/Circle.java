// package Java.Aggregation;

class Address{}

class Employee
{
    int id;
    String n;
    Address address;
}
class Operation
{
    int square(int n)
    {
        return n*n;
    }
}

public class Circle {
    Operation op;
    double pi = 3.14;
    public double area(int radius)
    {
        op = new Operation();
        int rsquare = op.square(radius);
        return pi*rsquare;
    }
    public static void main(String[] args) {
        Circle c = new Circle();
        double result = c.area(5);
        System.out.println(result);
    }
}
