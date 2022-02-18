#include <iostream>
using namespace std;

class car
{
    public : 
        string brand;
        string model;
        int year;
        car(string a,string b,int y)
        {
            brand = a;
            model = b;
            year = y;
        }
};

int main()
{
    car c1("BMW","X5",1999);
    car c2("Toyota","Fortuner",2021);

    cout << c1.brand << " " << c1.model << " " << c1.year << endl;
    cout << c2.brand << " " << c2.model << " " << c2.year << endl; 
    
    return 0;
}