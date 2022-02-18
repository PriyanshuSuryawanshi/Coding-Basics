#include <stdio.h>
void addarray(int  num1[],int num2[]);//Decleration

void main() 
{
    int a[5],b[5],i;
    printf("Enter 5 Numbers of 1st array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 5 Numbers of 2nd array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    addarray(a,b);//call
}

void addarray(int num1[],int num2[])//Definition
{
    int i,c[10];
    printf("All your inputs are as follows:\n");
    for(i=0;i<5;i++)
    {
        c[i]=num1[i];
        printf("%d\n",c[i]);
    }
    for(i=5;i<10;i++)
    {
        c[i]=num2[i-5];
        printf("%d\n",c[i]);
    }
}