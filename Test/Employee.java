package Test;

class Address
{
    String city,state,country;
    Address(String city,String state,String country)
    {
        this.city = city;
        this.state = state;        
        this.country = country;        
    }
}

public class Employee 
{
    int id;
    String name;
    Address address;
    
    public Employee(int id,String name,Address address)
    {
        this.id = id;
        this.name = name;
        this.address = address;        
    }

    void display()
    {
        System.out.println(id+" "+name);
        System.out.println(address.city+" "+address.state+" "+address.country);
    
    }
    public static void main(String[] args)
    {
        Address address1 = new Address("Gzb", "UP", "India");
        Address address2 = new Address("Gno", "UP", "India");
        Employee e1 = new Employee(11, "Ramesh", address1);        
        Employee e2 = new Employee(22, "Suresh", address2);
        e1.display();        
        e2.display();        
    }
}
