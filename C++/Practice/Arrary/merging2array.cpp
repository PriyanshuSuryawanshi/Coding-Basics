#include <iostream>
using namespace std;

void merge(int *a,int *b,int *c);
void merge(int *a,int *b,int *c)
{
    for(int i = 0;i<5;i++,a++,c++)
    {
        *c = *a;
    }
    for(int i = 0;i<5;i++,b++,c++)
    {
        *c = *b;
    }
}

int main()
{
    
    int arr1[5],arr2[5],arr3[10];
    int *ptr1,*ptr2,*ptr3;
    ptr1 = &arr1[0];
    ptr2 = &arr2[0];
    ptr3 = &arr3[0];    

    cout << "Enter 5 numbers of the Array\n";
    for(int i=0;i<5;i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter 5 numbers of the 2nd Array\n";
    for(int i=0;i<5;i++)
    {
        cin >> arr2[i];
    }

    merge(ptr1,ptr2,ptr3);

    cout << "This is array 3 : " << endl;
    for(int i=0;i<10;i++)
    {
        cout <<  arr3[i] << endl;
    }

    return 0;
}