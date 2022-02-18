#include <iostream>
using namespace std;

int main() {

    int gender,yos,qualification,salary;
    cout << "Enter The Gender (0 for male and 1 for female) ";
    cin >> gender;
    cout << "Enter Your Years of Service ";
    cin >> yos;
    cout << "Enter Your Qualification (0 for Graduation and 1 for Post-Graduation) ";
    cin >> qualification;

    if(yos>=10 && qualification==1 && gender==0)
    {
        cout << "Your Salary is : Rs.15000";
    }
    else if(yos>=10 && qualification==0 && gender==0)
    {
        cout << "Your Salary is : Rs.10000";
    }
    else if(yos<10 && qualification==1 && gender==0)
    {
        cout << "Your Salary is : Rs.10000";
    }
    else if(yos<10 && qualification==0 && gender==0)
    {
        cout << "Your Salary is : Rs.7000";
    }

    else if(yos>=10 && qualification==1 && gender==1)
    {
        cout << "Your Salary is : Rs.12000";
    }
    else if(yos>=10 && qualification==0 && gender==1)
    {
        cout << "Your Salary is : Rs.9000";
    }
    else if(yos<10 && qualification==1 && gender==1)
    {
        cout << "Your Salary is : Rs.10000";
    }
    else if(yos<10 && qualification==0 && gender==1)
    {
        cout << "Your Salary is : Rs.6000";
    }


return 0;
}