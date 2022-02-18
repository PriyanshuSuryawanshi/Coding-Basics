#include <iostream>
using namespace std;

class number
{
    public:
        int factorial(int a);
};

int factorial(int a)
{
    int i,factorial;
    for(factorial=1,i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }   
    return(factorial);
}

int main() {

    int number,ans;
 cout << "Enter The Number\n";
 cin >> number;
 cout << "Factorial is " << factorial(number);

return 0;
}