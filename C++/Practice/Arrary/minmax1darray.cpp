#include <iostream>
using namespace std;

void minmax(int *a);
void minmax(int *a)
{
    int min,max;
    min = max = *a;
    for(int i=0;i<5;i++,a++)
    {
        if(min>*a)
        {
            min = *a;
        }
        if(max<*a)
        {
            max = *a;
        }
    }
    cout << min << " " << max; 
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
    minmax(ptr);
    
    return 0;
}