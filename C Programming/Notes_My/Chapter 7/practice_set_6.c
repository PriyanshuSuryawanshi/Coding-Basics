#include <stdio.h>

int positive_integer_count(int a[5])
{
    int positivecount=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]>=0)
        {positivecount++;}
    }
    return positivecount;
}

int main() {
 
    int a[5];
    printf("Enter The 5 elements of the array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Number of positive Integers is %d\n",positive_integer_count(a));
 
return 0;
}