#include <stdio.h>
void columnwiseaddition(int a[][3]);
void columnwiseaddition(int a[][3])
{
    int i,j,sum;
    sum=0;
    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            sum=sum+a[i][j];
        }
        printf("summation of column num %d is %d\n",i,sum);
        sum=0;
    } 
}
int main() {
 
    int a[2][3],i,j,sum;
    //2 row;3 column;
    printf("Enter 6 Numbers (for 2x3 Array)\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    columnwiseaddition(a);
}