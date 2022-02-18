#include <stdio.h>
void addarray(int a[5],int b[5]);
void addarray(int a[5],int b[5])
{
    printf("Function Start\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
}

int main() {

    int a[5],b[5],num;
    printf("Enter 5 Numbers of Array 1\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        a[i]=num;
    }
    printf("Enter 5 Numbers of Array 2\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        b[i]=num;
    }
    addarray(a,b);
}