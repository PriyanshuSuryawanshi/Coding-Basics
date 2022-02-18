#include <stdio.h>
void display(int *a);
void display(int *a)
{
    int i;
    i=1;
    printf("Start\n");
    while(i<=10)
    {
        printf("%d\n",*a);
        a++;i++;
    }
}

void main() {
    int arr[10],i;
    printf("Enter 10 Elements for array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr);
}

