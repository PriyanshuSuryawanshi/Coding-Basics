#include <stdio.h>
void evenoddcount(int *a);
void evenoddcount(int *a)
{
    int i,evencount,oddcount;
    evencount=oddcount=0;
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("%d even numbers were entered\n",evencount);
    printf("%d odd numbers were entered\n",oddcount);
}

int main() {
 
    int a[10],i;

    printf("Enter 10 Numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    evenoddcount(a);
}