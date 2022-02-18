#include <iostream>
using namespace std;

int main()
{
    int arr[20],i,ub,location,element;

    cout << "Enter the Number elements you want to Enter" << endl;
    cin >> ub;

    cout << "Enter the elements of Array" << endl;

    for(i=0;i<ub;i++)
    {
        cin >> arr[i];
    }

    cout << "Your Array is :- " << endl;

    for(i=0;i<ub;i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Enter the location at which you want to Delete an element : ";
    cin >> location;

    for(i=location-1;i<ub;i++)
    {
        arr[i] = arr[i+1];
    }

    cout << "Your Array after insertion is :- " << endl;

    for(i=0;i<ub-1;i++)
    {
        cout << arr[i] << endl;
    }

    
    return 0;
}