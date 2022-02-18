#include <stdio.h>
void printarray(int array[]);//Declaration

void main()
{
    int array[10],i;
    printf("Enter 10 Elements of Array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printarray(array);//call
}

void printarray(int array[])//Definition
{
    int i;
    printf("This was Your Input\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",array[i]);
    }
}



