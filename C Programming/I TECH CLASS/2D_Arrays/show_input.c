#include <stdio.h>

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
    printf("This was the input\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }

}