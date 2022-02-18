#include <iostream>
using namespace std;

int main() {

    int num1,num2,count,final;
    count = 1,final = 1;
    cout << "Enter the Number ";
    cin >> num1;
    cout << "Enter The Power ";
    cin >> num2;

    while(count<=num2)
    {
        final = final*num1;
        count++;
    }
    cout << num1 << " Raise to " << num2 << " is " << final;

return 0;
}