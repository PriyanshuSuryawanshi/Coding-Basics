#include <iostream>
using namespace std;

void add(int *a);
void add(int *a)
{
    int sum=0;
    for(int i=0;i<5;i++,a++)
    {
        sum = sum + *a;
    }
    cout << "sum = " << sum;
}

int main()
{
    int arr[5];
    int *ptr = &arr[0];
    cout << "Enter 5 numbers of the Array\n";
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    add(ptr);
    
    return 0;
}