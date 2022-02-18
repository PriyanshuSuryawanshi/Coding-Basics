#include <stdio.h>

int main() {
 
    int a[2][3],i,j,sum;
    sum=0;
    //2 row;3 column;
    printf("Enter 6 Numbers\n");
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
            sum=sum+a[i][j];
        }
        printf("summation of row num %d is %d\n",i+1,sum);
        sum=0;
    }
}