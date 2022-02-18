#include <iostream>
using namespace std;

int no_of_cases(int num);
int no_of_cases(int num)
{
    
    if(num==1)
    {return 1;}
    else
    {return num*no_of_cases(num-1);}
}

void copyarray(int arr2[],int arr1[]);//arr1 copied in arr1
void copyarray(int arr2[],int arr1[])
{
    for (int i=0;i<=4;i++)
    {
        arr2[i] = arr1[i];
    }
}

void swap(int *ptr1,int *ptr2);
void swap(int *ptr1,int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int arr[4] = {1,2,3,4};
    int arr2[4];
    copyarray(arr2,arr);

    cout << "Total number of cases : " << no_of_cases(4) << endl;
    
    for(int i=0;i<4;i++)
    {
        swap(arr2[0],arr2[i]);
        for(int j=0;j<(no_of_cases(4))/4;j++)
        {
            swap(arr2[2],arr2[3]);
            for(int k=0;k<4;k++)
            {
                
                cout << arr2[k] << " ";
               
            } 
            // swap(arr2[1],arr2[2]);
            cout << endl;
        }
        swap(arr2[0],arr2[i]);
    }
    return 0;
}