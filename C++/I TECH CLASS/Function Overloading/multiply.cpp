#include <iostream>
using namespace std;

int multiply(int a,int b)
{
    int multiplication = a*b;
    return(multiplication);
}

double multiply(double a,double b)
{
    double multiplication = a*b;
    return(multiplication);
}

int main() {

    int first;
    double second;
    first = multiply(10,20);
    second = multiply(4.5,5.4);
    cout << first << "\n";
    cout << second << "\n";


return 0;
}