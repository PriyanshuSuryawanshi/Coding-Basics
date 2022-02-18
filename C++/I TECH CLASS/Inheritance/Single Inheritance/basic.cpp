#include <iostream>
using namespace std;

class employee
{
    protected:
    int salary;
};

class company:public employee{
    public:
     int bonus;
     void setsalary(int s)
     {
         salary=s;
     }
     int getsalary()
     {
         return salary;
     }
};

int main() {

    company myobject;
    myobject.setsalary(500);//we use setsalary bcoz salary is in private class
    myobject.bonus = 150;//we directly allot value of bonus coz it is in public class
    cout << "Salary : " << myobject.getsalary() << "\n";
    cout << "Bonus : " << myobject.bonus << "\n";

    return 0;
}