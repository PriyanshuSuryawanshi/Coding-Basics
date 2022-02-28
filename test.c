#include <stdio.h>

int main()
{
    int location=0,i,ub,element;
    ub = 4;

    int arr[10] = {11,23,45,67,88};

    printf("Enter the element you want to Search : ");
    scanf("%d",&element);

    for(i=0;i<ub;i++)
    {
        if(arr[i] == element)
        {
            printf("Element was found at position : %d",location);
            break;
        }
        else if(arr[i] > element)
        {
            // printf("Location : %d\n",location);
            break;
        }
        location++;
    }
    
    {
        printf("Element not Found So added it !!!\n");
        for(i=ub;i>=location;i--)
        {
            arr[i+1] = arr[i];
        }
        arr[location] = element;

        printf("Your Array after insertion is :- \n");

        for(i=0;i<=ub+1;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    
    return 0;
}