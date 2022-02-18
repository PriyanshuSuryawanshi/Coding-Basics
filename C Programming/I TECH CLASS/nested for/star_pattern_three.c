#include <stdio.h>

int main()
{
    int num,i,j;
    printf("Enter The Number Of Lines Of Pattern You Want\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        for(j=num-i;j>=1;j--)
        {
        printf(" ");  
        }

        for(j=i;j>=1;j--)
        {
        printf("* ");  
        }

        for(j=num-i-1;j>=1;j--)
        {
        printf(" ");  
        }

        printf("\n");
    }
}

