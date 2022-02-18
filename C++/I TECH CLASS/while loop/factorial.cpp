#include <iostream>
using namespace std;

int main() {

    int i,num,factorial;
    cout << "Enter the number whose Factorial you want ";
    cin >> num;
    i=1,factorial=1;
    while(i<=num)
    {
        factorial=factorial*i;
        i++;
    }
    cout << "Factorial  of "<< num << " is " << factorial;

return 0;
}