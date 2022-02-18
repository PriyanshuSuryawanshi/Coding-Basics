#include <stdio.h>

int main() {
 
    int a[2][3],i,j;
    printf("Enter 6 Numbers\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("These are The Diagonal Numbers\n");
    for(i=0;i<2;i++)
    {
        printf("%d\n",a[i][i]);
    }
}