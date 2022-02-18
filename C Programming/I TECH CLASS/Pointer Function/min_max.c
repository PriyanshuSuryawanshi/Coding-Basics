#include <stdio.h>
void maxmin(int a[]);
void maxmin(int a[])
{
    int lowest,max,i;
    max=lowest=a[0];
    for(i=0;i<5;i++)
    {
        if(lowest>a[i])
        {
            lowest=a[i];
        }
    }
    printf("Minumum Number is %d\n",lowest);

    for(i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Maximum Number is %d\n",max);
}

int main() {
    int a[5],i;
    printf("Enter The 5 Numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    maxmin(a);
}