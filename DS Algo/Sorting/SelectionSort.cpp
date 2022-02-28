#include <iostream>
using namespace std;
//In Progress
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

    

    for(i=0;i<ub;i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}