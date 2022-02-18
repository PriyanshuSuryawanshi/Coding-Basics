#include <iostream>
using namespace std;

int main()
{
    int arr[10],location=0,i,ub,element;
    cout << "Enter the Number elements you want to Enter" << endl;
    cin >> ub;

    cout << "Enter the elements of Array" << endl;

    for(i=0;i<ub;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the elements you want to Search : " << endl;
    cin >> element;

    for(i=0;i<ub;i++)
    {
        location++;
        if(arr[i] == element)
        {
            cout << "Element was found at position : " << location << endl;
            break;
        }
    }
    if(location == ub)
    {
        cout << "Element not Found !!!";
    }
    
    return 0;
}