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

public class circlee {
    Operation op;
    double pi = 3.14;
    double area(int radius)
    {
        op = new Operation();
        int rsquare = op.square(radius);
        return pi*rsquare;
    }
    public static void main(String[] args) {
        circlee c = new circlee();
        double result = c.area(10);
        System.out.println(result);
    }
}
