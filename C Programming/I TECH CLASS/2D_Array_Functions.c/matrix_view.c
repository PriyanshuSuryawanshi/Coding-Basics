#include <stdio.h>

void matrix(int a[][4]);
void matrix(int a[][4])
{
    int i,j;
    printf("This was the input\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}

int main() {
 
    int a[3][4],i,j;
    printf("Enter 12 numbers for 2D Array\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    matrix(a);
}
