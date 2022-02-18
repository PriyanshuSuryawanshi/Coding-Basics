#include <iostream>
using namespace std;

class car
{
public:
    string brand;  
    string model;  
    int year;      

 car(string x, string y, int z) { 
      brand = x;
      model = y;
      year = z;
    }
};


int main() {

  car carno1("Ford", "Endevour", 2019);
  car carno2("Toyota", "Fortuner", 2021);

  cout << carno1.brand << " " << carno1.model << " " << carno1.year << "\n";
  cout << carno2.brand << " " << carno2.model << " " << carno2.year << "\n";

return 0;
}