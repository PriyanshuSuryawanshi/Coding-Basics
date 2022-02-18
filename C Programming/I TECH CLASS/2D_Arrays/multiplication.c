#include <stdio.h>

int main() {
 
    int a[2][3],i,j;
    int multiplication=1;
    printf("Enter 6 numbers for multiplication\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            multiplication=multiplication*a[i][j];
        }
    }
    printf("Summation of numbers entered is %d\n",multiplication);
}