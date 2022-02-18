#include <stdio.h>

void multiplymatrices(int a[][3],int b[][3]);
void multiplymatrices(int a[][3],int b[][3])
{
    int i,j,c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Solution After Addition of 2 Martices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
int main() {
 
    int a[3][3],b[3][3],i,j;
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
    multiplymatrices(a,b);
}