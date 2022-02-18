#include <iostream>
using namespace std;

int main()
{
    int arr[5],i;
    cout << "Enter the elements of Array" << endl;

    for(i=0;i<5;i++)
    {
        cin >> arr[i];
    }

    for(i=0;i<5;i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}