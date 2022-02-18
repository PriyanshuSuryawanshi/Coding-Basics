#include <iostream>
using namespace std;

class employee
{
    private:
    int salary;

    public:
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

    employee e1;
    e1.setsalary(500);

    cout << "Salary is " << e1.getsalary();

return 0;
}