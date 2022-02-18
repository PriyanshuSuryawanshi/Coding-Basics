#include <stdio.h>
void evenoddcount(int array[10]);//Declaration
void evenoddcount(int array[10])//Definition
{
int evencount,oddcount,i;
evencount=oddcount=0;
for(i=0;i<10;i++)
    {
        if(array[i]%2==0)
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
    evenoddcount(a);//call
}