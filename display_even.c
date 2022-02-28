#include<stdio.h>

int main()
{
    int arr[3][3],element,found=0;
    printf("Enter the elements of array\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            scanf("%d",&arr[r][c]);
        }
    }

    printf("Enter the elements You want to Search : ");
    scanf("%d",&element);

    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(arr[r][c]==element)
            {
                found = 1;
                printf("%d is present at (%d,%d)\n",arr[r][c],r,c);
                break;
            }
        }
    }
    if(found==0)
    {
        printf("Element not found!!!");
    }

    return 0;
}