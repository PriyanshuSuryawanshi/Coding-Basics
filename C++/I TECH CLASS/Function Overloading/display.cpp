#include <iostream>
using namespace std;

void info(string name,int rollno)
{
    cout << "Name is " << name << "\n";
    cout << "Roll Number is " << rollno << "\n";
}

void info(int phy,int chem,int maths)
{
    cout << "Marks in Physics is " << phy << "\n";
    cout << "Marks in Chemistry is " << chem << "\n";
    cout << "Marks in Maths is " << maths << "\n";

}

int main() {

    int rollno,phy,chem,maths;
    string name;
    name = "Ramesh";
    rollno = 1;
    phy = 10,chem = 20,maths = 30;

    info(name,rollno);
    info(phy,chem,maths);

return 0;
}