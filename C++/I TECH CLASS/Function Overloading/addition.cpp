#include <iostream>
using namespace std;

int add(int a,int b)
{
    int sum = a+b;
    return(sum);
}

double add(double a,double b)
{
    double sum = a+b;
    return(sum);
}

int main() {

    int first;
    double second;
    first = add(10,20);
    second = add(4.5,5.4);
    cout << first << "\n";
    cout << second << "\n";


return 0;
}