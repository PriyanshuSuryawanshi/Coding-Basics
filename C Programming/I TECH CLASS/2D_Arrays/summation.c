#include <stdio.h>

int main() {
 
    int a[4][3],i,j;
    int summation=0;
    printf("Enter 12 numbers for summation\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            summation=summation+a[i][j];
        }
    }
    printf("Summation of numbers entered is %d\n",summation);
}