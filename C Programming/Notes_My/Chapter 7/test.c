
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
    printf("Array In Function After reversing\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}


int main() {
 
    int a[5];
    printf("Enter The 5 elements of the array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    reversearray(a);

    printf("After Function\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
 
return 0;
}