#include <stdio.h>
void transpose(int *a[][4]);
void transpose(int *a[][4])
{
    int *b[4][3],i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    printf("This was the input\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("This is Transpose\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
}

int main() {
 
    int *a[3][4];
    int i,j;
    printf("Enter 12 numbers for 2D Array(3x4)\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    transpose(a);
}