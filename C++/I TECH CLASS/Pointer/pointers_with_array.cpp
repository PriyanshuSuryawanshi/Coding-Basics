#include <iostream>
using namespace std;

int main() {

    int number[50],*ptr;
    int n,i;
    cout << "Enter the count\n";
    cin >> n;
    cout << "Enter the numbers one by one\n";
    for(i=0;i<n;i++)
    {
    cin >> number[i];
    }
    ptr = number;
    int sum = 0;
    for(i=0;i<n;i++)
    {
        if(*ptr%2==0)
        {
            sum=sum+*ptr;
        }
        ptr++;
    }
    cout << "\nSum of even numbers : " << sum;

return 0;
}