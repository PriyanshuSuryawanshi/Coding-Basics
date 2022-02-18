#include <stdio.h>

void reversearray(int arr[5])
{
    for(int i=0;i<3;i++)
    {
        int temp;
        temp = arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=temp;
    }
    printf("After Reversing The Array\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void reversearrptr(int *ptr)
{
    for(int i=0;i<3;i++)
    {
        int temp;
        temp = ptr[i];
        ptr[i]=ptr[5-i-1];
        ptr[5-i-1]=temp;
    }
}

int main() {
 
    int a[5];
    int *pointer;
    pointer = &a[0];
    printf("Enter The 5 elements of the array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    // reversearray(a);

    printf("After Reversing The Array Using Pointer\n");
    // reversearrptr(pointer);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
 
return 0;
}