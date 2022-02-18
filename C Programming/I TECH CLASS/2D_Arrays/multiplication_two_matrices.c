#include <stdio.h>

int main() {
 
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter The 9 Numbers of 1st matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter The 9 Numbers of 2nd matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int k,l;
    k=l=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][k]*b[k][l] + a[i][k+1]*b[k+1][l] + a[i][k+2]*b[k+2][l];
            l++;
            k=0;
        }
        l=0;
    }
    printf("Solution After Multiplication of 2 Martices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
 
}