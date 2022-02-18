#include <stdio.h>

int main() {
 
    int a[3][4],b[4][3],i,j;
    printf("Enter 12 numbers for 2D Array\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
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