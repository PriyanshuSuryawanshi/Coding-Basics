#include <stdio.h>

int main() {
 
    int a[10],i,evencount,oddcount;
    evencount=oddcount=0;
    printf("Enter 10 Numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
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