#include <iostream>
using namespace std;

int main() {
    float salary,da,hr;
    cout << "Enter the Salary of Ramesh : ";
    cin >> salary;
    da = salary*0.4;
    hr = salary*0.2;
    cout << "Gross Salary of Ramesh : "<< salary+da+hr;

return 0;
}