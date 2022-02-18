#include <stdio.h>
void printdiagonal(int a[][3]);
void printdiagonal(int a[][3])
{
    int i,j;
    printf("These are The Diagonal Numbers\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",a[i][i]);
    }
}

int main() {
 
    int a[3][3],i,j;
    printf("Enter 9 Numbers\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printdiagonal(a);
}