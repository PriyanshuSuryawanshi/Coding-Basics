#include <iostream>
using namespace std;

class Employee
{
    protected:
    int salary;
};

class Programmer : public Employee
{
    public :
    int bonus;
    void setsalary(int s)
    {
        salary = s;
    }
    int getsalary()
    {
        return (salary+bonus);
    }
};

int main()
{
    Programmer myobject;
    myobject.setsalary(10000);
    myobject.bonus = 1000;
    
    cout << "Salary : " << myobject.getsalary();

    return 0;
}