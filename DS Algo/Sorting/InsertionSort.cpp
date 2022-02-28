#include <iostream>
using namespace std;

int main()
{
    int arr[10],i,j,ub,temp;
    cout << "Enter the Number of Elements You want to enter : ";
    cin >> ub;

    cout << "Enter the Elements : " << endl;
    for(i=0;i<ub;i++)
    {
        cin >> arr[i];
    }

    for(i=1;i<ub;i++)
    {
        temp = arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }

    for(i=0;i<ub;i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}