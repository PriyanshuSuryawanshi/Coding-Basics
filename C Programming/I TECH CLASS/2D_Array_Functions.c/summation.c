#include <stdio.h>
void addall(int a[][3])
{
    int i,j,summation=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            summation=summation+a[i][j];
        }
    }
    printf("Summation of numbers entered is %d\n",summation);
}
int main() {
 
    int a[3][3],i,j;
    printf("Enter 9 numbers for summation\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    addall(a);
}