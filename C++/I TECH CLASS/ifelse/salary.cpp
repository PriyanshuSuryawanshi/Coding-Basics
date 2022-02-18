#include <iostream>
using namespace std;

int main() {

    float salary,hra,da,gross_salary;
    cout << "Enter the salary of the Person : ";
    cin >> salary;

    if(salary<1500)
    {
        hra = salary * 0.10;
        da = salary * 0.90;
        gross_salary = salary+hra+da;
        cout << "Gross Salary of the person Rs." << gross_salary;
    }
    else if(salary>=1500)
    {
        hra = 500;
        da = salary * 0.98;
        gross_salary = salary+hra+da;
        cout << "Gross Salary of the person Rs." << gross_salary;
    }

return 0;
}